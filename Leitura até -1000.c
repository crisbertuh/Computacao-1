//Cristiano Bertulino
#include<stdio.h>

void main()
{//Declaração das variaveis
  int n, x=0, v=0;
  float c;
  //----------LEITURA---------------------------------
  printf("Digite um número\n");
  scanf("%d", &n);
  //---------LAÇO DE REPETIÇÃO------------------------
  while(n>-1000)
    {
      if(n>0)//Se n for positivo
      {
        x=n+x;//Faz a soma antes da média 
        v++;//Somando qtdd de positivos
      }
      printf("Digite outro número maior que -1000\n");
      scanf("%d", &n);
    }
  //---------FIM DO LAÇO------------------------------
  printf("%d valores positivos\n", v);//Imprimindo valores positivos
  c=(x/v);//Conta da media
  printf("A média dos inteiros é:%.1f", c);//Imprimindo media
  
}//FIM.
