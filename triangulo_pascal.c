#include <stdio.h>
void main ()
{
   int linha, i, j, mat[10][10];
   printf("Digite o valor do número de linhas:");
   scanf("%d", &linha);
   
   // Garante que inicie em 0
   for (i = 0; i < linha; i++){
       for (j = 0; j < linha; j++){
           mat[i][j] = 0;
       }
   }

   // Sempre o primeiro valor da coluna é 1
   for (i = 0; i < linha; i++){
       mat[i][0] = 1;
   }

   // Fazendo a soma começando na linha e coluna 1
   for (i = 1; i < linha; i++){
       for (j = 1; j < linha; j++){
           mat[i][j] = (mat[i - 1][j]) + (mat[i - 1][j - 1]);
           //mat[i-1][j]: valor da linha acima.
           //mat[i-1][j-1]: valor da linha de cima na coluna da esquerda.
       }
   }

   // Impressão sem o 0
   for (i = 0; i < linha; i++){
       for (j = 0; j < linha; j++){
           if (mat[i][j] != 0)//vai imprimir só o que não é 0
               printf("%d ", mat[i][j]);
       }
       printf("\n");
   }

}
