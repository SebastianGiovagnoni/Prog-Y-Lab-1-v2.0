#include "persona.h"

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

    free(puntero);
    puntero=NULL;

    return puntero;
}

void mostarUnaPersona (ePersona*, unaPersona)

{

}
