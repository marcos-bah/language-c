#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30], sexo[2];
    int idade;
    float altura, peso;
} stPaciente;

#define LIM 2

float pesoIdeal(float a, char sexo[2])
{
    if (strcmp(sexo, "m") == 0)
    {
        return (72.7 * a) - 58;
    }
    else
    {
        return (62.1 * a) - 44.7;
    }
}

int main()
{
    stPaciente pacientes[LIM];
    int pm = 0;
    float pi;

    printf("Bem vindo ao Sistema UNIsus\n");
    for (int i = 0; i < LIM; i++)
    {
        printf("Digite o Primeiro Nome do Paciente: ");
        scanf("%s", pacientes[i].nome);
        getchar();
        printf("Digite o sexo (m)asculino/(f)eminino: ");
        scanf("%c", pacientes[i].sexo);
        getchar();
        printf("Digite a Idade: ");
        scanf("%d", &pacientes[i].idade);
        printf("Digite a Altura (em metros): ");
        scanf("%f", &pacientes[i].altura);
        printf("Digite o Peso (em kilogramas): ");
        scanf("%f", &pacientes[i].peso);
    }

    for (int i = 0; i < LIM; i++)
    {
        if (pm < pacientes[i].peso)
        {
            pm = i;
        }
    }

    printf("%s é a pessoa mais pesada do grupo.\n", pacientes[pm].nome);

    for (int i = 0; i < LIM; i++)
    {
        pi = pesoIdeal(pacientes[i].altura, pacientes[i].sexo);
        if (pacientes[i].peso != pi)
        {
            if (pacientes[i].peso > pi)
            {
                printf("%s tem %d anos e está acima do peso, deve perder %.2f kg.\n", pacientes[i].nome, pacientes[i].idade, pacientes[i].peso - pi);
            }
            else
            {
                printf("%s tem %d anos e está abaixo do peso, deve ganhar %.2f kg.\n", pacientes[i].nome, pacientes[i].idade, pi - pacientes[i].peso);
            }
        }
    }

    return 0;
}