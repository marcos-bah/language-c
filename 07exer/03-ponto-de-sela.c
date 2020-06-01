#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 7

int main()
{
    int i, j, maior[2] = {0, 0}, menor[2] = {0, 0};
    /*Criacao da matriz mxn*/

    int matriz[LIN][COL] = {-1, 1, 3, 4, 5, 2, 2, -2, 4, 5, 2, 2, 3, 4, -2, -2, 2, 3, 4, 5, -2, -2, 3, 4, 5, -2, 2, 3, -4, 5, -2, 2, 3, 4, 5};

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int k = 0; k < COL; k++)
    {
        j = k;

        //achando ponto de sela
        for (i = 0; i < LIN; i++)
        {
            if (matriz[maior[0]][maior[1]] < matriz[i][j])
            {
                maior[0] = i;
                maior[1] = j;
            }
        }

        for (int l = 0; l < LIN; l++)
        {
            i = l;
            printf("\n==================================\n");
            printf("\nLinha %d", i + 1);
            printf("\nColuna %d\n\n", k + 1);
            for (j = 0; j < COL; j++)
            {
                if (matriz[menor[0]][menor[1]] > matriz[i][j])
                {
                    menor[0] = i;
                    menor[1] = j;
                }
            }

            printf("Maior: %d\n", matriz[maior[0]][maior[1]]);
            printf("Posicao: %d, %d", maior[0], maior[1]);
            printf("\n");

            printf("Menor: %d\n", matriz[menor[0]][menor[1]]);
            printf("Posicao: %d, %d", menor[0], menor[1]);
            printf("\n");
            if (maior[0] == menor[0] & maior[1] == menor[1])
            {
                printf("\nPonto de Sela\n");
            }
            printf("\n==================================\n");
            maior[0] = i;
            menor[0] = i;
            maior[1] = j;
            menor[1] = j;
        }
    }

    return 0;
}