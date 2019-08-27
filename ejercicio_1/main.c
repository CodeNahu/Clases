//pedir normbre
//nota 0-10
//sexo f-m
//mientras que el usuario quiera
//promedio de notas totales
//promedio de notas mujeres
//nombre - sexo - nota maxima
//nombre sexo nota minima

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    char nombre[20];
    char nombreMax[20];
    char nombreMin[20];
    int nota;
    int notaMin;
    int notaMax;
    int acumulador=0;
    int acumuladorF=0;
    int contador=0;
    int contadorF=0;
    char sexo;
    char sexoMin;
    char sexoMax;
    float promedioTotal;
    float promediosMujeres;
    char seguir;
    int flag=0;

    do
    {
        printf("Ingrese el nombre: \n");
        fflush(stdin);
        gets(nombre);

        printf("Ingrese sexo: \n");
        fflush(stdin);
        scanf("%c", &sexo);

        while(sexo != 'f' && sexo != 'm')
        {
        printf("Error.Ingrese sexo f o m: \n");
        fflush(stdin);
        scanf("%c", &sexo);
        }

        printf("ingrese nota: \n");
        fflush(stdin);
        scanf("%i", &nota);

        while(nota<0 || nota > 10)
        {
        printf("ERROR.ingrese nota 0-10: \n");
        fflush(stdin);
        scanf("%i", &nota);
        }

        printf("desea seguir ingresando?:  \n" );
        fflush(stdin);
        seguir= getchar();

    }while (seguir == 's');
}
    acumulador += nota;
    contador++;

        if (sexo == 'f')
        {
            acumuladorF += nota;
            contador++
        }
        if (nota > notaMax || flag == 0)
        {
            notaMax = nota;
            strcpy(nombreMax, nombre);
            sexoMax=sexo;
        }
                if (nota > notaMin || flag == 0)
        {
            notaMin = nota;
            strcpy(nombreMin, nombre);
            sexoMin=sexo;
            flag=1;
        }
        promedio= (float)
