#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.bin (modo binario).
    10. Salir
*****************************************************/


int main()
{
    //int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    Employee* e1 = employee_newParametros("5", "Maria", "10", "5000");
    Employee* e2 = employee_newParametros("6", "Carlos", "11", "6000");
    Employee* e3 = employee_newParametros("7", "Sebastian", "12", "7000");
    Employee* e4 = employee_newParametros("8", "Juan", "20", "100");

    Employee* aux;
    int x;
    int len;

    ll_add(listaEmpleados,e1);
    ll_add(listaEmpleados,e2);
    ll_add(listaEmpleados,e3);
    ll_add(listaEmpleados,e4);

    len = ll_len(listaEmpleados);

    for(x=0; x<len; x++)
    {
        aux = (Employee*) ll_get(listaEmpleados,x);
        mostrarEmpleado(aux);
    }
    ll_pop(listaEmpleados,3);
    printf("\neliminaste a este: \n");

    mostrarEmpleado(aux);
    printf("\n");

    len=ll_len(listaEmpleados);

    for(x=0; x<len; x++)
    {
        aux = (Employee*) ll_get(listaEmpleados,x);
        mostrarEmpleado(aux);
    }
    len = ll_isEmpty(listaEmpleados);
    printf("%d", len);
    ll_clear(listaEmpleados);

   LinkedList* listaAux = ll_len(listaEmpleados);
     for(x=0; x<len; x++)
    {
        aux = (Employee*) ll_get(listaAux,x);
        mostrarEmpleado(aux);
    }

    return 0;
}
