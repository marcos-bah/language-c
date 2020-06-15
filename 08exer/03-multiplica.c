#include <stdio.h>
#include <stdlib.h>

void multiplica(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j * i);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    multiplica(n);
    return 0;
}