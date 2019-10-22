#include <inputs.h>
int getInt(char mensaje[])
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);

    while(numero<min || numero>max)
    {
    printf("error %s\a\a", mensaje);
    scanf("%d", numero);
    }

    return numero;
}
