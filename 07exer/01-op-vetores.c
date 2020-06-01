#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[3] = {1, 4, 0};
    int vetor2[3] = {1, 2, 3};
    int vetor[6];

    int saida[6];

    int i, j, n = 0;
    int tam = 6;

    for (i = 0; i < tam; i++)
    {
        vetor[i] = vetor1[i];
        vetor[i + tam] = vetor2[i];
    }

    /* Remove elementos com valor duplicado */
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vetor[i] == saida[j])
                break;
        }

        if (j == n)
        {
            saida[n] = vetor[i];
            n++;
        }
    }

    /* Exibe Vetor da União */
    printf("União dos dois vetores: ");
    for (i = 0; i < n; i++)
        printf("%d ", saida[i]);
    printf("\n");

    /* Exibe Vetor de Soma */
    printf("Soma de dois vetores: ");
    for (i = 0; i < tam / 2; i++)
        printf("%d ", vetor1[i] + vetor2[i]);
    printf("\n");

    /* Exibe Vetor de Produto */
    printf("Produto de dois vetores: ");
    for (i = 0; i < tam / 2; i++)
        printf("%d ", vetor1[i] * vetor2[i]);
    printf("\n");

    return 0;
}