#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod_estado, cod_carga;
    float peso_carga;

    printf("Digite o código do estado: (1-5) ");
    scanf("%d", &cod_estado);

    printf("Digite o código da carga: (10-40) ");
    scanf("%d", &cod_carga);

    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &peso_carga);

    float preco_final(int cod, float peso)
    {
        if (10 <= cod <= 20)
        {
            return (peso * 100);
        }
        else if (21 <= cod <= 30)
        {
            return (peso * 250);
        }
        else if (31 <= cod <= 40)
        {
            return (peso * 340);
        }
        else
        {
            return 0.0;
        }
    }
}
return 0.0;
}

void resultado(int cod, float peso, float imposto)
{
    printf("Peso da carga em kg: %.2f\n", peso * 1000);
    printf("Preço da carga em reais: %.2f\n", preco_final(cod, peso * 1000));
    printf("Valor do imposto em reais: %.2f\n", preco_final(cod, peso * 1000) * (imposto));
    printf("Preço total da carga em reais: %.2f\n", preco_final(cod, peso * 1000) * (1 + imposto));
}

switch (cod_estado)
{
case 1:
    resultado(cod_carga, peso_carga, 0.35);
    break;

case 2:
    resultado(cod_carga, peso_carga, 0.25);
    break;

case 3:
    resultado(cod_carga, peso_carga, 0.15);
    break;

case 4:
    resultado(cod_carga, peso_carga, 0.05);
    break;

case 5:
    resultado(cod_carga, peso_carga, 0.00);
    break;

default:
    break;
}

return 0;
}