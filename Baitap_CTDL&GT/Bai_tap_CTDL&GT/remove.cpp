#include <stdio.h>

int main ()
{
  if( remove( "delete_File_exe.exe" ) != 0 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}