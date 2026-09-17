#include <stdio.h>

int main() {
    double salario_fixo, total_vendas, total_receber;


    printf("Digite o salario"); 
    scanf("%lf", &salario_fixo);
  
    printf("Digite o total de vendas");
    scanf("%lf", &total_vendas);

    total_receber = salario_fixo + (total_vendas * 0.15);

    printf("%.2lf\n", total_receber);

    return 0;
}
