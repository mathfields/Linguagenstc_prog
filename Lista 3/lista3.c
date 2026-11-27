#include <stdio.h>

#define PI 3.14159265f

float seno(float rad);
float cosseno(float rad);
float calcularINSS(float salarioBruto);
float calcularIRPF(float salarioBase);

void exibirMenu(void);
void executarTodos(void);

void exercicio5(void);
void exercicio6(void);
void exercicio7(void);
void exercicio8(void);
void exercicio9(void);

int main(void) {
    int opcao;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 5) {
            exercicio5();
        } else if (opcao == 6) {
            exercicio6();
        } else if (opcao == 7) {
            exercicio7();
        } else if (opcao == 8) {
            exercicio8();
        } else if (opcao == 9) {
            exercicio9();
        } else if (opcao == 1) {
            executarTodos();
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n\n");
        }

    } while (opcao != 0);

    return 0;
}

void exibirMenu(void) {
    printf("\n=========================================================\n");
    printf("               ATIVIDADE PRATICA - MENU (C)\n");
    printf("=========================================================\n\n");
    printf("  [5] Exercicio 05 - Terminal Infinity Cash\n");
    printf("  [6] Exercicio 06 - Operacao ENIAC - Trajetoria\n");
    printf("  [7] Exercicio 07 - Calculo de INSS\n");
    printf("  [8] Exercicio 08 - Calculo de IRPF\n");
    printf("  [9] Exercicio 09 - Emissao de Contra-cheque\n");
    printf("  [1] Executar TODOS os exercicios em ordem (05 ao 09)\n");
    printf("  [0] Sair\n\n");
    printf("---------------------------------------------------------\n");
}

void executarTodos(void) {
    exercicio5();
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    printf("\nTodos os exercicios foram concluidos!\n\n");
}

float seno(float rad) {
    float termo, soma;
    int i;

    while (rad > 2.0f * PI) {
        rad -= 2.0f * PI;
    }
    while (rad < -2.0f * PI) {
        rad += 2.0f * PI;
    }

    termo = rad;
    soma = rad;

    for (i = 1; i <= 15; i++) {
        termo = -termo * rad * rad / ((2 * i) * (2 * i + 1));
        soma += termo;
    }

    return soma;
}

float cosseno(float rad) {
    float termo, soma;
    int i;

    while (rad > 2.0f * PI) {
        rad -= 2.0f * PI;
    }
    while (rad < -2.0f * PI) {
        rad += 2.0f * PI;
    }

    termo = 1.0f;
    soma = 1.0f;

    for (i = 1; i <= 15; i++) {
        termo = -termo * rad * rad / ((2 * i - 1) * (2 * i));
        soma += termo;
    }

    return soma;
}

float calcularINSS(float salarioBruto) {
    if (salarioBruto <= 1412.00f) {
        return salarioBruto * 0.075f;
    } else if (salarioBruto <= 2666.68f) {
        return salarioBruto * 0.09f;
    } else if (salarioBruto <= 4000.03f) {
        return salarioBruto * 0.12f;
    } else if (salarioBruto <= 7786.02f) {
        return salarioBruto * 0.14f;
    } else {
        return 7786.02f * 0.14f;
    }
}

float calcularIRPF(float salarioBase) {
    float imposto = 0.0f;

    if (salarioBase <= 2259.20f) {
        imposto = 0.0f;
    } else if (salarioBase <= 2826.65f) {
        imposto = (salarioBase * 0.075f) - 169.44f;
    } else if (salarioBase <= 3751.05f) {
        imposto = (salarioBase * 0.15f) - 381.44f;
    } else if (salarioBase <= 4664.68f) {
        imposto = (salarioBase * 0.225f) - 662.77f;
    } else {
        imposto = (salarioBase * 0.275f) - 896.00f;
    }

    if (imposto < 0.0f) {
        imposto = 0.0f;
    }

    return imposto;
}

