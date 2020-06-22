#include <stdio.h>
#include <string.h>

int main()
{
    char frase[256];
    int cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, 256, stdin);

    int tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == ' ' || frase[i] == '\n')
        {
            cont++;
        }
    }

    printf("A frase possui %d palavras. \n", cont);

    return 0;
}