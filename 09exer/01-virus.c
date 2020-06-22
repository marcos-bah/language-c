#include <stdio.h>
#include <string.h>

int main()
{
    char frase[256];
    char fraseres[512];
    char palavra[30];

    int cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, 256, stdin);

    int tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] != ' ' & frase[i] != '\0' & frase[i] != '\n')
        {
            palavra[cont] = frase[i];
            cont++;
        }
        else
        {
            palavra[cont] = '\0';
            strcat(fraseres, palavra);
            strcat(fraseres, " ");
            strcat(fraseres, palavra);
            strcat(fraseres, " ");
            strcpy(palavra, "\0");
            cont = 0;
        }
    }

    puts(fraseres);

    return 0;
}