#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141597


int main(int argc, char *argv[]) {
	float r, area;
	
	printf ("insira o raio R do circulo\n");
	scanf ("%f", &r);
	
	area = pi *(r*r);
	printf ("A Area do circulo de raio R %0.2f = %0.2f\n",r, area);
	
	float h,b,B,a;
	printf ("Agora insira um valor para H altura de um trapezio\n");
	scanf ("%f",&h);
	
	printf ("Agora insira um valor para b base menor de um trapezio\n");
	scanf ("%f",&b);
	
	printf ("Agora insira um valor para B base maior de um trapezio\n");
	scanf ("%f",&B);
	
	a = (b+B)*h/2;
	
	printf ("a Area do trapezio = %0.2f\n",a);
	printf("Pressione qualquer tecla para continuar...");
    getchar();
	return 0;
}
