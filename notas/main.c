#include <stdio.h>

int main()
{
    double nota1, nota2, notafinal;

    printf("Digite a primeira nota: ");
    scanf ("%.lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf ("%.lf", &nota2);

    notafinal = (nota1+nota2)/2;

    printf("Nota Final: %.1f", notafinal);

    if ( notafinal < 60.0){
        printf("REPROVADO");
    }



    return 0;
}

