#include <stdio.h>
int minMaxSeq(int *min, int *max, int a, int b, int c)
{
    if ((a > b) & (b > c))
    {
        *min = 2;
        *max = 0;
    }
    else if ((a > b) & (b < c))
    {
        *min = 1;
        *max = 2;
    }
    else if ((b > a) & (a > c))
    {
        *min = 2;
        *max = 1;
    }
    else if ((b > a) & (a < c))
    {
        *min = 0;
        *max = 1;
    }
    else if ((c > b) & (b > a))
    {
        *min = 0;
        *max = 2;
    }
    return 1;
}

int main(void)
{
    int minimo, maximo;
    if (minMaxSeq(&minimo, &maximo, 71, 444, 25)) //passando o endereco das variaveis
        printf("min:%d max:%d\n", minimo, maximo);
    else
        printf("sequencia vazia\n");
    return 0;
}