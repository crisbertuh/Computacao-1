//Cristiano Bertulino
#include<stdio.h>
void main()
{//Declaraçao das variáveis
  int n, x, i=0;
//----------LEITURA----------------
  printf("Digite um número inteiro");
  scanf("%d", &n);
//----------CONTA------------------
  while(i<=100)
    {
      x=i%n;
      if(x==2)
        printf("Números da saída:%d\n", i);
      i++;
    }
}
