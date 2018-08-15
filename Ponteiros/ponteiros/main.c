#include <stdio.h>
#include <stdlib.h>

void testePonteiros1();
void testePonteiros2();

int main()
{
    testePonteiros2();
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

    /*
    Saída de uma execução do software acima em uma máquina de 64bits

    ***********************************************************************

    Teste de ponteiros com variaveis simples!

    Analise inicial das variaveis e ponteiros:

    Valor da variavel    int 'a' (acesso direto)..........10
    Valor da variavel    int 'a' (acesso pelo ponteiro)...10
    Endereco da variavel int 'a' (acesso direto)..........0x0028FF00
    Endereco da variavel int 'a' (acesso pelo ponteiro)...0x0028FF00
    Tamanho da variavel  int 'a' (em Bytes)...............4
    Tamanho da variavel  int '*pointer_a' (em Bytes)......4

    Valor da variavel    float 'b' (acesso direto)..........15.3
    Valor da variavel    float 'b' (acesso pelo ponteiro)...15.3
    Endereco da variavel float 'b' (acesso direto)..........0x0028FEFC
    Endereco da variavel float 'b' (acesso pelo ponteiro)...0x0028FEFC
    Tamanho da variavel  float 'b' (em Bytes)...............4
    Tamanho da variavel  float '*pointer_b' (em Bytes)......4

    Valor da variavel    char 'c' (acesso direto)..........d
    Valor da variavel    char 'c' (acesso pelo ponteiro)...d
    Endereco da variavel char 'c' (acesso direto)..........0x0028FEFB
    Endereco da variavel char 'c' (acesso pelo ponteiro)...0x0028FEFB
    Tamanho da variavel  char 'c' (em Bytes)...............1
    Tamanho da variavel  char '*pointer_c' (em Bytes)......4


    Alterando os valores das variaveis atraves dos ponteiros:


    Valor da variavel    int 'a' (acesso direto)..........5
    Valor da variavel    int 'a' (acesso pelo ponteiro)...5
    Endereco da variavel int 'a' (acesso direto)..........0x0028FF00
    Endereco da variavel int 'a' (acesso pelo ponteiro)...0x0028FF00
    Tamanho da variavel  int 'a' (em Bytes)...............4
    Tamanho da variavel  int '*pointer_a' (em Bytes)......4

    Valor da variavel    float 'b' (acesso direto)..........6.7
    Valor da variavel    float 'b' (acesso pelo ponteiro)...6.7
    Endereco da variavel float 'b' (acesso direto)..........0x0028FEFC
    Endereco da variavel float 'b' (acesso pelo ponteiro)...0x0028FEFC
    Tamanho da variavel  float 'b' (em Bytes)...............4
    Tamanho da variavel  float '*pointer_b' (em Bytes)......4

    Valor da variavel    char 'c' (acesso direto)..........m
    Valor da variavel    char 'c' (acesso pelo ponteiro)...m
    Endereco da variavel char 'c' (acesso direto)..........0x0028FEFB
    Endereco da variavel char 'c' (acesso pelo ponteiro)...0x0028FEFB
    Tamanho da variavel  char 'c' (em Bytes)...............1
    Tamanho da variavel  char '*pointer_c' (em Bytes)......4


    Process returned 0 (0x0)   execution time : 0.021 s
    Press any key to continue.


    ***********************************************************************

    Podemos notar pela saída que as variáveis a, b e c foram armazenadas sequencialmente:

    variável char  c -> 0x0028FEFB (Esta variável ocupa o espaço de 1 Byte)
                    (1 Byte de diferença entre c e b)
    variável float b -> 0x0028FEFC (Esta variável ocupa o espaço de 4 Bytes)
                    (4 Bytes de diferença entre b e a)
    variável int   a -> 0x0028FF00 (Esta variável ocupa o espaço de 4 Bytes)

    Podemos notar também que os valores das variaveis a, b e c foram alterados atraves dos ponteiros
    Analisando as variáveis após a alteração, podemos notar que as variáveis foram alteradas mas os endereços permaneceram os mesmos.

    */
}

