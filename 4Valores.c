#include <stdio.h>

int main() {
    double v1, v2, v3, v4;
    double soma, media, produto;
    
    printf("Digite o s quatro valores");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);

    soma = v1 + v2 + v3 + v4;
    media = soma / 4.0;
    produto = v1 * v2 * v3 * v4;

    printf("Soma: %.2lf\n", soma);
    printf("Media: %.2lf\n", media);
    printf("Produto: %.2lf\n", produto);

    return 0;
}
