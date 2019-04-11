#ifndef BIBLIOTECAUTN_H_INCLUDED
#define BIBLIOTECAUTN_H_INCLUDED

int getString(  char *pResultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);

int getNumber(  int *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);

int isValidNumber (char* cadena);

#endif // BIBLIOTECAUTN_H_INCLUDED
