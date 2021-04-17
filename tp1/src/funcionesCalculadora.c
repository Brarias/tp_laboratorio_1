
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


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
int division(float* pResultado ,int operando1, int operando2)
{

    int retorno = -1;
    float resultadoDivision;
    if( operando2 != 0)
    {
        resultadoDivision = (float) operando1 / operando2;
        *pResultado = resultadoDivision;

        retorno = 0;
    }

    return retorno;

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
