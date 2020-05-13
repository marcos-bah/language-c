#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void)
{
    float r;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    printf("Comprimento da esfera = %.2f\n", 2 * PI * r);
    printf("Area da esfera = %.2f\n", PI * r * r * r);
    printf("Volume da esfera = %f\n", (4 * PI * r * r * r) / 3);

    return 0;
}