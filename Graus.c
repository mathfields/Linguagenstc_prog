#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int c, f;
	printf("para converter para fihrent, Quantos graus esta fazendo?");
	scanf("%d", &c);
	
	f = c*9/5 + 32;
	
	printf("Comvertendo %d C° temos %d F°",c, f );
	
	return 0;
}
