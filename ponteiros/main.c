#include <stdio.h>
#include <stdlib.h>

void testePonteiros1();
void testePonteiros2();
void testePonteiros3();
void testePonteiros4();

void alteraValor_teste1(int valor);
void alteraValor_teste2(int *valor);

int main()
{
    testePonteiros4();
    return 0;
}

/**
 *  Teste de ponteiros com variáveis simples:
 *  int, float e char
 */
void testePonteiros1()
{

    int a = 10;
    int *pointer_a = &a;

    float b = 15.3;
    float *pointer_b = &b;

    char c = 'd';
    char *pointer_c = &c;

    printf("Teste de ponteiros com variaveis simples!\n\n");

    printf("Analise inicial das variaveis e ponteiros:\n\n");

    printf("Valor da variavel    int 'a' (acesso direto)..........%d\n", a);
    printf("Valor da variavel    int 'a' (acesso pelo ponteiro)...%d\n", *pointer_a);
    printf("Endereco da variavel int 'a' (acesso direto)..........0x%p\n", &a);
    printf("Endereco da variavel int 'a' (acesso pelo ponteiro)...0x%p\n", pointer_a);
    printf("Tamanho da variavel  int 'a' (em Bytes)...............%d\n", sizeof(a));
    printf("Tamanho da variavel  int '*pointer_a' (em Bytes)......%d\n\n", sizeof(pointer_a));

    printf("Valor da variavel    float 'b' (acesso direto)..........%0.1f\n", b);
    printf("Valor da variavel    float 'b' (acesso pelo ponteiro)...%0.1f\n", *pointer_b);
    printf("Endereco da variavel float 'b' (acesso direto)..........0x%p\n", &b);
    printf("Endereco da variavel float 'b' (acesso pelo ponteiro)...0x%p\n", pointer_b);
    printf("Tamanho da variavel  float 'b' (em Bytes)...............%d\n", sizeof(b));
    printf("Tamanho da variavel  float '*pointer_b' (em Bytes)......%d\n\n", sizeof(pointer_b));

    printf("Valor da variavel    char 'c' (acesso direto)..........%c\n", c);
    printf("Valor da variavel    char 'c' (acesso pelo ponteiro)...%c\n", *pointer_c);
    printf("Endereco da variavel char 'c' (acesso direto)..........0x%p\n", &c);
    printf("Endereco da variavel char 'c' (acesso pelo ponteiro)...0x%p\n", pointer_c);
    printf("Tamanho da variavel  char 'c' (em Bytes)...............%d\n", sizeof(c));
    printf("Tamanho da variavel  char '*pointer_c' (em Bytes)......%d\n\n", sizeof(pointer_c));

    printf("\nAlterando os valores das variaveis atraves dos ponteiros:\n\n\n");

    *pointer_a = 5;
    *pointer_b = 6.7;
    *pointer_c = 'm';

    printf("Valor da variavel    int 'a' (acesso direto)..........%d\n", a);
    printf("Valor da variavel    int 'a' (acesso pelo ponteiro)...%d\n", *pointer_a);
    printf("Endereco da variavel int 'a' (acesso direto)..........0x%p\n", &a);
    printf("Endereco da variavel int 'a' (acesso pelo ponteiro)...0x%p\n", pointer_a);
    printf("Tamanho da variavel  int 'a' (em Bytes)...............%d\n", sizeof(a));
    printf("Tamanho da variavel  int '*pointer_a' (em Bytes)......%d\n\n", sizeof(pointer_a));

    printf("Valor da variavel    float 'b' (acesso direto)..........%0.1f\n", b);
    printf("Valor da variavel    float 'b' (acesso pelo ponteiro)...%0.1f\n", *pointer_b);
    printf("Endereco da variavel float 'b' (acesso direto)..........0x%p\n", &b);
    printf("Endereco da variavel float 'b' (acesso pelo ponteiro)...0x%p\n", pointer_b);
    printf("Tamanho da variavel  float 'b' (em Bytes)...............%d\n", sizeof(b));
    printf("Tamanho da variavel  float '*pointer_b' (em Bytes)......%d\n\n", sizeof(pointer_b));

    printf("Valor da variavel    char 'c' (acesso direto)..........%c\n", c);
    printf("Valor da variavel    char 'c' (acesso pelo ponteiro)...%c\n", *pointer_c);
    printf("Endereco da variavel char 'c' (acesso direto)..........0x%p\n", &c);
    printf("Endereco da variavel char 'c' (acesso pelo ponteiro)...0x%p\n", pointer_c);
    printf("Tamanho da variavel  char 'c' (em Bytes)...............%d\n", sizeof(c));
    printf("Tamanho da variavel  char '*pointer_c' (em Bytes)......%d\n\n", sizeof(pointer_c));

}

/**
 *  Teste de ponteiros com vetor de caracteres de 10 posições:
 */