/**
 *  Teste de ponteiros com vetor de caracteres de 10 posições:
 */
void testePonteiros2()
{

    char caracteres[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
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
        printf("Conteudo da posicao %d do vetor (acesso por ponteiro)..........%c\n", cont, (*pCaracteres + cont));
        printf("Conteudo da posicao %d do vetor (acesso direto)................%c\n", cont, caracteres[cont]);
        printf("Tamanho do conteudo da posicao %d do vetor (acesso direto).....%d\n", cont, sizeof(caracteres[cont]));
        printf("Tamanho do conteudo da posicao %d do vetor (acesso ponteiro)...%d\n", cont, sizeof(*(pCaracteres + cont)));
        printf("Posicao do conteudo na memoria: 0x%p\n\n", (pCaracteres + cont));
    }

    /*
    Teste de ponteiros em um vetor de 10 caracteres!

    Endereco do vetor (acesso direto 1)...........................0x0028FEFE
    Endereco do vetor (acesso direto 2)...........................0x0028FEFE
    Endereco do vetor (acesso ponteiro)...........................0x0028FEFE
    Tamanho do endereco do vetor em Bytes (1).....................4
    Tamanho do endereco do vetor em Bytes (2).....................4
    Tamanho do vetor em Bytes (cada char ocupa 1Byte, temos 10)...10

    Conteudo da posicao 0 do vetor (acesso por ponteiro)..........a
    Conteudo da posicao 0 do vetor (acesso direto)................a
    Tamanho do conteudo da posicao 0 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 0 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FEFE

    Conteudo da posicao 1 do vetor (acesso por ponteiro)..........b
    Conteudo da posicao 1 do vetor (acesso direto)................b
    Tamanho do conteudo da posicao 1 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 1 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FEFF

    Conteudo da posicao 2 do vetor (acesso por ponteiro)..........c
    Conteudo da posicao 2 do vetor (acesso direto)................c
    Tamanho do conteudo da posicao 2 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 2 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF00

    Conteudo da posicao 3 do vetor (acesso por ponteiro)..........d
    Conteudo da posicao 3 do vetor (acesso direto)................d
    Tamanho do conteudo da posicao 3 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 3 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF01

    Conteudo da posicao 4 do vetor (acesso por ponteiro)..........e
    Conteudo da posicao 4 do vetor (acesso direto)................e
    Tamanho do conteudo da posicao 4 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 4 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF02

    Conteudo da posicao 5 do vetor (acesso por ponteiro)..........f
    Conteudo da posicao 5 do vetor (acesso direto)................f
    Tamanho do conteudo da posicao 5 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 5 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF03

    Conteudo da posicao 6 do vetor (acesso por ponteiro)..........g
    Conteudo da posicao 6 do vetor (acesso direto)................g
    Tamanho do conteudo da posicao 6 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 6 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF04

    Conteudo da posicao 7 do vetor (acesso por ponteiro)..........h
    Conteudo da posicao 7 do vetor (acesso direto)................h
    Tamanho do conteudo da posicao 7 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 7 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF05

    Conteudo da posicao 8 do vetor (acesso por ponteiro)..........i
    Conteudo da posicao 8 do vetor (acesso direto)................i
    Tamanho do conteudo da posicao 8 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 8 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF06

    Conteudo da posicao 9 do vetor (acesso por ponteiro)..........j
    Conteudo da posicao 9 do vetor (acesso direto)................j
    Tamanho do conteudo da posicao 9 do vetor (acesso direto).....1
    Tamanho do conteudo da posicao 9 do vetor (acesso ponteiro)...1
    Posicao do conteudo na memoria: 0x0028FF07


    Process returned 0 (0x0)   execution time : 0.027 s
    Press any key to continue.
    */

}

