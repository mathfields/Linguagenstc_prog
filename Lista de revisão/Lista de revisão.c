#include <stdio.h>

/* =========================================================================
   PROTOTIPOS DAS FUNCOES AUXILIARES E DOS EXERCICIOS
   ========================================================================= */
void limparBuffer(void);
int validarCPF(int cpf[]);
double celsiusParaFahrenheit(double c);
double fahrenheitParaCelsius(double f);
double calcularMedia(double notas[], int qtd);

void exibirMenu(void);
void executarTodos(void);

void exercicio1(void);
void exercicio2(void);
void exercicio3(void);

/* =========================================================================
   FUNCAO PRINCIPAL: Menu interativo com laco de repeticao
   ========================================================================= */
int main(void) {
    int opcao;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBuffer();
        printf("\n");

        if (opcao == 1) {
            exercicio1();
        } else if (opcao == 2) {
            exercicio2();
        } else if (opcao == 3) {
            exercicio3();
        } else if (opcao == 4) {
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
   FUNCOES DE MENU E UTILIDADES
   ========================================================================= */
void exibirMenu(void) {
    printf("\n=========================================================\n");
    printf("               ATIVIDADE PRATICA - MENU (C)\n");
    printf("=========================================================\n\n");
    printf("  [1] Exercicio 01 - Validador de CPF\n");
    printf("  [2] Exercicio 02 - Conversor Dinamico (Celsius / Fahrenheit)\n");
    printf("  [3] Exercicio 03 - Media Escolar\n");
    printf("  [4] Executar TODOS os exercicios em ordem (1 ao 3)\n");
    printf("  [0] Sair\n\n");
    printf("---------------------------------------------------------\n");
}

void executarTodos(void) {
    exercicio1();
    exercicio2();
    exercicio3();
    printf("\nTodos os 3 exercicios foram concluidos!\n\n");
}

/* Descarta caracteres restantes no buffer do teclado ate o Enter */
void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

/* =========================================================================
   FUNCOES AUXILIARES DE CALCULO E VALIDACAO
   ========================================================================= */

/* Exercicio 01: Calcula os 2 digitos verificadores e retorna 1 (valido) ou 0 (invalido) */
int validarCPF(int cpf[]) {
    int i, soma, resto, digito1, digito2;
    int todosIguais = 1;

    /* Verifica se todos os 11 digitos sao iguais (ex: 111.111.111-11) */
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            todosIguais = 0;
        }
    }
    if (todosIguais == 1) {
        return 0;
    }

    /* Calculo do 1o digito verificador (pesos de 10 a 2 nos 9 primeiros) */
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }
    resto = (soma * 10) % 11;
    if (resto == 10) {
        digito1 = 0;
    } else {
        digito1 = resto;
    }

    /* Calculo do 2o digito verificador (pesos de 11 a 2 nos 10 primeiros) */
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += cpf[i] * (11 - i);
    }
    resto = (soma * 10) % 11;
    if (resto == 10) {
        digito2 = 0;
    } else {
        digito2 = resto;
    }

    /* Confere se os digitos calculados batem com os 2 ultimos do CPF */
    if (digito1 == cpf[9] && digito2 == cpf[10]) {
        return 1;
    }
    return 0;
}

/* Exercicio 02: Converte Celsius para Fahrenheit */
double celsiusParaFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

/* Exercicio 02: Converte Fahrenheit para Celsius */
double fahrenheitParaCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

/* Exercicio 03: Calcula a media aritmetica de um vetor de notas */
double calcularMedia(double notas[], int qtd) {
    double soma = 0.0;
    int i;

    for (i = 0; i < qtd; i++) {
        soma += notas[i];
    }
    return soma / qtd;
}

/* =========================================================================
   EXERCICIO 01: Validador de CPF
   ========================================================================= */
void exercicio1(void) {
    char entrada[30];
    int cpf[11];
    int i = 0;
    int qtdDigitos = 0;

    printf("\n==================== EXERCICIO 01 ====================\n\n");
    printf("Digite o numero do CPF (apenas numeros ou com pontos/traco): ");
    fgets(entrada, sizeof(entrada), stdin);

    /* Extrai apenas os caracteres numericos para o vetor cpf */
    while (entrada[i] != '\0' && entrada[i] != '\n') {
        if (entrada[i] >= '0' && entrada[i] <= '9') {
            if (qtdDigitos < 11) {
                cpf[qtdDigitos] = entrada[i] - '0';
            }
            qtdDigitos++;
        }
        i++;
    }

    printf("\n------------------------------------------------------\n");
    if (qtdDigitos != 11) {
        printf("Resultado: CPF INVALIDO (deve conter exatamente 11 digitos).\n");
    } else if (validarCPF(cpf) == 1) {
        printf("Resultado: CPF VALIDO!\n");
    } else {
        printf("Resultado: CPF INVALIDO!\n");
    }
    printf("======================================================\n\n");
}

/* =========================================================================
   EXERCICIO 02: Conversor Dinamico de Temperatura
   ========================================================================= */
void exercicio2(void) {
    double temperatura, resultado;
    char grandeza;

    printf("\n==================== EXERCICIO 02 ====================\n\n");
    printf("Digite o valor da temperatura: ");
    scanf("%lf", &temperatura);
    limparBuffer();

    printf("Informe a grandeza de entrada (C para Celsius / F para Fahrenheit): ");
    scanf("%c", &grandeza);
    limparBuffer();

    /* Garante que o usuario informe C ou F */
    while (grandeza != 'C' && grandeza != 'c' && grandeza != 'F' && grandeza != 'f') {
        printf("\nGrandeza invalida! Digite C ou F: ");
        scanf("%c", &grandeza);
        limparBuffer();
    }

    printf("\n------------------------------------------------------\n");
    if (grandeza == 'C' || grandeza == 'c') {
        resultado = celsiusParaFahrenheit(temperatura);
        printf("%.2lf C equivalem a %.2lf F\n", temperatura, resultado);
    } else {
        resultado = fahrenheitParaCelsius(temperatura);
        printf("%.2lf F equivalem a %.2lf C\n", temperatura, resultado);
    }
    printf("======================================================\n\n");
}

/* =========================================================================
   EXERCICIO 03: Media Escolar
   ========================================================================= */
void exercicio3(void) {
    char nome[100];
    double notas[3];
    double media, faltaParaDez;
    int i;

    printf("\n==================== EXERCICIO 03 ====================\n\n");
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    /* Remove a quebra de linha '\n' capturada pelo fgets */
    i = 0;
    while (nome[i] != '\0') {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
        i++;
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("Digite a Nota [%d] (0.0 a 10.0): ", i + 1);
        scanf("%lf", &notas[i]);
        limparBuffer();

        while (notas[i] < 0.0 || notas[i] > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0: ");
            scanf("%lf", &notas[i]);
            limparBuffer();
        }
    }

    media = calcularMedia(notas, 3);

    printf("\n------------------------------------------------------\n");
    printf("Aluno: %s\n", nome);
    printf("Media Final: %.2lf\n\n", media);

    if (media >= 7.0) {
        /* Mensagem em azul */
        printf("\033[1;34mSituacao: APROVADO\033[0m\n");
    } else if (media >= 4.0) {
        /* Mensagem em verde + quanto falta para atingir 10 */
        faltaParaDez = 10.0 - media;
        printf("\033[1;32mSituacao: EXAME (Faltam %.2lf pontos para atingir 10.0)\033[0m\n", faltaParaDez);
    } else {
        /* Mensagem em vermelho */
        printf("\033[1;31mSituacao: REPROVADO\033[0m\n");
    }

    printf("======================================================\n\n");
}