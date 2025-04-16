//Cristiano Bertulino
#include<stdio.h>

void main()
{//Declaração das variaveis
  int n, x=0, v=0;
  float c;
  //----------LEITURA------------
  printf("Digite um número\n");
  scanf("%d", &n);
  //---------LAÇO DE REPETIÇÃO---
  while(n>-1000)
    {
      printf("Digite outro número maior que -1000\n");
      scanf("%d", &n);
      if(n>0)
      {
        x=n+x;
        v++;
      }
    }
  //---------FIM DO LAÇO-----
  printf("%d valores positivos\n", v);
  c=(x/v);//Conta da media
  printf("A média dos inteiros é:%.1f", c);//imprimindo
  
}//FIM.
