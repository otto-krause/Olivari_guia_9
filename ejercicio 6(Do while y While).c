#include <stdio.h>
#include <stdlib.h>
 int main()
{	int promedio=0, pro_alum=0, I=0, nota=0, J=0, otro_prom=0, promedio2=0;	
	while (I<30)
	{	
	otro_prom=0;	
	printf("Alumno nro%d : \n", I+1);	
	while (J<10)
{			printf(" La nota nro%d del alumno es: ",J+1);			
scanf("%d", &nota);		
	otro_prom+=nota;		
	J++;		
}		J=0;	
	promedio2=otro_prom/10;		
printf(" El promedio del alumno es: %d\n",promedio2);		
pro_alum=pro_alum+promedio2;	
	I++;	
}		promedio=pro_alum/30;
	printf("La nota promedio es: \n%d\n", promedio);	
}