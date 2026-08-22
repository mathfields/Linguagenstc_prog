#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float reais, dolar, cotacao;
	printf("Digite o valor que quer converter:");
	scanf("%f", &reais);
	
	printf("Digite a cotação do dolar:");
	scanf("%f", &dolar);
	
	cotacao = reais*dolar;
	
	printf("Seu valor de %0.2f convertido na cotaçao atual de %0.2f = %0.2f", reais, dolar, cotacao);
	
	return 0;
}
