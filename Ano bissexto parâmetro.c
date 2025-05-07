//Cristiano Bertulino
#include <stdio.h>
int eh_bissexto(int ano);
int a;

void main()
{//------Declaração das variáveis----
  int ano;
  //-----Leitura--------------------
  printf("Qual ano vc quer verificar se é bissexto?\n");
  scanf("%d", &ano);
  eh_bissexto(ano);
 //-----------------------------
  if(a==1)
    printf("Este ano é bissexto");
  else 
    printf("Este ano não é bissexto");
}

int eh_bissexto(int ano)
{
  if((ano%4==0) && (ano%100!=0 || ano%400==0))
    a=1;
  else 
    a=0;
  
  return (a);
}
