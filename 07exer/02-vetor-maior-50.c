#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int vetor[10];
    bool v = true;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 50)
        {
            printf("%d ", i);
            v = false;
        }
    }
    if (v)
    {
        printf("Não há valor superior a 50.");
    }
    printf("\n");
    return 0;
}