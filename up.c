#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior (){
	int a;
	int b;
	return (a+b +(abs((a-b)))/2);
}
int main(int argc, char *argv[]) {
	int vet [10];
	int i, maiorgen;
	
	for (i = 0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0, maiorgen = vet[i]; i<10;i++){
		maiorgen=maior(maiorgen, vet[i]);
	
	}
	printf("\n %d eh maior", maiorgen);

	return 0;
}
