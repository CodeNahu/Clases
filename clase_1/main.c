#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int numero; numero entero
    int numero2;
    float pi; /*numero flotante
    char sexo;/*caracter
    char nombre [20] = "Jose";/*para hacer string hay que usar vector de caracteres*/

    /*char nombre ;
    int edad;
    printf("Ingrese su nombre \n");
    printf("Ingrese su edad \n");
    scanf
    return 0;*/

    int numero1;
    int numero2;
    float resultado;

    printf("Ingrese un número: ");
    scanf("%d", &numero1);

    printf("Ingrese otro número: ");
    scanf("%d", &numero2);

    resultado= (float) (numero1 + numero2)/2.;

    printf("El promedio de los numeros ingresados es %.2f", resultado);

    return 0;
}
