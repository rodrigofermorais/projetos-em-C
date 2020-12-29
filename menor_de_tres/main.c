#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,menor;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);

    if (a<b && a<c) {
        menor = a;
        printf("\nPrimeiro valor\n");
    }
        else if (b<c) {
            menor = b;
            printf("\nSegundo valor\n");
        }
                else{
                    menor= c;
                    printf("\nTerceiro valor\n");
                }

     printf("Menor= %d\n", menor);

    return 0;
}
