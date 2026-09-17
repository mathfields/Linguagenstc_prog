#include <stdio.h>

int main() {
 
  float velo_max, velo_veiculo, porce;
  
  printf("Qual a velociadade o veículo estava?:\n");
  scanf("%f", &velo_veiculo);

  printf("qual era o limite do radar?");
  scanf("%f", &velo_max);
  
  if (velo_veiculo <= velo_max){
     
     printf("Sem infracao");
}

     else{
          porce = ((velo_veiculo - velo_max) / velo_max) * 100; 
          
       if(porce <=20){
         printf("Infracao media - multa : R$ 130.16 : Exedeu %0.2f%", porce);
}
       else if (porce <=50){
         printf ("infracao grave - multa : R$195.93 : Exedeu %0.2f", porce);
}
        else{
         printf ("infracao gravissima - multa : R$880.41 : Exedeu %0.2f", porce);
}
}

return ;
}      
             
