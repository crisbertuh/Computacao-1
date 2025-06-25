\\Cristiano Bertulino
#include<stdio.h>
#include<strings.h>

#define N 200
    
int main(){
    char frase_1[N];
    char frase_2[N];
    
    printf("Escreva a primeira frase");
    fgets(frase_1, N, stdin);
    printf("\n");
    printf("Escreva a segunda frase");
    fgets(frase_2, N, stdin);
    printf("\n");
    strcat(frase_1, frase_2);
    puts(frase_1);
    
    return 0;
}    
