#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int numConta;
    float saldo;
} stContaCliente;

#define LIMITE 15

int main()
{
    stContaCliente contas[LIMITE];
    int LIM = LIMITE, v = 1;
    int op = 1; //default op
    char fnome[30];
    float msaldo;

    srand(time(NULL));

    while (v)
    {
        printf("Sistema Bancario UNIBank\n");
        printf("Bem Vindo Admin. \
    \nDeseja: \
    \n1- Cadastrar novas contas. \
    \n2- Visualizar contas de um cliente. \
    \n3- Excluir conta com o menor saldo.  \
    \n4- Sair \n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nVoce escolheu: Cadastrar novas contas.\n");
            for (int i = 0; i < LIM; i++)
            {
                printf("Digite o primeiro nome do titular: ");
                scanf("%s", contas[i].nome);
                contas[i].numConta = rand() % 10000;
                printf("Conta criada com o número: %d\n", contas[i].numConta);
                printf("Digite o saldo inicial: ");
                scanf("%f", &contas[i].saldo);
            }
            getchar();
            break;
        case 2:
            printf("\nVoce escolheu: Visualisar contas de um cliente.\n");
            printf("Digite o primeiro nome do titular: ");
            scanf("%s", fnome);
            for (int i = 0; i < LIM; i++)
            {
                if (strcmp(fnome, contas[i].nome) == 0)
                {
                    printf("Numero da conta encontrada: %d\nSaldo da conta: %.2f\n", contas[i].numConta, contas[i].saldo);
                }
            }
            getchar();
            getchar();
            break;
        case 3:
            printf("\nVoce escolheu: Excluir conta com o menor saldo.\n");
            msaldo = contas[0].saldo;
            for (int i = 0; i < LIM; i++)
            {
                if (msaldo > contas[i].saldo)
                {
                    msaldo = contas[i].saldo;
                }
            }
            for (int i = 0; i < LIM; i++)
            {
                if (msaldo == contas[i].saldo) //tirar do ranger
                {
                    contas[i] = contas[LIM - 1]; //recebe dados do ultimo elemento
                    contas[LIM - 1] = contas[i];
                    LIM--;
                }
            }
            getchar();
            getchar();
            break;
        default:
            v = 0;
            break;
        }
    }
}