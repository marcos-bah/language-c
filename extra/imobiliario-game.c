#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum
{
    VAZIO,
    EMPRESA,
    SORTEREVES,
    PRISAO,
    TERRENO
} enum_tipo;
typedef enum
{
    NINGUEM,
    JOGADOR1,
    JOGADOR2
} enum_dono;
typedef struct
{
    enum_tipo tipo;
    int preco;
    enum_dono dono;
} struct_casa;

struct_casa tab[30];
void inicializa()
{
    for (int i = 0; i < 29; i++)
    {
        tab[i].tipo = VAZIO;
        tab[i].dono = NINGUEM;
        tab[i].preco = 0;
    }
}
void geratabuleiro()
{
}
void mostra(int j1, int j2) {}
int main()
{
    int i, dado, pos1 = 0, pos2 = 0;
    inicializa();
    geratabuleiro();
    for (i = 0; i < 50; i++)
    {
        dado = (rand() % 3) + 1;
        pos1 = (pos1 + dado) % 30;
        dado = (rand() % 3) + 1;
        pos2 = (pos2 + dado) % 30;
        mostra(pos1, pos2);
        getchar();
    }
    return 0;
}
