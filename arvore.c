#include <stdio.h>
#include <stdlib.h>

typedef struct Dados //Define um novo tipo (Dados) que é do tipo s"truct Dados";
{
    int valor; // Vai armazenar o dado do nó da árvore;
}Dados;

typedef struct No //Define um novo tipo (No) que é do tipo "struct No";
{
    Dados dados; //armazena uma váriavel do tipo Dados (struct Dados) que irá armazenar o conteúdo do nó
    struct No *esquerdo; // armazena uma variavél do tipo No que irá apontar para o endereço do nó esquedo
    struct No *direito; // armazena uma variavél do tipo No que irá apontar para o endereço do nó direito
}No;

typedef No* P_No; // Define um novo tipo (P_no) que é do tipo um ponteiro para(aponta) No;

P_No cria_no(int valor) //Precisamos usar uma variável do tipo ponteiro porque árvores são estruturas 
{                       //hierarquicas recursivas, e também porque podem possuir um TAMANHO VARIÁVEL.

    P_No novo_no = (P_No)malloc(sizeof(No)); //aloca memória dinamicamente para criar um novo nó
    novo_no->dados.valor =valor; // como ponteiro não é uma instância direta da estrutura (ele aponta   para ela) precisas de algum jeito acessar os membros da estrutura que ele aponta, é com o operado especial ->
    novo_no->esquerdo = NULL;
    novo_no->direito = NULL;

    return novo_no;
}

void exibe_no (P_No no) 
{
    if(no) //verifica se nó não é nulo
    {
        printf("valor do no: %d \n", no->dados.valor);
    }
}

int main()
{
    P_No raiz = cria_no(500);

    exibe_no(raiz);

    free(raiz);

    return 0;
}