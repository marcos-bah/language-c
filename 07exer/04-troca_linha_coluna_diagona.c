#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10

int main()
{
    int i, j, temp;
    int matriz[LIN][COL];
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //trocar linha 2 com a linha 8
    for (j = 0; j < COL; j++)
    {
        temp = matriz[7][j];
        matriz[7][j] = matriz[1][j];
        matriz[1][j] = temp;
    }

    printf("\nTrocado Linha 2 com a Linha 8\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //trocar coluna 4 com a coluna 10
    for (i = 0; i < LIN; i++)
    {
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    printf("\nTrocado Coluna 4 com a Coluna 10\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //trocar diagonal principal pela diagonal secundaria
    for (i = 0; i < LIN; i++)
    {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][LIN - 1 - i];
        matriz[i][LIN - 1 - i] = temp;
    }

    printf("\nTrocado Diagonal pela Principal\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}