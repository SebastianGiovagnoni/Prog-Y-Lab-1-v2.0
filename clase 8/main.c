#include <stdio.h>
#include <stdlib.h>

typedef struct
 {

  char nombre[50];
  int nota;
  int legajo;
  int estado;//... 0 = ocupado 1 = vacio

 }eAlumno;
int main()
{
    int i;
    int flag=1;
    eAlumno alumno;
    eAlumno otroAlumno;
    eAlumno listadoDeAlumnos[5];

    for(i=0; i<5; i++)
    {
        listadoDeAlumnos[i].estado = 1;
    }
    for(i=0; i<5; i++)
    {
        if(listadoDeAlumnos[i].estado == 0)
        {
            printf("%s", listadoDeAlumnos[i].nombre);
            flag = 0;
        }

    }
    if(flag = 1)
    {
        printf("Vacio");
    }

    printf("ingrse nota: ");
    scanf("%d", &alumno.nota);
    printf("\nla nota es: %d\n", alumno.nota);

    printf("\ningrese el nombre: ");
    scanf("%s", &alumno.nombre);
    printf("\nel nombre es: %s\n", alumno.nombre);

    otroAlumno = alumno;

    printf("\nla nota del otro es: %d\n", otroAlumno.nota);

    printf("\nel nombre del otro es: %s\n", otroAlumno.nombre);




    return 0;
}

void listadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{

    int i;
    int flag = 1;

     for(i=0; i<5; i++)
    {
        listadoDeAlumnos[i].estado = 1;
    }
    for(i=0; i<5; i++)
    {
        if(listadoDeAlumnos[i].estado == 0)
        {
            printf("%s", listadoDeAlumnos[i].nombre);
            flag = 0;
        }

    }
    if(flag = 1)
    {
        printf("Vacio");
    }
}

void mostrarAlumno (eAlumno alumno)
{
    printf("el nombre es: %s\n la nota es: %d\n el legajo es: %d", alumno.nombre, alumno.nota, alumno.legajo);
}
