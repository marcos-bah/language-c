#include <stdio.h>
#include <stdlib.h>

double percentual(float n1, float n2)
{
    return (n2 / n1) * 100;
}

int main()
{
    float n1, n2;
    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);
    printf("Percentual de acrescimo: %.2f \n", percentual(n1, n2));
    return 0;
}