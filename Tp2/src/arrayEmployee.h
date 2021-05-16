#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}typedef sEmployee;


void initEmployees(sEmployee* list, int len);
int addEmployee(sEmployee* list, int len, int* pId);
int findEmployeeById(sEmployee* list, int len,int id);
int removeEmployee(sEmployee* list, int len);
void printEmployees(sEmployee* list, int length);
void modifyEmployee(sEmployee* list, int len);
int menuModify();

#endif // ARRAYEMPLOYEES_H_INCLUDED