void testePonteiros2()
{

    char caracteres[10] = {'a', 'c', 'e', 'g', 'i', 'k', 'm', 'o', 'q', 's'};
    char *pCaracteres = caracteres;

    printf("Teste de ponteiros em um vetor de 10 caracteres!\n\n");

    printf("Endereco do vetor (acesso direto 1)...........................0x%p\n", &caracteres);
    printf("Endereco do vetor (acesso direto 2)...........................0x%p\n", caracteres);
    printf("Endereco do vetor (acesso ponteiro)...........................0x%p\n", pCaracteres);
    printf("Tamanho do endereco do vetor em Bytes (1).....................%d\n", sizeof(&caracteres));
    printf("Tamanho do endereco do vetor em Bytes (2).....................%d\n", sizeof(pCaracteres));
    printf("Tamanho do vetor em Bytes (cada char ocupa 1Byte, temos 10)...%d\n\n", sizeof(caracteres));

    int cont = 0;
    for(cont = 0; cont < 10; cont++) {
        printf("Conteudo da posicao %d do vetor (acesso por ponteiro 1)........%c\n", cont, *(caracteres + cont));
        printf("Conteudo da posicao %d do vetor (acesso por ponteiro 2)........%c\n", cont, *(pCaracteres + cont));
        printf("Conteudo da posicao %d do vetor (acesso direto)................%c\n", cont, caracteres[cont]);

        // Pega o conteudo da primera posicão do vetor (especificado pelo endereço) e soma o CONTEUDO com cont
        // Ex: conteudo da primeira posicao = 'd', cont = 5. Saída igual a 'a' + 5 = 'f'
        printf("Alterado o CONTEUDO da posicao 0 do vetor (pelo ponteiro).....%c\n", (*pCaracteres + cont));

        // Pega o conteudo da primera posicão do vetor e soma o CONTEUDO com cont
        // Ex: conteudo da primeira posicao = 'd', cont = 5. Saída igual a 'a' + 5 = 'f'
        printf("Alterado o CONTEUDO da posicao 0 do vetor (pelo vetor)........%c\n", (caracteres[0] + cont));

        printf("Tamanho do conteudo da posicao %d do vetor (acesso direto).....%d\n", cont, sizeof(caracteres[cont]));
        printf("Tamanho do conteudo da posicao %d do vetor (acesso ponteiro)...%d\n", cont, sizeof(*(pCaracteres + cont)));

        // O ponteiro é do tipo char (ocupa 1 Byte), logo quando somamos 1 no seu valor, será somado a posição de 1 endereço de memória
        printf("Posicao do conteudo na memoria: 0x%p\n\n", (pCaracteres + cont));
    }

}

/**
 *  Teste de ponteiros com vetor de inteiros de 10 posições:
 */
void testePonteiros3()
{

    int inteiros[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int *ptrInteiros = inteiros;

    printf("Teste de ponteiros em um vetor de 10 inteiros!\n\n");

    printf("Endereco do vetor (acesso direto 1)...........................0x%p\n", &inteiros);
    printf("Endereco do vetor (acesso direto 2)...........................0x%p\n", inteiros);
    printf("Endereco do vetor (acesso ponteiro)...........................0x%p\n", ptrInteiros);
    printf("Tamanho do endereco do vetor em Bytes (1).....................%d\n", sizeof(&inteiros));
    printf("Tamanho do endereco do vetor em Bytes (2).....................%d\n", sizeof(ptrInteiros));
    printf("Tamanho do vetor em Bytes (cada int ocupa 4Bytes, temos 10)...%d\n\n", sizeof(inteiros));

    int cont = 0;
    for(cont = 0; cont < 10; cont++) {
        printf("Conteudo da posicao %d do vetor (acesso por ponteiro 1)........%d\n", cont, *(inteiros + cont));
        printf("Conteudo da posicao %d do vetor (acesso por ponteiro 2)........%d\n", cont, *(ptrInteiros + cont));
        printf("Conteudo da posicao %d do vetor (acesso direto)................%d\n", cont, inteiros[cont]);

        // Pega o conteudo da primera posicão do vetor (especificado pelo endereço) e soma o CONTEUDO com cont
        // Ex: conteudo da primeira posicao = 'd', cont = 5. Saída igual a 'a' + 5 = 'f'
        printf("Alterado o CONTEUDO da posicao 0 do vetor (pelo ponteiro).....%d\n", (*ptrInteiros + cont));

        // Pega o conteudo da primera posicão do vetor e soma o CONTEUDO com cont
        // Ex: conteudo da primeira posicao = 'd', cont = 5. Saída igual a 'a' + 5 = 'f'
        printf("Alterado o CONTEUDO da posicao 0 do vetor (pelo vetor)........%d\n", (inteiros[0] + cont));

        printf("Tamanho do conteudo da posicao %d do vetor (acesso direto).....%d\n", cont, sizeof(inteiros[cont]));
        printf("Tamanho do conteudo da posicao %d do vetor (acesso ponteiro)...%d\n", cont, sizeof(*(ptrInteiros + cont)));

        // O ponteiro é do tipo int (ocupa 4 Bytes), logo quando somamos 1 no seu valor, será somado a posição de 4 endereços de memória
        printf("Posicao do conteudo na memoria: 0x%p\n\n", (ptrInteiros + cont));
    }

}

/**
 * Teste demonstrando a diferenca de passar um argumento para uma função por VALOR e por REFERENCIA.
 */
void testePonteiros4()
{
    printf("********************* Teste de ponteiros ***********************\n");
    printf("Diferenca entre passar um argumento por VALOR e por REFERENCIA\n\n");

    printf("Inicializacao da variavel 'a'\n");
    int a = 10;
    printf("Valor da variavel 'a': %d\n\n", a);

    printf("Teste 1 - Passando o argumento por valor\n");
    alteraValor_teste1(a);
    printf("Valor da variavel 'a' apos funcao 'alteraValor_teste1()': %d\n\n", a);

    printf("Teste 2 - Passando o argumento por referencia\n");
    int *pointer_a = &a;
    alteraValor_teste2(pointer_a);
    printf("Valor da variavel 'a' apos funcao 'alteraValor_teste2()': %d\n\n", a);

}

void alteraValor_teste1(int valor)
{
    valor = 5;
}

void alteraValor_teste2(int *valor)
{
    *valor = 5;
}


