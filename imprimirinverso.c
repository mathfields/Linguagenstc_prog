#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	printf("Digita um valor\n");
	scanf("%d", &a);
	
	printf("Digita outro valor\n");
	scanf("%d", &b);
	
	printf("Segundo valor primeiro %d \n", b);
	printf("primeiro valor depois %d \n", a);
	
	return 0;
}
