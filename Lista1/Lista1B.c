#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inverso(){
    int a,b;
	printf("Digita um valor\n");
	scanf("%d", &a);
	
	printf("Digita outro valor\n");
	scanf("%d", &b);
	
	printf("Segundo valor primeiro %d \n", b);
	printf("primeiro valor depois %d \n", a);
}
void notacao(){ //feito com auxilio de ia, comprender completamente//
double valor, a;
    int n = 0;
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);
   
    if (valor > 0) {//ppor exemplo, while não seria para, repetir um bloco de código?//
        a = valor;
        while (a >= 10.0) {
            a = a / 10.0;
            n++;
        } 
        while (a < 1.0) {
            a = a * 10.0;
            n--;
        }
        printf("%.4lf x 10^%d\n", a, n);

    } else {
        printf("Erro: Insira apenas valores positivos.\n");
    }

}
void binario () {
int n;
	int resultado, bit64, bit32, bit16, bit8, bit4, bit2;
	
	printf ("Digite um valor N para transformar em Binario \n");
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
	//vscode marcando amarelo por aqui//
	printf ("O valor de %d em binario é %d%d%d%d%d%d%d ", n, resultado, bit2, bit4, bit8, bit16, bit32, bit64);
	return 0;

}
void salario_comissao(){
float salario_fixo, total_vendas, total_receber;
//um bom exemplo de nomenclatura das variaveis declaradas//

    printf("Digite o salario"); 
    scanf("%f", &salario_fixo);
  
    printf("Digite o total de vendas");
    scanf("%f", &total_vendas);

    total_receber = salario_fixo + (total_vendas * 0.15);

    printf("%.2f\n", total_receber);

}
void media4v(){
    
    int v1, v2, v3, v4;
    float soma, media, produto;

    printf("Digite o 1o valor: ");
    scanf("%d", &v1);
    
    printf("Digite o 2o valor: ");
    scanf("%d", &v2);
    
    printf("Digite o 3o valor: ");
    scanf("%d", &v3);
    
    printf("Digite o 4o valor: ");
    scanf("%d", &v4);

    // Realizando os cálculos matemáticos, porém a atribuição me deixa um pouco na duvida onde fazer //
    soma = v1 + v2 + v3 + v4;
    media = soma / 4.0;
    produto = v1 * v2 * v3 * v4;

    
    printf("\n--- RESULTADOS ---\n");
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n", produto);

}
void idade (){
 int idade_dias, anos, meses, dias;

    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    idade_dias = idade_dias % 365;
    // o resto da divisãio é muito util, mas dificil de usar, porém essencial//
    meses = idade_dias / 30;
    dias = idade_dias % 30;


    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

}
void esfera (){

    float R, volume;
    
    printf("Digite o raio do circulo");

    scanf ("%f", &R);

    volume = (4.0 / 3.0) * 3.14159 * R * R * R;

    printf("VOLUME = %.3f\n", volume);

}
void cartesiano(){
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
	
}
int main(int argc, char *argv[]) {
	int selecao;
	printf("Selecione a opcao desejada\n ===================== \n 1- Invercao \n 2 - Notacao cientifica \n 3 - Base Binaria \n 4- Salario fixo e comissão \n 5- Media de 4 valores \n 6- idade em dias conversao\n 7- valor da esfera \n 8- Plano cartesiano \n ");
	scanf("%d", &selecao);
	switch (selecao){
    case 1:
     inverso();
        break;
    case 2:
     notacao();
       break;
    case 4:
     binario();
      break;
    case 5:
     salario_comissao();
      break;
    case 6:
     idade();
      break;
    case 7:
     esfera();
      break;
    case 8:
     cartesiano();
      break;  
    default:
     printf("Opcaoo inválida! Tente novamente.\n");
      break;
	}
    //código muito longo, dar jeito de encurtar, ´creio que com funções mas a parte escrita sumiri?//
    
	return 0;
}