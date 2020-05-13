#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void)
{
    float r, h;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    printf("Volume = %.2f\n", (PI * r * r * h));

    return 0;
}