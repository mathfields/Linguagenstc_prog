#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, r, r2;
	
	printf("Digite os numeros do problema:");
	scanf("%d %d", &a, &b);
	
	if (a>0 && b>0){
		
		if (a%2 == 0){
			if(b%2 == 0){
				printf("São multiplos de 2:");
			}
		}
	}
	if(a>b){
			if (a%b == 0){
			printf("Seus numeros são multiplos entre si");
		 }else{
		 if(b%a == 0)
		 printf("Seus numeros são multiplos entre si");
		}
	}

	return 0;
}
