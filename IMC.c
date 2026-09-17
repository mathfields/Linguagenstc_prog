#include <stdio.h>
#include <math.h>

 int main(){
 
 float kg, alt, imc;
 
  printf("Quantos kg você tem?\n");
  scanf("%f", &kg);

  printf("Qual sua altura?");
  scanf("%f", &alt);
  
  imc = kg / (pow(alt, 2));
  
  if(imc < 18.5){
  	
  	printf("O IMC do individuo eh %0.2f -- Abaixo do peso\n", imc);
  
  }
  else if(imc >=18.5 && imc < 25.0){
  	printf("O IMC do individuo eh %0.2f -- peso normal\n", imc);
  }
   else if(imc >=25.0 && imc <30){
  	printf("O IMC do individuo eh %0.2f -- Sobrepeso\n", imc);
  }
  else if(imc >=30 && imc <35){
  	printf("O IMC do individuo eh %0.2f -- Obesidade I\n", imc);
  }
  else if(imc >=35 && imc <40){
  	printf("O IMC do individuo eh %0.2f -- Obesidade II \n", imc);
  }
  else{
  	printf("O IMC do individuo eh %0.2f -- Obesidade III (morbida) \n", imc);
  }

return 0;

}
