//Cristiano Bertulino
#include<stdio.h>

void main()
{//Declaração das variaveis
  int n, v=0;
  float c, x=0;
  //----------LEITURA---------------------------------
  printf("Digite um número: ");
  scanf("%d", &n);
  /*if(n>0)
    v=1;*/
  //---------LAÇO DE REPETIÇÃO------------------------
  while(n>-1000)
    {
      if(n>0)//Se n for positivo
      {
        x=n+x;//Faz a soma antes da média 
        v++;//Somando qtdd de positivos
      }
      printf("Digite outro número maior que -1000: ");
      scanf("%d", &n);
    }
  //---------FIM DO LAÇO------------------------------
  printf("%d valores positivos\n", v);//Imprimindo valores positivos
  c=(x/v);//Conta da media
  printf("A média dos inteiros é:%.1f", c);//Imprimindo media
  
}//FIM.
