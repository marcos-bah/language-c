#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2)
{
    int soma = 0;
    if (n2 >= n1)
    {
        for (int i = n1 + 1; i < n2; i++)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int n1, n2;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    printf("Soma dos valores entre os dois: %d\n", soma(n1, n2));
    return 0;
}