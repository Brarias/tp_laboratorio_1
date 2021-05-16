#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployee.h"

#define LEN 1000


int main()
{
	setbuf(stdout, NULL);
    sEmployee employees[LEN];
    char exit = 'n';
    int nextId = 1;
    int flagOpcion1 = 0;


    initEmployees(employees, LEN);

    do
    {
        switch(menu())
        {
        case 1:

            if(!addEmployee(employees, LEN, &nextId))
            {
                printf("Alta exitosa\n");
                flagOpcion1 = 1;
            }

            else
            {
                printf("No se pudo dar de alta\n");
            }

            break;
        case 2:
            if(flagOpcion1)
            {
                modifyEmployee(employees, LEN);
            }
            else
            {
                printf("Primero debes ingresar a un empleado");
            }
            break;
        case 3:

            if(!removeEmployee(employees, LEN)){
                printf("Baja exitosa\n");
            }
            break;
        case 4:
            if(!sortEmployees(employees, LEN))
            {
                printEmployees(employees, LEN);
                flagOpcion1 = 1;
            }
            else
            {
                printf("No se pudo ordenar\n");
            }

            break;

        case 5:

            printf("Confirma salida?\n");
            fflush(stdin);
            exit = getchar();
            break;

        default:
            printf("Opcion invalida!\n");
            system("pause");
        }

        system("pause");
    }
    while(exit == 'n');








    return 0;
}

int  menu()
{
    int opcion;

    system("cls");
    printf("*** ABM Empleados***\n\n");
    printf("1. Altas\n");
    printf("2. Bajas\n");
    printf("3. Modificar\n");
    printf("4. Informar\n");
    printf("5. Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);


    return opcion;
}
