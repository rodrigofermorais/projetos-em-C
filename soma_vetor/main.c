#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double media,soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i=0; i<n; i++){
        printf("Digite um numeor: ");
        scanf("%lf", &vet[i]);
        }

    printf("\nValores: ");
    for (i=0; i<n; i++) {
        printf("%.1lf ", vet[i]);
        }

    printf("\n");

    soma =0 ;

    for (i=0; i<n; i++){
        soma= soma + vet[i];
    }

    printf("Soma= %.2lf\n", soma);

    media = soma / n;
    printf("Media= %.2lf", media);
    return 0;
}
