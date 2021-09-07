#include<stdio.h> 
#include<stdlib.h>
#include<conio.h> 
int main () 
{ 
int num,fac,r=1;
 printf("Ingresa el numero para calcular el\nfactorial : ");
 scanf("%d",&num); 
fac=num; 
while(fac>0)
{ 
r=r*fac; fac=fac-1; 
} 
printf("\n\nEl resultado de factorial de %d es:\n %d",num,r); 
}