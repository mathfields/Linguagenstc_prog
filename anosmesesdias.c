#include <stdio.h>

int main() {
    int idade_dias, anos, meses, dias;

  
    printf("Digite uma idade em diaas");
    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    idade_dias = idade_dias % 365;
    
    meses = idade_dias / 30;
    dias = idade_dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
