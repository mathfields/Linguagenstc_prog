#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(int argc, char *argv[]) {
		
	int x1, x2, y1, y2;
	float dist, cat1, cat2;
	
	printf("Digite o P1 x1;");
	scanf("%d", &x1);
	
	printf("Digite o P1 y1;");
	scanf("%d", &y1);
	
	printf("Digite o P2 x2;");
	scanf("%d", &x2);
	
	printf("Digite o P2 y2;");
	scanf("%d", &y2);
	
	cat1= pow ((x2-x1),2);
	cat2=pow((y2-y1),2);
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("Distancia:%f", dist); 
	
	return 0;
}
