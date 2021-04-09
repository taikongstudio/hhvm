<?hh <<__EntryPoint>> function main(): void {
$d = date_create( "Sun, 22 May 1955 02:00:00 +0200" );
var_dump( $d );
echo $d->format( DATE_ISO8601 ), "\n";
echo $d->format( 'U' ), "\n\n";

$d->setTimezone( new DateTimeZone( 'Europe/Budapest' ) );
var_dump( $d );
echo $d->format( DATE_ISO8601 ), "\n\n";
echo $d->format( 'U' ), "\n\n";
}
