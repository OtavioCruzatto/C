#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(char *string, int startIndex, int endIndex);

int main()
{

    char *string1 = "0123456789";

    printf("A string '%s' possui %d caracteres!\n\n", string1, strlen(string1));

    char *string2 = substring(string1,3,7);
    printf("Endereco recebido: 0x%x\n", string2);
    printf("%s\n", string2);
    free(string2);

    return 0;

}

/**
 *
 * Funcao que recebe nesta ordem: string, posicao inicial desejada, posicao final desejada.
 * Retorna um ponteiro para uma string que contem apenas a parcela entre a posicao "inicial, final" da string passada.
 * A string retornada possuira o caracter do indice inicial e nao contera o caracter da posicao final.
 *
 *
 * IMPORTANTE: É NECESSÁRIO DAR UM "FREE" NO PONTEIRO QUE RECEBE A STRING FORMATADA, CONFORME EXEMPLO ABAIXO.
 *
 * EX:
 *  char *string1 = "0123456789";
 *  char *string2 = substring(string1,3,7);
 *  printf("%s\n", string2); -----------> sera printado "3456"
 *  free(string2);
 *
 */
char *substring(char *string, int startIndex, int endIndex)
{
    int contadorStringOriginal = 0;
    int contadorStringGerada = 0;

    if((startIndex < 0) || (startIndex > strlen(string)))
    {
        startIndex = 0;
    }

    if((endIndex < 0) || (endIndex > strlen(string)))
    {
        endIndex = strlen(string);
    }

    if(startIndex > endIndex)
    {
        int temp = startIndex;
        startIndex = endIndex;
        endIndex = temp;
    }

    int tamanhoDaStringGerada = ( (endIndex - startIndex) + 1);
    char *strRetorno = (char *) malloc( tamanhoDaStringGerada * (sizeof(char)) );
    memset(strRetorno, 0, tamanhoDaStringGerada);

    if(strRetorno != NULL)
    {
        printf("Endereco fornecido: 0x%x\n", strRetorno);
        for(contadorStringOriginal = startIndex; contadorStringOriginal <= endIndex; contadorStringOriginal++)
        {
            if(contadorStringOriginal < endIndex)
            {
                strRetorno[contadorStringGerada] = string[contadorStringOriginal];
                contadorStringGerada++;
            }
            else
            {
                strRetorno[contadorStringGerada] = '\0';
            }
        }
    }
    printf("Tamanho do vetor criado %d\n", strlen(strRetorno));
    return strRetorno;
}

