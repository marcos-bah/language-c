#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media_classe = 0;

    void situacao(float n1, float n2)
    {
        float media = (n1 + n2) / 2;

        if (media < 3)
        {
            printf("Reprovado \nMédia: %.2f\n", media);
        }
        else if (media < 7)
        {
            printf("Exame \nMédia: %.2f\n", media);
        }
        else
        {
            printf("Aprovado \nMédia: %.2f\n", media);
        }
        media_classe += media;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        printf("Situação do aluno: ");
        situacao(n1, n2);
    }
    printf("\nMédia da sala: %.2f\n", media_classe / 6);
    return 0;
}