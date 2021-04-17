/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu(int flagNum1, int flagNum2, int operando1, int operando2);
int suma(int operando1, int operando2);
int resta(int operando1, int operando2);
int multiplicacion(int operando1, int operando2);

float division(int operando1, int operando2);
int factorial(int operando);



int main()
{
	setbuf(stdout, NULL);

    int num1;
    int num2;
    int flagOpcion1 = 0;
    int flagOpcion2 = 0;
    int flagOpcion3 = 0;
    int resMultiplicacion;
    int resSuma;
    int resResta;
    int resFactorialA;
    int resFactorialB;
    float resDivision;
    char salir = 'n';

    do
    {

        switch(menu(flagOpcion1, flagOpcion2, num1, num2))
        {
        case 1:

            printf("Ingrese Primer operando: \n");
            scanf("%d", &num1);

            flagOpcion1 = 1;
            system("pause");
            break;
        case 2:
            if(flagOpcion1)
            {
                printf("Ingrese Segundo operando: \n");
                scanf("%d", &num2);

                flagOpcion2 = 1;
                system("pause");
            }
            else
            {
                printf("Debes ingresar primer operando\n");

            }
            break;
        case 3:

            if(flagOpcion1 && flagOpcion2)
            {

               resSuma = suma(num1, num2);

                resResta = resta(num1, num2);

               resDivision = division(num1, num2);


                 resMultiplicacion = multiplicacion(num1, num2);


               resFactorialA = factorial(num1);
               resFactorialB = factorial(num2);

                flagOpcion3 = 1;


            }

            else if(flagOpcion1 && !flagOpcion2)
            {
                printf("Debes ingresar segundo operando\n");
            }
            else
            {
                printf("Debes ingresar primer operando\n");
            }
            system("pause");
            break;
        case 4:

            if(flagOpcion3)
            {

                printf("a) El resultado de A+B es: %d\n", resSuma);
                printf("b) El resultado de A-B es: %d\n", resResta);
                if(num2 != 0)
                {
                    printf("c) El resultado de A/B es: %.2f\n", resDivision);
                }
                else
                {
                    printf("No es posible dividir por cero\n");
                }
                printf("d) El resultado de A*B es: %d\n", resMultiplicacion);
                printf("e) El factorial de A es: %d y El factorial de B es: %d\n", resFactorialA, resFactorialB);

                system("pause");

            }
            else
            {

                printf("Primero debes realizar los calculos\n\n");

            }
            flagOpcion1 = 0;
            flagOpcion2 = 0;
            flagOpcion3 = 0;

            break;
        case 5:
            printf("Confirma salida?\n");
            fflush(stdin);
            salir = getchar();
            system("pause");
            break;

        default:
            printf("No es una opcion correcta\n");
        }
    }
    while(salir == 'n');


    return 0;
}


int menu(int flagNum1, int flagNum2, int operando1, int operando2)
{
    int opcion;

    printf("---Bienvenidos a la calculadora(Tp1)---\n\n");

    if(flagNum1)
    {
        printf("1-Ingresar primer operando(A=%d)\n", operando1);
    }
    else
    {
        printf("1-Ingresar primer operando(A=x)\n");
    }
    if(flagNum2)
    {
        printf("2-Ingresar segundo operando(B=%d)\n", operando2);
    }
    else
    {
        printf("2-Ingresar segundo operando(B=X)\n");
    }

    printf("3-Calcular todas las operaciones\n");

    printf("     a) Calcular la suma (A+B)\n");
    printf("     b) Calcular la resta (A-B)\n");
    printf("     c) Calcular la division (A/B)\n");
    printf("     d) Calcular la multiplicacion (A*B)\n");
    printf("     e) Calcular el factorial (A!)\n\n");

    printf("4-Informar todos los resultados\n");
    printf("5-Salir\n\n");
    printf("Seleccione una opcion entre 1-5\n");
    scanf("%d", &opcion);


    return opcion;
}


int suma(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 + operando2;

    return resultado;
}

int resta(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 - operando2;

    return resultado;
}
int multiplicacion(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 * operando2;

    return resultado;
}
float division(int operando1, int operando2)
{
    float resultado;
    if(operando2 != 0)
    {
        resultado = (float) operando1 / operando2;
    }
    else
    {
        printf("No es posible dividir por cero\n");

    }
    return resultado;

}

int factorial(int operando)
{
    int fact = 1;

    for(int i = 1; i <= operando; i++)
    {
        fact *= i;
    }

    return fact;
}
