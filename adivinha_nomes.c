//Cristiano Bertulino
#include <stdio.h>
#include <string.h>

int main() {
    char nomes[3][101];  // 3 nomes, cada um até 100 chars + '\0'
    char entrada[101];
    int i;

    // Receber os 3 nomes iniciais
    for (i = 0; i < 3; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        // Remove o '\n' do fgets
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    // Loop para receber nomes e verificar
    while (1) {
        printf("Digite um nome para verificar: ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0';

        // Verifica se entrada é igual a algum dos 3 nomes
        int igual = 0;
        for (i = 0; i < 3; i++) {
            if (strcmp(entrada, nomes[i]) == 0) {
                igual = 1;
                break;
            }
        }

        if (igual) {
            printf("Nome encontrado! Programa será encerrado.\n");
            break;
        } else {
            printf("Nome nao encontrado. Continue tentando.\n");
        }
    }

    return 0;
}
