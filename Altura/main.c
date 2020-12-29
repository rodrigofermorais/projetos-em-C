#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,nmenores;
    double soma, percentualMenores, media;

    printf("Quantas pessoas esrao digitadas? ");
    scanf("%d", &n);

    char nomes[n] [50];
    int idades[n];
    double alturas[n];

     printf("\n");

   for (i=0; i<n; i++) {
        printf("Dados da %da pessoa: \n", i+1);


        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);

        printf("\n");
   }

    soma= 0;
    for(i=0; i<n; i++){
        soma= soma+alturas[i];
    }
    media= soma/n;
    printf("Altura media: %.2lf\n", media);

    nmenores=0;
    for (i=0; i<n; i++){
        if (idades[i] < 16) {
            nmenores ++;
        }
    }

    percentualMenores= (double) nmenores *100.0 /n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);



    return 0;
}