void exercicio5(void) {
    int notas[6] = {100, 50, 10, 5, 2, 1};
    int qtdNotas[6];
    int valor, restante, i;

    printf("\n==================== EXERCICIO 05 ====================\n\n");
    printf("Digite o valor inteiro para saque (R$): ");
    scanf("%d", &valor);

    while (valor <= 0) {
        printf("\nValor invalido! Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    restante = valor;

    for (i = 0; i < 6; i++) {
        qtdNotas[i] = restante / notas[i];
        restante = restante % notas[i];
    }

    printf("\n------------------------------------------------------\n");
    printf("Resumo de cedulas para R$ %d:\n\n", valor);

    for (i = 0; i < 6; i++) {
        printf("Notas de R$ %3d: %d\n", notas[i], qtdNotas[i]);
    }
    printf("\n======================================================\n\n");
}

void exercicio6(void) {
    float v0, graus, rad;
    float vx, vy, ax, ay;
    float x = 0.0f, y = 0.0f, t = 0.0f;
    float dt = 0.01f;
    float g = 9.8f;
    float k = 0.5f;

    printf("\n==================== EXERCICIO 06 ====================\n\n");
    printf("Digite a velocidade inicial v0 (m/s): ");
    scanf("%f", &v0);

    printf("Digite o angulo de lancamento (graus): ");
    scanf("%f", &graus);

    rad = graus * (PI / 180.0f);
    vx = v0 * cosseno(rad);
    vy = v0 * seno(rad);

    if (v0 > 0.0f && graus > 0.0f && graus < 180.0f) {
        do {
            ax = -k * vx;
            ay = -g - (k * vy);

            x += vx * dt;
            y += vy * dt;

            vx += ax * dt;
            vy += ay * dt;

            t += dt;
        } while (y > 0.0f);
    }

    printf("\n------------------------------------------------------\n");
    printf("Alcance Maximo: %.2f m\n", x);
    printf("Tempo de Voo:   %.2f s\n", t);
    printf("======================================================\n\n");
}

void exercicio7(void) {
    float salarioBruto, descontoINSS;

    printf("\n==================== EXERCICIO 07 ====================\n\n");
    printf("Digite o salario bruto (R$): ");
    scanf("%f", &salarioBruto);

    while (salarioBruto < 0.0f) {
        printf("\nValor invalido! Digite um salario positivo: ");
        scanf("%f", &salarioBruto);
    }

    descontoINSS = calcularINSS(salarioBruto);

    printf("\n------------------------------------------------------\n");
    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto INSS: R$ %.2f\n", descontoINSS);
    printf("======================================================\n\n");
}

void exercicio8(void) {
    float salarioBase, descontoIRPF;

    printf("\n==================== EXERCICIO 08 ====================\n\n");
    printf("Digite o salario-base (Bruto - INSS) (R$): ");
    scanf("%f", &salarioBase);

    while (salarioBase < 0.0f) {
        printf("\nValor invalido! Digite um salario-base positivo: ");
        scanf("%f", &salarioBase);
    }

    descontoIRPF = calcularIRPF(salarioBase);

    printf("\n------------------------------------------------------\n");
    printf("Salario-Base:  R$ %.2f\n", salarioBase);
    printf("Desconto IRPF: R$ %.2f\n", descontoIRPF);
    printf("======================================================\n\n");
}

void exercicio9(void) {
    float valorHora, horasMes;
    float salarioBruto, inss, salarioBase, irpf, salarioLiquido;

    printf("\n==================== EXERCICIO 09 ====================\n\n");
    printf("Digite o valor da hora trabalhada (R$): ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasMes);

    salarioBruto = horasMes * valorHora;
    inss = calcularINSS(salarioBruto);
    salarioBase = salarioBruto - inss;
    irpf = calcularIRPF(salarioBase);
    salarioLiquido = salarioBruto - inss - irpf;

    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %9.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:               R$ %9.2f\n", inss);
    printf(" (-) Desconto IRPF:               R$ %9.2f\n", irpf);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %9.2f\n", salarioLiquido);
    printf("======================================================\n\n");
}
