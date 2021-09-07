#include <stdlib.h>
#include <stdio.h> 
int main()
 {
 int inferior, superior;
 printf( "\n Introduzca numero (entero) inferior: " ); 
scanf( "%d", &inferior ); 
printf( "\n Introduzca numero (entero) superior: " ); 
scanf( "%d", &superior ); 
if ( inferior <= superior )
 do 
{ 
printf( "%d ", inferior); inferior++; } 
while ( inferior <= superior ); 
else printf( "ERROR: %d no es mayor o igual que %d", superior, inferior ); 
 return 0; 
}