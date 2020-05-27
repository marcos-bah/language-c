#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char cp, user, sort, res = 'y';
    srand(time(NULL));
    while (1)
    {
        system("clear");
        printf("==========================================================\n");
        printf("|                        JokenPo                         |\n");
        printf("==========================================================\n");
        printf("(r)ocha - (p)apel - (t)esoura - (l)agarto - (s)pock\n");
        printf("Digite a letra da opção do usuario: ");
        user = getchar();
        getchar();
        sort = rand() % 5;

        switch (sort)
        {
        case 0:
            cp = 'r';
            break;
        case 1:
            cp = 'p';
            break;
        case 2:
            cp = 't';
            break;
        case 3:
            cp = 'l';
            break;
        case 4:
            cp = 's';
            break;

        default:
            break;
        }

        printf("Usuario escolheu: ");

        switch (user)
        {
        case 'r':
            printf("ROCHA");
            break;

        case 'p':
            printf("PAPEL");
            break;

        case 't':
            printf("TESOURA");
            break;

        case 's':
            printf("SPOCK");
            break;

        default:
            break;
        }

        printf("\nComputador escolheu: ");

        switch (cp)
        {
        case 'r':
            printf("ROCHA");
            break;

        case 'p':
            printf("PAPEL");
            break;

        case 't':
            printf("TESOURA");
            break;

        case 'l':
            printf("LARGATO");
            break;

        case 's':
            printf("SPOCK");
            break;

        default:
            break;
        }

        if (cp == user)
        {
            printf("\nEmpate\n");
        }
        else if (cp == 'r' & (user == 'l' || user == 't'))
        {
            printf("\nComputador Venceu!!!\n");
        }
        else if (cp == 'p' & (user == 'r' || user == 's'))
        {
            printf("\nComputador Ganhou!!!\n");
        }
        else if (cp == 't' & (user == 'p' || user == 'l'))
        {
            printf("\nComputador Ganhou!!!\n");
        }
        else if (cp == 's' & (user == 'r' || user == 't'))
        {
            printf("\nComputador Ganhou!!!\n");
        }
        else if (cp == 'l' & (user == 'p' || user == 's'))
        {
            printf("\nComputador Ganhou!!!\n");
        }
        else
        {
            printf("\nUsuário Ganhou!!!\n");
        }

        printf("Jogar novamente? (y/N)>>");
        res = getchar();
        getchar();
        if (res == 'n' || res == 'N')
        {
            system("clear");
            break; //força a saída imediata do loop
        }
        system("clear");
    }
    return 0;
}