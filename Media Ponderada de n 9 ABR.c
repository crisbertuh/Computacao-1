//Cristiano Bertulino
#include<stdio.h>

void main()
{
  int n=0, i=0;
  float x=0, a, b, c;

  printf("Digíte quantas vezes vc quer fazer uma média");
  scanf("%d/n", &n);

  while(i<=n)
  {
    printf("Digite 3 números (%d/%d) \n", n, i);
    scanf("%f %f %f", &a, &b, &c);
    x=(2*a+3*b+5*c)/3;
    printf("Média (%d/%d) é %f", n, i, x);
    
    i++;
  }
}
