#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();
ePersona* new_Persona_Parametros(int, char, float);

void setLegajo (ePersona*, int);
int getLegajo (ePersona*);

void delete_persona(ePersona*);
void mostarUnaPersona (ePersona*);
