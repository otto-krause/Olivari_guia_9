#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bas=0, exp=0, resultado=0, I=1;
    resultado=1;
    printf("Introduzca un numero de base: ");
    scanf("%d", &bas);
    printf("Introduzca un numero de exponente: ");
    scanf("%d", &exp);

while (I<=exp)
{
    resultado=resultado*bas;
    I++;
}

    printf("El numero es: \n%d\n", resultado);

}
