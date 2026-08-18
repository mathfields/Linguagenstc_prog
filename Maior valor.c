#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, b, c, maiortemp,maior;
	
	printf("Digite três valores para descobrir o maior:");
	scanf("%d %d %d", &a, &b, &c);
	
	maiortemp =((a+b+abs(a-b))/2);
	
	maior = ((maiortemp+c+abs(maiortemp-c))/2);

	
	printf("o maior valor entre [%d] [%d] [%d] é %d", a, b, c, maior);
	
	
	return 0;
}
