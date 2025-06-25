//Cristiano bertulino
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_COL 100  // Define um máximo para colunas

void preenche_bingo(int m[][MAX_COL], int lin, int col);
void imprime_matriz(int m[][MAX_COL], int lin, int col);

int main(){
    int lin, col;

    printf("Quantas linhas deseja ter no bingo?\n");
    scanf("%d", &lin);
    printf("Quantas colunas deseja ter no bingo?\n");
    scanf("%d", &col);

    if (col > MAX_COL) {
        printf("Número máximo de colunas é %d\n", MAX_COL);
        return 1;
    }

    int m[lin][MAX_COL];  // Cria matriz com linhas definidas e colunas fixas MAX_COL

    preenche_bingo(m, lin, col);
    imprime_matriz(m, lin, col);

    return 0;
}

void preenche_bingo(int m[][MAX_COL], int lin, int col){
    int num, repetido, x, y;
    srand(time(NULL));

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            do {
                num = rand() % 100;
                repetido = 0;

                for(x=0; x<i || (x==i && x<j); x++){
                    for(y=0; y<col; y++){
                        if(x==i && y>=j) break;
                        if(m[x][y] == num){
                            repetido = 1;
                            break;
                        }
                    }
                    if(repetido) break;
                }
            } while(repetido == 1);

            m[i][j] = num;
        }
    }

    printf("Cartela de bingo sorteada!\n");
}

void imprime_matriz(int m[][MAX_COL], int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}


























