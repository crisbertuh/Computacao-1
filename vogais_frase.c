//Cristiano Bertulino
#include <stdio.h>
#include <string.h>

#define N 200

int main() {
    char frase[N];
    int contagem[5] = {0, 0, 0, 0, 0};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int i = 0;
    char let;

    printf("Escreva uma frase para ser analisada as vogais.\n");
    fgets(frase, N, stdin);

    for(i = 0; frase[i] != '\0'; i++) {
        let = frase[i];

        if(let == 'a' || let == 'A')
            contagem[0]++;
        if(let == 'e' || let == 'E')
            contagem[1]++;
        if(let == 'i' || let == 'I')
            contagem[2]++;
        if(let == 'o' || let == 'O')
            contagem[3]++;
        if(let == 'u' || let == 'U')
            contagem[4]++;
    }

    for(i=0; i<5; i++){
        printf("%c", vogais[i]);
        for(int j=0; j<contagem[i]; j++){
            printf("*");
        }
        printf("(%d)\n", contagem[i]);
    }

    return 0;
}
