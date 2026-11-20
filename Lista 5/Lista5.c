#include <stdio.h>
#include <stdlib.h>

/* Constantes para os tamanhos exigidos na lista */
#define TAM_100 100
#define TAM_10 10

/* =========================================================================
   PROTOTIPOS DAS FUNCOES AUXILIARES E DOS EXERCICIOS
   ========================================================================= */
int maiorAB(int a, int b);
int ehPar(int n);
int ehPrimo(int n);
double raizQuadrada(double numero);
double distanciaEuclidiana(double x1, double y1, double x2, double y2);

void exibirMenu(void);
void executarTodos(void);

void exercicio1(void);
void exercicio2(void);
void exercicio3(void);
void exercicio4(void);
void exercicio5(void);
void exercicio6(void);
void exercicio7(void);

/* =========================================================================
   FUNCAO PRINCIPAL: Menu interativo com laco de repeticao
   ========================================================================= */
int main(void) {
    int opcao;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 1) {
            exercicio1();
        } else if (opcao == 2) {
            exercicio2();
        } else if (opcao == 3) {
            exercicio3();
        } else if (opcao == 4) {
            exercicio4();
        } else if (opcao == 5) {
            exercicio5();
        } else if (opcao == 6) {
            exercicio6();
        } else if (opcao == 7) {
            exercicio7();
        } else if (opcao == 8) {
            executarTodos();
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n\n");
        }

    } while (opcao != 0);

    return 0;
}

/* =========================================================================
   FUNCOES DE MENU E EXECUCAO SEQUENCIAL
   ========================================================================= */
void exibirMenu(void) {
    printf("\n=========================================================\n");
    printf("          LISTA 05 - MENU DE EXERCICIOS (C)\n");
    printf("=========================================================\n\n");
    printf("  [1] Exercicio 1 - 100 numeros (inverso e decrescente)\n");
    printf("  [2] Exercicio 2 - Notacao cientifica (A x 10^n)\n");
    printf("  [3] Exercicio 3 - Conversao para base binaria\n");
    printf("  [4] Exercicio 4 - Maior entre 10 valores (URI 1013)\n");
    printf("  [5] Exercicio 5 - 100 numeros (paridade e primalidade)\n");
    printf("  [6] Exercicio 6 - Distancia euclidiana (10 pares)\n");
    printf("  [7] Exercicio 7 - 100 numeros (ordem consecutiva)\n");
    printf("  [8] Executar TODOS os exercicios em ordem (1 ao 7)\n");
    printf("  [0] Sair\n\n");
    printf("---------------------------------------------------------\n");
}

void executarTodos(void) {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    printf("\nTodos os 7 exercicios foram concluidos!\n\n");
}

/* =========================================================================
   FUNCOES AUXILIARES (Calculos isolados)
   ========================================================================= */

/* Exercicio 4: Retorna o maior entre dois inteiros usando a formula dada */
int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

/* Exercicio 5: Retorna 1 se for par e 0 se for impar */
int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

