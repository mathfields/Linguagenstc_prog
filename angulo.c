#include <stdio.h>

int main() {
    double G, R;

    printf("Digite o valor do angulo em graus");
    scanf("%lf", &G);

    R = G * 3.141592 / 180.0;

    printf("%lf\n", R);

    return 0;
}
