#include <stdio.h>

int main() {
    double valor;

  
    printf("Digite o numero que vai transformar em notação cientifico");
    scanf("%lf", &valor);

    printf("%E\n", valor);

    return 0;
}
