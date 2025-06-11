//Cristiano Bertulino
#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[200];
    int contagem[5] = {0, 0, 0, 0, 0}; // posições para a, e, i, o, u
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        
        if (c == 'a') {
            contagem[0]++;
        } 
        else if (c == 'e') {
            contagem[1]++;
        } 
        else if (c == 'i') {
            contagem[2]++;
        } 
        else if (c == 'o') {
            contagem[3]++;
        } 
        else if (c == 'u') {
            contagem[4]++;
        }
    }

    printf("Contagem de vogais:\n");
    printf("a: %d\n", contagem[0]);
    printf("e: %d\n", contagem[1]);
    printf("i: %d\n", contagem[2]);
    printf("o: %d\n", contagem[3]);
    printf("u: %d\n", contagem[4]);

    return 0;
}
