#include <stdio.h>

int main() {
    int tempo, velocidade;
    float litros;
    printf("Digite o tempo e a velocidade");
    scanf("%d %d", &tempo, &velocidade);

    litros = (tempo * velocidade) / 12.0f;

    printf("%.3f\n", litros);

    return 0;
}
