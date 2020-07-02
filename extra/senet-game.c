// AVISO: JOGO NÂO FUNCIONANDO, APENAS ESQUELETO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pecas_o = 5;
int pecas_x = 5;
char tab[30] = {'o', 'x', 'o', 'x', 'o', 'x', 'o', 'x', 'o', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void imprimi()
{
    for (int i = 0; i < 30; i++)
    {
        printf(" %d", i);
    }
    printf("\n");
    for (int i = 0; i < 30; i++)
    {
        printf("[%c]", tab[i]);
    }
    printf("\n");
}

int sorteio()
{
    return (rand() % 5) + 1;
}

char muda_jogador(char atual)
{
    if (atual == 'x')
    {
        return 'o';
    }
    else
    {
        return 'x';
    }
}

int movimenta(char jogador, int origem, int num)
{
    int destino = origem + num;
    if (origem >= 0 & origem <= 29)
    {
        if (tab[origem] == jogador)
        {
            if (destino >= 0 & destino <= 29)
            {
                if (tab[origem] == ' ' || tab[origem] != jogador)
                {
                    char aux = tab[destino];
                    tab[destino] = tab[origem];
                    tab[origem] = aux;
                    if (!tab[29] == ' ')
                    {
                        printf("ultima casa prenchida\n");
                    }
                    if (jogador == 'x')
                    {
                        pecas_x -= 1;
                    }
                    else
                    {
                        pecas_o -= 1;
                    }
                }
                else
                {
                    printf("Casa não vazia e sem peça do adverśario\n");
                }
            }
            else
            {
                printf("Destino fora do limite [0..29]\n");
            }
        }
        else
        {
            printf("Essa casa não possui peça do jogador.\n");
        }
    }
    else
    {
        printf("Origem fora do limite [0..29]\n");
    }
}

int main()
{
    int pos, dado, sucesso, repetir;

    char vez = 'o';
    char passar_vez = ' ';
    srand(time(NULL));

    while (pecas_o > 0 || pecas_x > 0)
    {
        dado = sorteio();
        imprimi();
        passar_vez = *" ";
        repetir = 1;
        while (repetir == 1)
        {
            printf("dado [%d]\n", dado);
            printf("[Jogador=%c] Deseja passar vez [s/n]? ", vez);
            scanf("%c", &passar_vez);
            getchar();
            if (passar_vez == 's')
            {
                vez = muda_jogador(vez);
                repetir = 0;
            }
            else if (passar_vez == 'n')
            {
                printf("[Jogador=%c] Escolha posicao: ", vez);
                scanf("%d", &pos);
                getchar();
                sucesso = movimenta(vez, pos, dado);
                if (sucesso == 1)
                {
                    if (dado == 2 || dado == 5 || dado == 3)
                    {
                        vez = muda_jogador(vez);
                    }
                    repetir = 0;
                }
            }
        }
        if (pecas_o == 0)
        {
            printf("[Jogador=o] Vencedor!");
        }
        else if (pecas_x == 0)
        {
            printf("[Jogador=x] Vencedor!");
        }
    }
    return 0;
}
