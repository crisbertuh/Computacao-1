#include<stdio.h>
void main()
{
  float A, G, Ra, Rg;
  float x, y;
  //---------------------------------------------
  //Lendo os valores do combustível
  printf("Digíte o preço da gasolina\n");
  scanf("%f", &A);
  printf("Digíte o preço do álcool\n");
  scanf("%f", &A);
  //Lendo o rendimento
  printf("Qual o rendimento em km/L de Gasolina?");
  scanf("%f", &Rg);
  printf("Qual o rendimento em km/L de Álcool?");
  scanf("%f", &Ra);
  //----------------------------------------------
  x=Ra/A;//$/L em alcool
  y=Rg/G;//$/L em gasolina
  if(x>y)
    printf("Abastecer com Álcool é melhor\n Preço do rendimento(R$/L):%f", x);
  else if(x<=y)
    printf("Abastecer com Gasolina é melhor\n Preço do rendimento(R$/L):%f", y);
}
