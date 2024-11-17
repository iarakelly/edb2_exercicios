#ifndef NO_H
#define NO_H
#include "dados.h"
#include <stdlib.h>

typedef struct No
{
    Dados dados;
    struct No *esquerdo;
    struct No *direito;
}No;

typedef No* P_No;

P_No cria_no(int valor);
void exibe_no(P_No no);

#endif