#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bibliotecautn.h"
#include "utn.h"
#include "empleado.h"


#define TAM_ARRAY 10
#define LEN_LISTA 100
#define LEN_LISTA_EMPLEADOS 200
#define LEN_LISTA_NOMBRE 50


/*typedef struct
{
    int idEmpleado;
    int isEmpty;
    char nombre[LEN_LISTA_NOMBRE];
    char apellido[LEN_LISTA_NOMBRE];
}Empleado;*/

int main()
{



}
/*int number;
if (!getNumber(&number, "Ingrese numero: \n", "Intente nuevamente", -5, 9999, 3))

{return -1;};
return 0;*/


    /*int i;
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
    return 0;*/

    //char nombres [LEN_LISTA][LEN_LISTA_NOMBRE];

    /*strncpy(nombres[0], "toto", 20);

    printf("nombre: %s \n", nombres[0]);*/

    /*int i;
    //inicializacion
    int posLibre;
    int posEliminar;
    char buffer[LEN_LISTA_NOMBRE];
    for (i=0;i<LEN_LISTA;i++)
    {
        nombres[i][0]='\0';
    }
    int opcion=0;
    while(1)
    {

        if(!getNumber(  &opcion,
                    "1)Ingresar\n2)listar\n3)Borrar\n",
                    "NO! Intenta nuevamente\n",
                    1, 10, 2))
        {
        printf("elegiste: %d\n", opcion);
        }
        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre\n");
                if(buscarLugarLibre(nombres, &posLibre, LEN_LISTA)==0)
                {
                    printf("se encontró lugar libre en posición %d\n", posLibre);
                    getString(  nombres[posLibre],
                                "Ingrese nombre:\n",
                                "NO! Intenta nuevamente\n",
                                1,LEN_LISTA_NOMBRE, 3);
                    printf("nombre ingresado: %s\n",nombres[posLibre]);

                }
                break;
            }
            case 2:
            {
                for (i=0;i<10;i++)
                    {
                    printf("-%d: %s\n",i,nombres[i]);
                    }
                break;
            }
            case 3:
            {
            for (i=0;i<10;i++)
                    {
                    printf("-%d: %s\n",i,nombres[i]);
                    }
                getString(  buffer,
                            "Ingrese nombre a borrar:\n",
                            "NO! Intenta nuevamente\n",
                            1,LEN_LISTA_NOMBRE, 3);
                            for (i=0;i<10;i++)
                    {
                    printf("-%d: %s\n",i,nombres[i]);
                    }
                if(buscarNombre(buffer, nombres, LEN_LISTA, &posEliminar)==0)
                {
                    nombres[posEliminar][0]='\0';
                }else
                {
                    printf("No se encontró nombre: %s\n", buffer);
                }

                break;
            }
            }

    opcion=0;
    }

    return 0;
*/




