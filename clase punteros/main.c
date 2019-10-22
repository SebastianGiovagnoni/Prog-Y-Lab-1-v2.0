#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();

int main()
{

    ePersona* puntero = new_Persona();
    if(puntero!=NULL)
    {
        printf("%d--%c--%.2f", puntero->legajo,
                               puntero->sexo,
                               puntero->altura);
    }

    return 0;
}

ePersona* new_Persona()
{

    //ePersona unaPersona = {1000, 'M', 1.78};
    //puntero = &unaPersona;

    ePersona* puntero;

    puntero = (ePersona*) malloc(sizeof(ePersona));

    if(puntero!=NULL)
    {
        puntero->legajo=777;
        puntero->sexo='M';
        puntero->altura=1.80;
    }

    return puntero;

}
