#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pVec;
    int i;

    pVec = (int*) malloc(sizeof(int)*5);

    for(i=0; i<5; i++)
    {
       printf("ingrese un numero: ");
       scanf("%d", pVec+i);
    }

    for(i=0; i<5; i++)
    {
      printf("%d\n", *(pVec+1));
    }

    return 0;
}
