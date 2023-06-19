# include <stdio.h>
int main( )
{
int a = 300, b, c ;
if ( a >= 400 )
 b = 300 ;
c = 200 ;
printf ( "%d %d\n", b, c ) ;
return 0 ;
}



//output is: 4194432 200
//value of b is garbage, because no value assigned to b