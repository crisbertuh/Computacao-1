//Cristiano Bertulino
#include <stdio.h>
int eh_bissexto(int ano);

void main()
{//------Declaração das variáveis----
  int ano;
  //-----Leitura--------------------
  printf("Qual ano vc quer verificar se é bissexto?\n");
  scanf("%d", &ano);
  eh_bissexto(ano);
 //-----------------------------
  if(eh_bissexto)
    printf("Este ano é bissexto");
  else 
    printf("Este ano não é bissexto");
}

int eh_bissexto(int ano)
{
  if((ano%4==0) && (ano%100!=0 || ano%400==0))
    ano=1;
  else 
    ano=0;
  
  return (ano);
}

