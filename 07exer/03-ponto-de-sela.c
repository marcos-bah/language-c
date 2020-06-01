#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 7

int main()
{
    int i, j, k, maior, menor, sela;
    /*Criacao da matriz mxn*/

    int matriz[LIN][COL] = {-1, 1, 3, 4, 5, 2, 2, -2, 4, 5, 2, 2, 3, 4, -2, -2, 2, 3, 4, 5, -2, -2, 3, 4, 5, -2, 2, 3, -4, 5, -2, 2, 3, 4, 5};

    for (i = 0; i < 5; i++)
    {
        menor = matriz[i][0];

        for (j = 0; j < 7; j++)
        {
            maior = matriz[0][j];

            for (k = 1; k < 5; k++)
                if (maior < matriz[k][j])
                    maior = matriz[k][j];

            for (k = 1; k < 7; k++)
                if (menor > matriz[i][k])
                    menor = matriz[i][k];

            if (menor == maior)
            {

                printf("\n");
                printf("Ponto de sela: %d ,na posição [%d][%d]", matriz[i][j], i, j);
                sela++;
            }
        }
    }

    if (sela == 0)
        printf("Não existe ponto de sela\n");
    return 0;
}