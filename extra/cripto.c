#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, tam, num = 3;
    char frase[50], cripto[50], op[1];
    printf("Deseja Criptografar (C) ou Descriptografar (D)? ");
    scanf("%c", op);
    getchar();
    if (op[0] == 'D' || op[0] == 'd')
    {
        num = -3;
    }
    else
    {
        num = 3;
    }
    printf("Frase para Criptografar: ");
    fgets(frase, 50, stdin);
    tam = strlen(frase);
    for (i = 0; i < tam; i++)
    {
        cripto[i] = frase[i] + num;
    }
    cripto[i] = '\0';
    printf("Frase Entrada: %s\n", frase);
    printf("Cripto Saida: %s\n", cripto);

    return 0;
}