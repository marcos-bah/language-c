#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return a + multiplicacao(a, --b);
}

int main()
{
    int a, b;
    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("%d\n", multiplicacao(a, b));
    return 0;
}