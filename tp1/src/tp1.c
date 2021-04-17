

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcionesCalculadora.h"

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
    int respuestaDivision;
    float resultadoDivision;
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

                respuestaDivision = division(&resultadoDivision,num1, num2);

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

                if(respuestaDivision == 0)
                {
                    printf("c) El resultado de A/B es: %.2f\n", resultadoDivision);
                }
                else
                {
                    printf("No es posible dividir por cero\n");
                }
                printf("d) El resultado de A*B es: %d\n", resMultiplicacion);
                printf("e) El factorial de A es: %d y El factorial de B es: %d\n", resFactorialA, resFactorialB);

                system("pause");
                flagOpcion1 = 0;
                flagOpcion2 = 0;
                flagOpcion3 = 0;

            }
            else
            {

                printf("Primero debes realizar los calculos\n\n");

            }


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

