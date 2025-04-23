//Cristiano Bertulino
#include<stdio.h>
#include <math.h>

void main()
{//Declaração das variaveis
  float larg, alt, tin=0, m;
  //----------------Leitura das variaveis-----------------
  printf("Informe a altura: ");
  scanf("%f\n", &alt);
  printf("Informe a largura: ");
  scanf("%f\n", &larg);
  //----------------Contas--------------------------------
  m=(alt*larg);
  printf("a quantidade de metros é: %f", m);
  tin=m/2;
  printf("A quantidade litros de tinta é: %f", ceil(tin));
}//FIM.
