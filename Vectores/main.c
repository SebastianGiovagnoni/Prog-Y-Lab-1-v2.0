#include <stdio.h>
#include <stdlib.h>
//Ejemplo de array
int main()
{
    int numero;
    int vector[10]={1,-1,2,-2,3,-30,4,-4,5,-5};
    int i;
    int suma = 0;
    int contadorPos = 0;
    int max;
    int min;
    int flagMax = 0;
    int flagMin = 0;
    float promedioPos;
   /* for(i = 0;i<10;i++)
    {
        vector[i]= 0;
    }
    for(i = 0;i<10;i++)
    {for(i = 0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }*/
    for(i = 0;i<10;i++)
    {
        printf("El valor es: %d\n", vector[i]);
    }
    for(i = 0;i<10;i++)
    {
        if(vector[i] < 0)
        {
            printf("Los negativos son: %d\n", vector[i]);
        }
    }
    for(i = 0;i<10;i++)
    {
        if(vector[i] > 0)
        {
            suma += vector[i];
            contadorPos++;
        }
    }
            promedioPos = (float)suma / contadorPos;
            printf("El promedio de los numeros positivos es: %.2f\n", promedioPos);

    for(i = 0;i<10;i++)
    {
        if(vector[i]>max || flagMax == 0)
        {
            max = vector[i];
            flagMax = 1;
        }
    }
    for(i = 0;i<10;i++)
    {
        if(vector[i]<min || flagMin == 0)
        {
            min = vector[i];
            flagMin = 1;
        }
    }
    printf("El maximo es: %d\n", max);
    printf("El minimo es: %d\n", min);




    return 0;
}