/* Exercicio 5: Retorna 1 se for primo e 0 caso contrario usando laco */
int ehPrimo(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

/* Exercicio 6: Calcula a raiz quadrada usando laco (Metodo de Newton) */
double raizQuadrada(double numero) {
    double x = numero;
    int i;

    if (numero <= 0.0) {
        return 0.0;
    }

    for (i = 0; i < 30; i++) {
        x = 0.5 * (x + (numero / x));
    }
    return x;
}

/* Exercicio 6: Calcula a distancia euclidiana entre P1(x1,y1) e P2(x2,y2) */
double distanciaEuclidiana(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return raizQuadrada((dx * dx) + (dy * dy));
}

/* =========================================================================
   EXERCICIO 1:
   Ler 100 inteiros, imprimir na ordem inversa de leitura e depois
   ordenados do maior para o menor.
   ========================================================================= */
void exercicio1(void) {
    int vetor[TAM_100];
    int ordenado[TAM_100];
    int i, j, aux;

    printf("\n==================== EXERCICIO 1 ====================\n\n");
    printf("Digite %d numeros inteiros:\n\n", TAM_100);

    for (i = 0; i < TAM_100; i++) {
        printf("Numero [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
        ordenado[i] = vetor[i];
    }

    printf("\n-----------------------------------------------------\n");
    printf("Ordem inversa de leitura:\n\n");
    for (i = TAM_100 - 1; i >= 0; i--) {
        printf("%d\t", vetor[i]);
        if ((TAM_100 - i) % 10 == 0) {
            printf("\n");
        }
    }

    /* Ordenacao decrescente (maior para o menor) usando Bubble Sort */
    for (i = 0; i < TAM_100 - 1; i++) {
        for (j = 0; j < TAM_100 - 1 - i; j++) {
            if (ordenado[j] < ordenado[j + 1]) {
                aux = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = aux;
            }
        }
    }

    printf("\n-----------------------------------------------------\n");
    printf("Ordenados do maior para o menor:\n\n");
    for (i = 0; i < TAM_100; i++) {
        printf("%d\t", ordenado[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 2:
   Ler um double positivo e imprimir em notacao cientifica: A x 10^n
   com 1 <= A < 10 e n inteiro, usando apenas lacos de repeticao.
   ========================================================================= */
void exercicio2(void) {
    double valor, a;
    int n = 0;

    printf("\n==================== EXERCICIO 2 ====================\n\n");
    printf("Digite um valor positivo (double): ");
    scanf("%lf", &valor);

    while (valor <= 0.0) {
        printf("\nValor invalido! Digite um numero maior que zero: ");
        scanf("%lf", &valor);
    }

    a = valor;

    while (a >= 10.0) {
        a = a / 10.0;
        n++;
    }

    while (a < 1.0) {
        a = a * 10.0;
        n--;
    }

    printf("\n-----------------------------------------------------\n");
    printf("Notacao cientifica: %.4lf x 10^%d\n", a, n);
    printf("=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 3:
   Ler um numero n (positivo e n <= 64) e mostrar seu valor em binario.
   ========================================================================= */
void exercicio3(void) {
    int n, temp, i;
    int bits[10];
    int qtdBits = 0;

    printf("\n==================== EXERCICIO 3 ====================\n\n");
    printf("Digite um numero inteiro positivo (1 <= n <= 64): ");
    scanf("%d", &n);

    while (n <= 0 || n > 64) {
        printf("\nValor fora do intervalo! Digite n entre 1 e 64: ");
        scanf("%d", &n);
    }

    temp = n;

    while (temp > 0) {
        bits[qtdBits] = temp % 2;
        temp = temp / 2;
        qtdBits++;
    }

    printf("\n-----------------------------------------------------\n");
    printf("Valor de %d em binario: ", n);
    for (i = qtdBits - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 4 (URI 1013):
   Ler 10 valores e mostrar o maior seguido de "eh o maior" usando MaiorAB.
   ========================================================================= */
void exercicio4(void) {
    int i, valor;
    int maior = 0;

    printf("\n==================== EXERCICIO 4 ====================\n\n");
    printf("Digite 10 valores inteiros:\n\n");

    for (i = 0; i < TAM_10; i++) {
        printf("Valor [%d]: ", i + 1);
        scanf("%d", &valor);

        if (i == 0) {
            maior = valor;
        } else {
            maior = maiorAB(maior, valor);
        }
    }

    printf("\n-----------------------------------------------------\n");
    printf("%d eh o maior\n", maior);
    printf("=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 5:
   Vetor de 100 inteiros: verificar paridade e primalidade de cada item.
   ========================================================================= */
void exercicio5(void) {
    int vetor[TAM_100];
    int i;

    printf("\n==================== EXERCICIO 5 ====================\n\n");
    printf("Digite %d numeros inteiros:\n\n", TAM_100);

    for (i = 0; i < TAM_100; i++) {
        printf("Numero [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n-----------------------------------------------------\n");
    printf("Analise de paridade e primalidade:\n\n");

    for (i = 0; i < TAM_100; i++) {
        printf("[%d] Valor %d -> ", i + 1, vetor[i]);

        if (ehPar(vetor[i])) {
            printf("Par   | ");
        } else {
            printf("Impar | ");
        }

        if (ehPrimo(vetor[i])) {
            printf("Primo\n");
        } else {
            printf("Nao primo\n");
        }
    }
    printf("\n=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 6:
   Ler 4 vetores de 10 posicoes (x1, y1, x2, y2) e calcular a distancia
   euclidiana entre cada par de pontos P1 e P2.
   ========================================================================= */
void exercicio6(void) {
    double x1[TAM_10], y1[TAM_10], x2[TAM_10], y2[TAM_10];
    double dist;
    int i;

    printf("\n==================== EXERCICIO 6 ====================\n\n");
    printf("Digite as coordenadas de %d pares de pontos P1(x1,y1) e P2(x2,y2):\n", TAM_10);

    for (i = 0; i < TAM_10; i++) {
        printf("\nPar [%d] - Ponto P1 (x1 y1): ", i + 1);
        scanf("%lf %lf", &x1[i], &y1[i]);

        printf("Par [%d] - Ponto P2 (x2 y2): ", i + 1);
        scanf("%lf %lf", &x2[i], &y2[i]);
    }

    printf("\n-----------------------------------------------------\n");
    printf("Distancias euclidianas calculadas:\n\n");

    for (i = 0; i < TAM_10; i++) {
        dist = distanciaEuclidiana(x1[i], y1[i], x2[i], y2[i]);
        printf("Par [%d] -> P1(%.2lf, %.2lf) ate P2(%.2lf, %.2lf): d = %.4lf\n",
               i + 1, x1[i], y1[i], x2[i], y2[i], dist);
    }
    printf("\n=====================================================\n\n");
}

/* =========================================================================
   EXERCICIO 7:
   Receber um vetor de 100 inteiros e mostrar os valores que estao em
   ordem consecutiva (ex: 4, 5, 6).
   ========================================================================= */
void exercicio7(void) {
    int vetor[TAM_100];
    int i;
    int encontrou = 0;

    printf("\n==================== EXERCICIO 7 ====================\n\n");
    printf("Digite %d numeros inteiros:\n\n", TAM_100);

    for (i = 0; i < TAM_100; i++) {
        printf("Numero [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n-----------------------------------------------------\n");
    printf("Valores em ordem consecutiva encontrados no vetor:\n");

    for (i = 0; i < TAM_100 - 1; i++) {
        if (vetor[i + 1] == vetor[i] + 1) {
            if (i == 0 || vetor[i] != vetor[i - 1] + 1) {
                printf("\nSequencia: %d, %d", vetor[i], vetor[i + 1]);
            } else {
                printf(", %d", vetor[i + 1]);
            }
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("\nNenhum valor em ordem consecutiva foi encontrado.\n");
    } else {
        printf("\n");
    }
    printf("\n=====================================================\n\n");
}