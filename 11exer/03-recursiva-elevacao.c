#include <stdio.h>
#include <stdlib.h>

float eleva(float a, int b)
{
    if (b > 0)
    {
        return a * eleva(a, --b);
    }
    return 1;
}

int main()
{
    int b;
    float a;
    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("%.2f\n", eleva(a, b));
    return 0;
}