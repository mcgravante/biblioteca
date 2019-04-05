#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM_ARRAY 10

int main()
{
int i;
int array[TAM_ARRAY];
utn_getArrayInt(array,TAM_ARRAY,"Ingrese numeros","Error",99,1,3);
printf("Array: \n");
for(i=0;i<TAM_ARRAY;i++){
printf("%d\n",array[i]);
};
float promedio=0;
utn_calcularPromedio(array,TAM_ARRAY,&promedio);
printf("Promedio: %.2f\n", promedio);

utn_ordenarArrayMayorMenor(array,TAM_ARRAY);
printf("Array ordenado: \n");
for(i=0;i<TAM_ARRAY;i++){
printf("%d\n",array[i]);
};

int maximo;
utn_getMaximo(array,TAM_ARRAY, &maximo);
printf("Maximo: %d\n",maximo);

int minimo;
utn_getMinimo(array,TAM_ARRAY, &minimo);
printf("Minimo: %d\n",minimo);

utn_encontrarNumero(array, TAM_ARRAY, 99, 1, 3, "Ingrese numero a encontrar en el array", "Error");
return 0;
}
