#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{
    if (n > 0)
    {
        return n + soma(n - 1);
    }
    return 0;
}

int main()
{
    int n;
    printf("Digite um valor n: ");
    scanf("%d", &n);

    printf("%d\n", soma(n));
    return 0;
}