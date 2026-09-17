#include <stdio.h>

int main() {
    float total = 780000.00f;
    float primeiro = total * 0.46f;
    float segundo = total * 0.32f;
    float terceiro = total * 0.22f;

    printf("%.2f\n", primeiro);
    printf("%.2f\n", segundo);
    printf("%.2f\n", terceiro);

    return 0;
}
