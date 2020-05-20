#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2;

    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);

    if (n1 > 0 & n2 > 0)
    {
        printf("%.2f elevado a %.2f = %.2f\n", n2, n1, pow(n2, n1));
        printf("Raiz quadrada de %.2f = %2.f \nRaiz quadrada de %.2f = %.2f\n", n1, sqrt(n1), n2, sqrt(n2));
        printf("Raiz cubica de %.2f = %2.f \nRaiz cubica de %.2f = %.2f\n", n1, cbrt(n1), n2, cbrt(n2));
    }
    else
    {
        printf("Número digitado não válido!\n");
    }
    return 0;
}