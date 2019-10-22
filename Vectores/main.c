#include <stdio.h>
#include <stdlib.h>
//Dou
int main()
{
    int nuemro;
    int vector[10]={1,-1,2,-2,3,-30,4,-4,5,-5};
    int i;
    int suma = 0;
    int contadorPos = 0;
    int max;
    int min;
    int flagMax = 0;
    int flagMin = 0;
    float promedioPos;
    int opcion;
    char seguir='s';

    do
    {
        printf("1.Cargar\n2.Mostar\n3.Negativos\n4.Promedio Positivo\n5.Maximo\n6.Minimo\n7.Salir\nElija una opcion:");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            for(i = 0;i<10;i++)
    {
        vector[i]= 0;
    }
    for(i = 0;i<10;i++)
    {

        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
            break;
        case 2:
             for(i = 0;i<10;i++)
    {
        printf("El valor es: %d\n", vector[i]);
    }
            break;
        case 3:
            for(i = 0;i<10;i++)
    {
        if(vector[i] < 0)
        {
            printf("Los negativos son: %d\n", vector[i]);
        }
    }
            break;
        case 4:
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

            break;
        case 5:
             for(i = 0;i<10;i++)
    {
        if(vector[i]>max || flagMax == 0)
        {
            max = vector[i];
            flagMax = 1;
        }
    }
    printf("El maximo es: %d\n", max);
            break;

        case 6:
            for(i = 0;i<10;i++)
    {
        if(vector[i]<min || flagMin == 0)
        {
            min = vector[i];
            flagMin = 1;
        }
    }

    printf("El minimo es: %d\n", min);

            break;

        case 7:
            seguir='n';
            break;

        default:
            printf("ingrese una opcion valida!");
            break;
        }
         system("pause");
         system("cls");
    }while(seguir=='s');

    return 0;
}
