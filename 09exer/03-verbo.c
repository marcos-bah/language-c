#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[56];
    char base[54];

    printf("Digite um verbo: ");
    scanf("%s", palavra);

    int tam = strlen(palavra) - 2;

    strncpy(base, palavra, tam);

    printf("Eu %so \n", base);
    printf("Tu %sa \n", base);
    printf("Ele %sa \n", base);
    printf("Nos %samos \n", base);
    printf("Vos %sais \n", base);
    printf("Eles %sam \n", base);

    return 0;
}