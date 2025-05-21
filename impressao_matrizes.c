//Cristiano Bertulino

#include <stdio.h>
#include <time.h>

#define COLUNA 5
#define LINHA 5

void main()
{
    int matriz[LINHA] [COLUNA];
    int i, j, r;
    
    srand(time(NULL));
    //Sorteia os números
    for(i=0; i<LINHA; i++){
        for(j=0; j<COLUNA; j++){
            r=rand()%11;
            printf("%d", matriz[i] [j]);
            matriz[i][j]=r;
        }
    }
    
    //Imprime a matriz
    printf("Matriz com valores aleatorios:\n");
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }
    
}
