#include <stdio.h>
#include <stdlib.h>
#include "no.h"

P_No cria_no(int valor)
{
    P_No novo = malloc(sizeof(No));
    novo->dados.valor = valor;
    novo->direito = NULL;
    novo->esquerdo = NULL;

    return novo;
}

void exibe(P_No no)
{
    if(no)
    {
        printf("o valor do no e: %d \n", no->dados.valor);
    }
}