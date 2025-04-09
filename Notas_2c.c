#include<stdio.h>

void main()
{
    float media=0, n1, n2. n3;
    float pres=0;
    int erro=0;

  //Leitura das notas.
  printf("Digite as 3 notas do aluno\n");
  scanf("%f %f %f", &n1, n2, n3);

  //Se as notas forem maior que 10.0.
  if((n1<10.0) || (n2>10.0) || (n3>10.0))
  {  
    printf("ERRO!! Digite 3 números menores que 10.0\n");
    erro=1;
  }

  //Leitura da presença.
  printf("Digite a presença do aluno em valor de 0 a 100\n");
  scanf("%f", pres);

  //Se a presença for maior que 10.0.
  if(pres>100.0)
  {  
    printf("ERRO!! Digite um npumero menor que 100.0\n");
    erro=1;
  }
  //Se a resença for insuficiente
  if(pres<75.0)
  {
    printf("Aluno reprovado!"\n)
  }

  //Se não houver nenhum erro, faça os cáculos e imprima os valores.
  if((erro==0) && (pres<=75.0)) 
  {
    media=(n1+n2+n3)/3.0;
    
    if(media>=8.0)
      printf("Aprovado com Distinção");
    else if(media=<7.50 && media=>6.0)
      printf("Aprovado Direto");
    else if(media=<6.0 && media=>4.0)
      printf("Vai para Final");
    else if(media=<4.0)
      printf("Reprovado Direto");
  }
  
}
