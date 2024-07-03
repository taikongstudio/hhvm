from . import base  # usort: skip (must be first, needed for sys.path side-effects)
import hhvm_lldb.lookup as lookup
import hhvm_lldb.utils as utils


class LookupCommandTestCase(base.TestHHVMBinary):

    def setUp(self):
        super().setUp(test_file="quick/method2.php", interp=True)

    def test_lookup_func_command(self):
        # Note: We can choose an earlier point to break;
        # just need to make sure the functions are loaded.
        self.run_until_breakpoint("lookupObjMethod")
        _, output = self.run_commands(["lookup func 0"])
        self.assertRegex(
            output.strip(), r"\(HPHP::Func \*\) (m_s|\$\d+) = (NULL|nullptr)"
        )


class LookupHelperTestCase(base.TestHHVMBinary):

    def setUp(self):
        super().setUp(test_file="slow/reified-generics/reified-parent.php")

    def test_lookup_func_from_frame_pointer(self):
        self.run_until_breakpoint("checkClassReifiedGenericMismatch")
        act_rec_type = utils.Type("HPHP::ActRec", self.target).GetPointerType()
        fp1 = utils.reg("fp", self.frame.parent)
        self.assertIsNotNone(fp1)
        func1 = lookup.lookup_func_from_frame_pointer(fp1.Cast(act_rec_type))
        self.assertTrue(func1 is not None and func1.GetError().Success())
        fname = utils.nameof(func1)
        self.assertEqual(fname, "C::86reifiedinit")
