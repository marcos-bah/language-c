#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Quadrado = %d\n", n * n);
    printf("Cubo = %d\n", n * n * n);
    printf("Raiz Quadrada = %.2f\n", sqrt(n));
    printf("Raiz Cubica = %.2f\n", pow(n, 1.0 / 3.0));

    return 0;
}