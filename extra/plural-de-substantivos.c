#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char sub[50], plural[50];
    int ult, pen;

    printf("Digite uma palavra:");
    scanf("%s", sub);
    ult = strlen(sub) - 1;
    pen = strlen(sub) - 2;
    if (sub[ult] == 'o' & sub[pen] == 'a')
    {
        strncpy(plural, sub, ult);
        plural[pen] = '\0';
        strcat(plural, "oes");
    }
    else
    {

        switch (sub[ult])
        {
        case 'r':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "es");
            break;
        case 'n':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "es");
            break;
        case 's':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "es");
            break;
        case 'z':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "es");
            break;
        case 'l':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "is");
            break;
        case 'm':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "ns");
            break;
        case 'x':
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "ces");
            break;

        default:
            strncpy(plural, sub, ult);
            plural[ult] = '\0';
            strcat(plural, "s");
            break;
        }
    }
    printf("Substantivo=%s\nPlural=%s\n", sub, plural);
    return 0;
}