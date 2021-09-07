#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivo=0, negativo=0, cero=0, I=1, numero=0, cantidad=0;
printf("Ingrese la cantidad de numeros a tomar en cuenta: ");
        scanf("%d", &cantidad);
        while(I<=cantidad) {
             printf("Introduzca un numero entero: ");
             scanf("%d", &numero);
             if(numero>0)
             {
                  positivo+=+1;
             }
             else
             if (numero<0)
             {
                  negativo+=+1;
             }
             else
             cero+=+1;
        }

    printf("La cantidad de numeros positivos es: %d\n", positivo);
    printf("La cantidad de numeros negativos es: %d\n", negativo);
    printf("La cantidad de ceros es: %d\n", cero);

}
