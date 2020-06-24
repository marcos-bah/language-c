#include <stdio.h>

typedef struct
{
    char nome[30], sexo[1];
    int cpf;
    float altura, peso;
} stDadosPessoa;

#define LIM 30

int main()
{
    stDadosPessoa pessoas[LIM];
    int fcpf;

    printf("Dados de entrada: Primeiro Nome, CPF, Altura e Peso\n");
    for (int i = 0; i < LIM; i++)
    {
        printf("Digite o Primeiro Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Digite o CPF (apenas numeros): ");
        scanf("%d", &pessoas[i].cpf);
        printf("Digite a Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);
        printf("Digite o Peso (em kilogramas): ");
        scanf("%f", &pessoas[i].peso);
    }

    printf("Digite um CPF para realizar a busca: ");
    scanf("%d", &fcpf);

    for (int i = 0; i < LIM; i++)
    {
        if (fcpf == pessoas[i].cpf)
        {
            float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
            printf("%s possui IMC = %.2f\n", pessoas[i].nome, imc);
            break;
        }
    }
    return 0;
}