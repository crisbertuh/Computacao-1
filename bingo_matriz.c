#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define MAX_COL 100

void preenche_bingo(int matriz[N][MAX_COL], int col);

int main() {
    int col;
    int m[N][MAX_COL];

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &col);

    if (col <= 0 || col > MAX_COL) {
        printf("Número de colunas inválido.\n");
        return 1;
    }

    if (N * col > 100) {
        printf("Matriz muito grande para números únicos entre 0 e 99.\n");
        return 1;
    }

    preenche_bingo(m, col);

    printf("Valores da sua cartela de bingo preenchida:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < col; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void preenche_bingo(int matriz[N][MAX_COL], int col) {
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < col; j++) {
            int num;
            int repetido;

            do {
                num = rand() % 100;
                repetido = 0;

                // Verifica todos os elementos já preenchidos para evitar repetição
                for (int x = 0; x < i || (x == i && x <= j); x++) {
                    for (int y = 0; y < col; y++) {
                        if (x == i && y >= j) break; // não verificar posições ainda não preenchidas
                        if (matriz[x][y] == num) {
                            repetido = 1;
                            break;
                        }
                    }
                    if (repetido) break;
                }
            } while (repetido);

            matriz[i][j] = num;
        }
    }
}
