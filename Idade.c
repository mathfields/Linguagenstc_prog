#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a, idade;
	printf("Digite o ano em que você nasceu:");
	scanf("%d",&a);
	
	idade = 2026-a;
	
	printf ("Se você nasceu em %d sua idade é %d", a, idade); 
	
	
	
	return 0;
}
