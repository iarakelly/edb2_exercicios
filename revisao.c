#include <stdio.h>
#include <stdlib.h>

int main()
{
    //----------------------------------TYPEDEF----------------------------------
    /*
    typedef float nota; //Define um novo tipo de dado (nota) que é do tipo float

    // por isso falamos de redefinição de tipo.

    nota n1 = 3; // agora posso trabalhar com nota como um tipo de dado
    nota n2 = 7;
    nota n3 = 6;
    nota media = (n1+n2+n3)/3;

    printf("%f", media);

    */

   //----------------------------------PONTEIROS----------------------------------
   /*
   int x = 15;

   int *ptr;

   ptr = &x;

   printf("o conteudo de x e %d \n", x);
   printf("o endereco de x e %p \n", &x);
   printf("o endereco do ponteiro para x aramazenado em ptr e %p \n", ptr);
   printf("o conteudo que o ponteiro ptr para x e %d \n", *ptr);

   */

   //*ptr = acessa o conteúdo do endereço da varíavel que ptr aponta.
   //ptr = vê o endereço da váriável.
   //&ptr = vê o endereço da variável ptr.
   
    //-----------------------ALOCAÇÃO DINÂMICA DE MEMÓRIA-------------------------
    
    // malloc (função de alocação de memória, "memory alloc") é uma função que retorna um ponteiro para a região de memória alocada ou NULL (caso não consiga alocar). 
    
    //Para utilizá-la é necessário informar o número de bytes que se deseja alocar, por isso utilizamos o sizeof.

    //malloc retorna um ponteiro sem tipo (void *) para um região memória e nesse caso o devemos armazenar num ponteiro do tipo adequado, realizando a conversão do tipo de retorno, nomalmente no início, antes do malloc.

    /*

    int *x = (int*)malloc(sizeof(int));  //aqui se torna redundante, mas só para mostrar que seria dessa forma, em casos que alocamos a região para um ponteiro que aponta para um struct por exemplo.
    //isso se chama type casting (basicamente converter um tipo de dado em outro).
    //atualização: em C moderno não é necessário fazer isso explicitamente, o compilador converte implicitamente.

    if(x) // isso significa se x != NULL
    {
        printf("Memoria alocada com sucesso. \n");
        printf("%d \n", *x); // irá mostrar um lixo de memória.
        *x = 50;
        printf("%d \n", *x);

    }
    else
    {
        printf("Erro ao alocar memoria. \n");
    }

    */
    return 0;
}