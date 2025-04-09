#include<stdio.h>

void main()
{
    float media=0, n1, n2, n3;
    int pres=0, erro=0;

  //Leitura das notas.
  printf("Digite as 3 notas do aluno\n");
  scanf("%f %f %f", &n1, &n2, &n3);

  //Se as notas forem maior que 10.0.
  if((n1>10.0) || (n2>10.0) || (n3>10.0))
  {  
    printf("ERRO!! Digite 3 números menores que 10.0\n");
    erro=1;
  }

  //Leitura da presença.
  if(erro==0)
  {  
      printf("Digite a presença do aluno em valor de 0 a 100\n");
      scanf("%d", &pres);

      //Se a presença for maior que 10.0.
  if(pres>100)
  {  
    printf("ERRO!! Digite um numero menor que 100.0\n");
    erro=1;
  }
  //Se a presença for insuficiente.
  if(pres<=50)
  {
    printf("Aluno reprovado direto!\n");
    erro=1;
  }
  }
  
  //Se não houver nenhum erro, faça os cáculos e imprima os valores.
  if(erro==0) 
  {
    media=(n1+n2+n3)/3.0;
    
    if((media>=8.0) && (pres>=75))
      printf("Aprovado com Distinção! \nSua Média é: %f \nSua presença é: %d ", media, pres);
    else if( (media<=7.50) && (media>=6.0) && (pres>=75))
      printf("Aprovado Direto \nSua Média é: %f \nSua presença é: %d ", media, pres);
    else if( ((media<=6.0) && (media>=4.0) && (pres<=75)) || ((media>=6.0) && (pres<=75)) || ((media>=4.0) && (pres<=75)) )
      printf("Vai para Final \nSua Média é: %f \nSua presença é: %d ", media, pres);
    else if((media<=4.0))
      printf("Reprovado Direto \nSua Média é: %f \nSua presença é: %d ", media, pres);
  }
  
}

