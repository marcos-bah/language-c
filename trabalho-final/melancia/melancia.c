#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int semente = 0;
int agua = 5;
int adubo = 5;
int jogadas = 0;

char area[25][50];

void inicializa()
{
    for (int i = 0; i < 25; i++)
    {

        for (int j = 0; j < 50; j++)
        {
            area[i][j] = " ";
        }
    }
    if (rand() % 100 < 33)
    {
        printf("trabalho melancia");
    }
}
void imprimi()
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            printf(" [%s] ", area[i][j]);
        }
        printf("\n");
    }
}
void irrigar() {}
void semear() {}
void adubar() {}
void capinar() {}
void recolher() {}
void noite() {}

int main()
{
    srand(time(NULL));
    inicializa();
    char op = ' ';
    while (op != ' ')
    {
        imprimi();
        printf("i / s / a / c / r / n / f / Opcao %d:", jogadas + 1);
        scanf("%c", &op);
        getchar();
        switch (op)
        {
        case 'i':
            irrigar();
            break;
        case 's':
            semear();
            break;
        case 'a':
            adubar();
            break;
        case 'c':
            capinar();
            break;
        case 'r':
            recolher();
            break;
        case 'n':
            noite();
            break;
        case 'f':
            irrigar();
            break;
        default:
            printf("[opcao invalida]");
        }

        if (jogadas >= 5)
        {
            imprimi();
            noite();
        }
    }
    return 0;
}