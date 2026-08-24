#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	int maior;
	printf("Digite o numer A:");
	scanf("%d", &a);
	
	printf("Digite o numer A:");
	scanf("%d", &b);
	
	printf("Digite o numer A:");
	scanf("%d", &c);
	
	if (a>b && a>c){
		printf("%d eh o maior\n", a);
	}
	if(b>c && b>c){
		printf("%d eh o maior\n", b);
	}
	
	if(c>a && c>b){
		printf("%d eh o maior\n", c);
	}
	
	return 0;
}
