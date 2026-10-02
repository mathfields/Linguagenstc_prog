#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void idade(){
    int a, idade;
	printf("Digite o ano em que você nasceu:");
	scanf("%d",&a);
	
	idade = 2026-a;
	
	printf ("Se você nasceu em %d sua idade é %d", a, idade); 
}
void conversaokm(){
 int km;
 float ms;
	
	pintf("Para converter km em Ms diga quantos KM/h quer converter:");
	scanf("%d", &km);
	
	ms = km/36;
	
	printf("O valor convertido de %d Km/m é = %0.1f M/s", km, ms);
}
void dolar (){

float reais, dolar, cotacao;
	printf("Digite o valor que quer converter:");
	scanf("%f", &reais);
	
	printf("Digite a cotação do dolar:");
	scanf("%f", &dolar);
	
	cotacao = reais*dolar;
	
	printf("Seu valor de %0.2f convertido na cotaçao atual de %0.2f = %0.2f", reais, dolar, cotacao);

}
void grausf(){
    int c, f;
	printf("para converter para fihrent, Quantos graus esta fazendo?");
	scanf("%d", &c);
	
	f = c*9/5 + 32;
	
	printf("Comvertendo %d C° temos %d F°",c, f );

}
void conversao_radiano(){

    float G, R;

    printf("Digite o valor do angulo em graus");
    scanf("%f", &G);

    R = G * 3.141592 / 180.0;

    printf("%f\n", R);

}
void antecessor_sucessor(){
int n, antecessor, sucessor;
	printf("entre com valor de N:");
	scanf ("%d", &n);
	printf("O numero %d, seu antecessor %d e seu sucessor %d", n, n-1, n+1);
}
void valor_ganho_podio(){
int tempo, velocidade;
    float litros;
    printf("Digite o tempo e a velocidade");
    scanf("%d %d", &tempo, &velocidade);

    litros = (tempo * velocidade) / 12.0f;

    printf("%.3f\n", litros);
}
void duracao_segundos_convertida(){
    // gostei do exercicio pois mexe com resto de divisão, anotar pra procurar parecidos//
    int total_segundos, horas, minutos, segundos;
    scanf("%d", &total_segundos);

    
    horas = total_segundos / 3600;
    
    // Pega o resto dos segundos e calcula os minutos (1 minuto = 60 segundos)
    minutos = (total_segundos % 3600) / 60;
    
    // O que sobra da divisão por 60 são os segundos finais
    segundos = total_segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

void joaozinho(){
int tempo, velocidade;
    float litros;
    printf("Digite o tempo e a velocidade");
    scanf("%d %d", &tempo, &velocidade);

    litros = (tempo * velocidade) / 12.0f;

    printf("%.3f\n", litros);
}
void maiordetres(){
int a;
	int b;
	int c;
	int maior;
	printf("Digite o numer A:");
	scanf("%d", &a);
	
	printf("Digite o numer A:");
	scanf("%d", &b);
	
	printf("Digite o numer A:");
	scanf("%d", &c);
	
	if (a>b && a>c){
		printf("%d eh o maior\n", a);
	}
	if(b>c && b>c){
		printf("%d eh o maior\n", b);
	}
	
	if(c>a && c>b){
		printf("%d eh o maior\n", c);
	}
}


int main(int argc, char *argv[]) {
	int selecao;
	printf("Selecione a opcao desejada\n ===================== \n 1- Idade \n 2 -conversao km \n 3 - cotacao dolar \n 4- conversao graus para F \n 5- conversao radiano \n 6- antecessor e sucessor\n 7- tês ganhadores \n 8- Tempo de duracao em segundos \n 9- Joaozinho combustivel\n 10- maior de tres\n ");
	scanf("%d", &selecao);
	switch (selecao){
    case 1:
     idade();
        break;
    case 2:
     conversaokm();
       break;
    case 3:
     dolar();
      break;
    case 4:
     grausf();
      break;
    case 5:
     conversao_radiano();
      break;
    case 6:
     antecessor_sucessor();
      break;
    case 7:
     valor_ganho_podio();
      break;
    case 8:
     duracao_segundos_convertida();
      break;
    case 9:
     joaozinho();
      break;  
    case 10:
     maiordetres();
      break;
    default:
     printf("Opcaoo inválida! Tente novamente.\n");
      break;
	}
	return 0;
}