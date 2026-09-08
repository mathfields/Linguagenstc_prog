#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char cpf [12];
	int multi, resto, v1,v2;
	int multi2;
	int resto2;
	
	
	printf("Escreva seu CPF:");
	scanf("%s", &cpf);
	
	multi = (cpf[1])*10 + (cpf[2])*9 + (cpf[3])*8 + (cpf[4])*7 + (cpf[5])*6 + (cpf[6])*5 + (cpf[7])*4 + (cpf[8])*3 + (cpf[9])*2;
	resto = (multi*10)%11;
	if (resto ==0 ||resto == 10){
		v1 = true;
		if(v1 == true){
		 multi2 = (cpf[1])*11 + (cpf[2])*10 + (cpf[3])*9 + (cpf[4])*8 + (cpf[5])*7 + (cpf[6])*6 + (cpf[7])*5 + (cpf[8])*4 + (cpf[9])*3 + (cpf[10])*2;
		 resto2 = (multi2*10)%11;
		 
		 if(resto2 == 0||resto2 == 10){
		 	v2 = true;
		 	if(v2 == true){
			 
		 		printf("\nSeu Cpf e valido!");
		 }
			 }
		 }
			
		}

	return 0;
}
