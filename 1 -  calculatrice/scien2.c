#include <stdio.h>
int main()
{
    int nombre1, nombre2;
    char choix;
    printf("Entrez un premiere nombre : ");
    scanf("%d", &nombre1);
    getc(stdin);
    printf("Entrez l operateur :");
    scanf("%c", &choix);
    printf("Entez le deuxieme nomblre : ");
    scanf("%d", &nombre2);

    switch (choix)
    {
    case '+':
        printf("%d + %d = %d\n", nombre1, nombre2, nombre1 + nombre2);
        break;
    case '-':
        printf("%d - %d = %d\n", nombre1, nombre2, nombre1 - nombre2);
        break;
    case '*':
        printf("%d * %d = %d\n", nombre1, nombre2, nombre1 * nombre2);
        break;
    case '/':
        if (nombre2 != 0)
            printf("%d / %d = %.4f\n", nombre1, nombre2, (float)nombre1 / nombre2);
        else
            printf("Math error : Impossible de diviser par 0\n");
        break;
    default:
        printf("OPERATEUR INCONNUE\n");
    }
    return 0;
}