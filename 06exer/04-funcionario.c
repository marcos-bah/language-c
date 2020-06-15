#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, r1 = 1, r2 = 0;
    int t = 0;

    printf("Digite o salario de João: ");
    scanf("%f", &salario);

    while (r1 > r2)
    {
        t++;
        printf("Tempo = %d\n", t);
        r1 = salario * pow(1.02, t);
        printf("r1 = %.2f\n", r1);
        r2 = (salario / 3) * pow(1.05, t);
        printf("r2 = %.2f\n", r2);
    }

    printf("José demorou %d meses para alcançar o valor pertencente a João\n", t);
    return 0;
}