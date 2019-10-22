#include <stdio.h>
#include <stdlib.h>
/*saca factorial*/
int main()
{
    int numerardou = 5 ;
    int resultadou = 1;
    int i;

    for(i=numerardou; i>=1; i--)
    {
        resultadou = resultadou * i;

    }
    printf("%d", resultadou);


    return 0;
}
