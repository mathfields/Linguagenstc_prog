#include <stdio.h>
#include <stdlib.h>

//podemos usar também estrutura condicional composta, significa que switch e case Switch e Break//
int main(int argc, char *argv[]) {
	char letra;
	
	printf("Digite uma letra:");
	scanf("%c",&letra);
	
	if (letra == 'a'||letra == 'e'||letra == 'i'||letra == 'o'||letra == 'u'){
		printf("Sua letra eh uma vogal!");
			if (letra == 'a'||letra == 'e');{
				printf("\n Aoba");
			}
	 }else{
		printf("67");
	}
	
	switch (letra){
	case 'a':
		printf("\n A de amor");
		break;
	case 'b':
		printf("\n b de baixinho");
		break;
	case 'c':
		printf("\n A de coracao");
		break;
	case 'd':
		printf("\n d de dedinho");		
}

	
	
	return 0;
}
