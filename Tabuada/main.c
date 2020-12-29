#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,resultado;

    printf("--------------------------------------\n");
    printf("Deseja a tabuada para qual valor: ");
    scanf("%d",  &x);

    printf("\n");
    for (y=1;  y<=10; y++) {
        resultado= x*y;
        printf ("%d X %d = %d \n", x,y,resultado);

    }

    printf("--------------------------------------\n");
    return 0;
}
