#include <stdio.h>
#include <stdlib.h>
#include "no.h"

int main() {
    P_No raiz = cria_no(500); // cria a raiz da árvore com valor 500

    exibe_no(raiz); // exibe o valor do nó raiz

    free(raiz); // libera a memória alocada

    return 0;
}