//Cristiano Bertulino
#include<stdio.h>
void main()
{
  int C;
  int conta;
//---------------------------------------------
  printf("Digite o consumo de água em m³.\n");
  scanf("%d", &C);
//---------------------------------------------
  if(C<=10)
    conta=7;
  else if(C>=11 && C<=30)
    conta=7+(C-10);
  else if(C>=31 && C<=100)
    conta=27+2*(C-30);
  else if(C>=101)
    conta=167+5*(C-100);

  printf("A conta de água deu:%d", conta);
}
