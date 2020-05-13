#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, n3;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n2);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n3);

    printf("Media Geometrica = %.2f\n", (n1 * n2 * n3));
    printf("Media Ponderada = %.2f\n", ((n1 + n2 * 2 + n3 * 3) / 6));
    printf("Media Harmonia = %.2f\n", (1 / (1 / n1 + 1 / n2 + 1 / n3)));
    printf("Media Aritmetica = %.2f\n", ((n1 + n2 + n3) / 3));

    return 0;
}