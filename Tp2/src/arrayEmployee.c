#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployee.h"


void initEmployees(sEmployee* list, int len)
{

    if(list != NULL && len > 0)
    {
        for(int i = 0; i < len; i++)
        {
            list[i].isEmpty = 1;

        }


    }

}

int addEmployee(sEmployee* list, int len, int* pId)
{

    int error = -1;
    sEmployee newEmployee;
    int index;
    int idSector;

    system("cls");
    printf("         Alta Empleado     \n");
    printf("Id: %d\n", *pId);


    if(list != NULL && len > 0)
    {
        index = searchFree(list, len);

        if(index == -1)
        {
            printf("Sistema Completo!!!\n");
        }
        else
        {
            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets(newEmployee.name);

            printf("Ingrese Apellido: ");
            fflush(stdin);
            gets(newEmployee.lastName);

            printf("Ingrese salario: ");
            scanf("%f", &newEmployee.salary);

            printf("Ingrese sector: ");
            scanf("%d", &idSector);
            newEmployee.sector = idSector ;

            newEmployee.id = *pId;
            newEmployee.isEmpty = 0;
            *pId = *pId +1;
            list[index] = newEmployee;



            error = 0;

        }



    }
    return error;



}
int searchFree(sEmployee list[], int len)
{
    int index = -1;

    if(list !=NULL && len > 0)
    {
        for(int i = 0; i < len; i++)
        {
            if(list[i].isEmpty)
            {
                index = i;
                break;
            }
        }
    }
    return index;
}

int findEmployeeById(sEmployee* list, int len,int id)
{
    int index = -1;

    if(list != NULL && len > 0)
    {
        for(int i = 0; i < len; i++)
        {
            if(list[i].id == id && list[i].isEmpty == 0)
            {
                index = i;
                break;
            }
        }
    }

    return index;
}
int removeEmployee(sEmployee* list, int len)
{
    int id;
    int error = -1;
    int index;
    char confirm;

    printEmployees(list, len);
    printf("Ingrese id del usuario a borrar: ");
    scanf("%d", &id);
    index = searchId(list, len, id);

    if(index == -1)
    {
        printf("No se encontro el ID");
    }
    else
    {
        printf("Desea dar de baja al empleado? ");
        fflush(stdin);
        scanf("%c", &confirm);
        if(confirm == 's')
        {
            list[index].isEmpty = 1;
            error = 0;
        }
        else
        {
            printf("Baja cancelada");
        }
    }


    return error;

}
int sortEmployees(sEmployee* list, int len)
{
    int error = -1;
    int order;
    sEmployee auxEmployee;

    printf("Ingrese 1 para ordenar alfabeticamente o 0 para lo contrario: ");
    scanf("%d", &order);

    if(order == 0){
    for(int i = 0; i < len -1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(list[i].sector > list[j].sector || (list[i].sector == list[j].sector && strcmp(list[i].lastName, list[j].lastName) > 0))
            {
                auxEmployee = list[i];
                list[i] = list[j];
                list[j] = auxEmployee;
                error = 0;
            }
        }
    }
    }
    else  if(order == 1){
    for(int i = 0; i < len -1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(list[i].sector < list[j].sector || (list[i].sector == list[j].sector && strcmp(list[i].lastName, list[j].lastName) > 0))
            {
                auxEmployee = list[i];
                list[i] = list[j];
                list[j] = auxEmployee;
                error = 0;
            }
        }
    }
    }
    return error;
}
void printEmployees(sEmployee* list, int length)
{
    printf("               Listado de Empleados\n");
    printf("Id    Nombre    Apellido     Sueldo    Sector\n\n");

    for(int i = 0; i < length; i++)
    {
        if(!list[i].isEmpty )
        {
            printEmployee(list[i]);

        }
    }

}
void printEmployee(sEmployee employee)
{

    printf("%d  %10s %10s     %.2f  %d\n",
           employee.id,
           employee.name,
           employee.lastName,
           employee.salary,
           employee.sector);
}

int searchId(sEmployee list[],int len, int id)
{
    int index = -1;

    if(list != NULL && len > 0 && id > 0)
    {

        for(int i=0; i<len; i++)
        {
            if(list[i].id == id && list[i].isEmpty == 0)
            {
                index = i;
                break;
            }
        }
    }
    return index;

}
void modifyEmployee(sEmployee* list, int len)
{

    int id;
    char confirm;
    char answer;
    int index;

    printEmployees(list, len);
    printf("Ingrese id del usuario a modificar: ");
    scanf("%d", &id);
    index = searchId(list, len, id);

    if(index == -1)
    {
        printf("No se encontro el ID");
    }
    else
    {
        do
        {
            printf("Seleccione el campo a modificar: ");

            switch(menuModify())
            {
            case 1:
                printf("Ingrese el nuevo nombre: ");
                gets(list[index].name);
                break;

            case 2:
                printf("Ingrese el nuevo apellido: ");
                gets(list[index].lastName);

                break;

            case 3:
                printf("Ingrese el nuevo salario: ");
                scanf("%f", &list[index].salary);
                break;

            case 4:
                printf("Ingrese el nuevo sector: ");
                scanf("%d", &list[index].sector);
                break;

            case 5:
                printf("Confirma salida?\n");
                fflush(stdin);
                confirm = getchar();
                break;


            default:
                printf("Opcion invalida!\n");
                system("pause");
                break;

            }
        }
        while(confirm == 'n');
    }

}

int menuModify()
{
    int opcion;
    printf("  Menu de Modificacion   \n");
    printf("1. Nombre\n");
    printf("2. Apellido\n");
    printf("3. Salario\n");
    printf("4. Sector\n");
    printf("5. Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


