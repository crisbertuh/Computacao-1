//Cristiano Bertulino
#include<stdio.h>

void main()
{//Declaraçao das variáveis
  int n=0, i=0;
  float x=0, a, b, c;
//------------------------LEITURA-------------------------
  printf("Digíte quantas vezes vc quer fazer uma média");
  scanf("%d/n", &n);
//------------------------REPETIÇÃO-----------------------
  while(i<n)
  {
    printf("Digite 3 números (%d/%d) \n", n, (i+1));
    scanf("%f %f %f", &a, &b, &c);
    x=(2*a+3*b+5*c)/3;//Conta
    printf("Média (%d/%d) é %f \n", n, (i+1), x);
    
    i++;
  }//FIM.
}
