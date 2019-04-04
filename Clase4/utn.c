#include <stdio.h>
#include <stdlib.h>

void pruebita(void)
{
printf("hola mundo desde utn.c\n");
}

int utn_getNumber(int *puntero, int max, int min, int reintentos, char* msg, char* msgError)
{
int aux;
int retorno=-1;
while(reintentos>0){
printf("%s",msg);
if (scanf("%d",&aux)==1)
{
    if (aux>=min && aux<=max)
    {
        retorno=0;
        break;
    }
}
else {
    printf("%s",msgError);
    reintentos--;
}
};

*puntero=aux;
return retorno;
};


int utn_getArrayInt (   int *pArrayResultados,
                        int limite,
                        char *mensaje,
                        char *mensajeError,
                        int maximo,
                        int minimo,
                        int reintentos)
{
int i;
int buffer;
int ret=0;
for (i=0; i<limite;i++){
ret=utn_getNumber(&buffer, maximo,minimo, reintentos, mensaje, mensajeError);
if (ret){
break;
}
pArrayResultados[i]=buffer;
}
return ret;
}

int calcularPromedio(int *pArrayInt, int limite, float *pResultado){
int i;
int acumulador=0;
for (i=0; i<limite; i++) {
acumulador=acumulador + pArrayInt[i];
}
*pResultado=(float)acumulador/limite;
return 0;
}

int swap(int *A, int *B)
{
    if ((A!=NULL)&&(B!=NULL)){
    int *buffer;
    buffer=A;
    A=B;
    B=buffer;
    return 0;
    }
    return -1;
}



int ordenarArray(int*pArrayParaOrdenar, int limite)
{
    int flagSwap;
    int i;
    do{
    flagSwap=0;
    for(i=0;i<limite-1;i++){
    if(pArrayParaOrdenar[i]>pArrayParaOrdenar[i-1]){
    swap(&pArrayParaOrdenar[i],&pArrayParaOrdenar[i-1]);
    flagSwap=1;
    }
    }
    }
    while (flagSwap==1);
}
