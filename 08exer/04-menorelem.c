#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menorelem(int m[6][6])
{
    int menor = m[5][0];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i + j == 5)
            {
                if (menor > m[i][j])
                {
                    menor = m[i][j];
                }
            }
        }
    }
    return menor;
}

int main()
{
    int m[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            m[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Menor elemento da diagonal secundaria = %d \n", menorelem(m));
    return 0;
}