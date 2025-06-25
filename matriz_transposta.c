\\Cristiano Bertulino
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5

int main(){
    int m[TAM][TAM];
    int i=0, j=0;
    
    srand(time(NULL));
    
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
        m[i][j]=rand()%101;
            
        }
    }
    
    printf("A matriz é:\n");
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    
    printf("A matriz TRANSPOSTA é:\n");
    for(j=0; j<TAM; j++){
        for(i=0; i<TAM; i++){
            printf("%3d", m[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
