//Cristiano Bertulino
#include<stdio.h>

void main()
{//Declaração das variáveis
  int n, m=0;
  //------------LEITURA-------------------------------
  printf("Digíte um número\n");
  scanf("%d", &n);
  //--------------LAÇO DE REPETIÇÃO-------------------
  while(n>0)
    {
      if(n>m)//Verificando o maior número
        m=n;
      printf("Digíte um número\n");
      scanf("%d", &n);
    }
    //------------------------------------------------
    printf("O maio número que você digitou foi:%d", m);//Imprimindo o maior número
}//FIM
