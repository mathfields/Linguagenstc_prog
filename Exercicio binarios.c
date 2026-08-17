#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	int resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	
	printf ("Digite um valor N para transformar em Binario/n");
	scanf("%d", &n);
	
	bit64 = n%2;
	resultado = n/2;
	
	bit32 = resultado%2;
	resultado = resultado/2;
	
	bit16 = resultado%2;
	resultado = resultado/2;
	
	bit8 = resultado%2;
	resultado = resultado/2;
	
	bit4 = resultado%2;
	resultado = resultado/2;
	
	bit2 = resultado%2;
	resultado = resultado/2;
	
	printf ("O valor de %d em binario é %d%d%d%d%d%d%d ", n, resultado, bit2, bit4, bit8, bit16, bit32, bit64);
	return 0;
}
