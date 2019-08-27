#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
char opcion;
char salir = 'n';
int flag1=0;

    do
    {
        system("cls");
        printf("-------menu de opciones------\n\n");
        printf("a- Sumar\n");
        printf("b- Restar\n");
        printf("c- Multiplicar\n");
        printf("d- Dividir\n");
        printf("e- Salir\n");
        printf("indique opcion:");
        fflush(stdin);
        opcion = getchar();

        switch(opcion)
        {
        case 'a':
            printf("usted eligio sumar\n");
            flag1=1;
            system("pause");
            break;
        case 'b':
            if (flag1 == 0)
            {
                printf("para restar previamente hubo que  haber sumado.\n");
            }
            else
                {
                    printf("restar\n");
                }
            printf("usted eligio restar\n");
            system("pause");
            break;
        case 'c':
            printf("usted eligio multiplicar\n");
            system("pause");
            break;
        case 'd':
            printf("usted eligio dividir\n");
            system("pause");
            break;
        case 'e':
            printf("confirma salida?\n");
            fflush(stdin);
            salir = getchar();
            break;
        default:
            printf("opcion invalida\n\n");
            system("pause");
            break;
        }
    }
    while(salir == 'n');

}
