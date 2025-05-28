#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

void escolha_0(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS]);
void escolha_2(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]);
void escolha_3(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]);
void escolha_4(int m1[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS], int constante);
void imprimir_matriz(int m[LINHAS][COLUNAS]);

int main() {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int resultado[LINHAS][COLUNAS];
    int seleciona, desejo = 1;
    int constante;

    while (desejo == 1) {
        printf("\nEscolha uma das opções:\n");
        printf("0 - Preencher 2 matrizes 10x10 com valores aleatórios\n");
        printf("1 - Imprimir as duas matrizes\n");
        printf("2 - Somar as matrizes\n");
        printf("3 - Subtrair matriz1 da matriz2\n");
        printf("4 - Multiplicar matriz1 por uma constante\n");
        printf("Sua escolha: ");
        scanf("%d", &seleciona);

        if (seleciona < 0 || seleciona > 4) {
            printf("ERRO: SELEÇÃO INVÁLIDA.\n");
            return 1;
        }

        if (seleciona == 0) {
            escolha_0(matriz1, matriz2);
            printf("Matrizes preenchidas com valores aleatórios.\n");
        } 
        else if (seleciona == 1) {
            printf("\nMatriz 1:\n");
            imprimir_matriz(matriz1);
            printf("\nMatriz 2:\n");
            imprimir_matriz(matriz2);
        } 
        else if (seleciona == 2) {
            escolha_2(matriz1, matriz2, resultado);
            printf("\nSoma das Matrizes:\n");
            imprimir_matriz(resultado);
        } 
        else if (seleciona == 3) {
            escolha_3(matriz1, matriz2, resultado);
            printf("\nSubtração (Matriz2 - Matriz1):\n");
            imprimir_matriz(resultado);
        } 
        else if (seleciona == 4) {
            printf("Digite uma constante para multiplicar a matriz 1: ");
            scanf("%d", &constante);
            escolha_4(matriz1, resultado, constante);
            printf("\nMatriz 1 multiplicada por %d:\n", constante);
            imprimir_matriz(resultado);
        }

        printf("\nDeseja realizar outro comando? (1 para sim, 0 para não): ");
        scanf("%d", &desejo);
    }

    return 0;
}

void escolha_0(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS]) {
    srand(time(NULL));
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            m1[i][j] = rand() % 101;
            m2[i][j] = rand() % 101;
        }
    }
}

void escolha_2(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void escolha_3(int m1[LINHAS][COLUNAS], int m2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = m2[i][j] - m1[i][j];
        }
    }
}

void escolha_4(int m1[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS], int constante) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = m1[i][j] * constante;
        }
    }
}

void imprimir_matriz(int m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}
