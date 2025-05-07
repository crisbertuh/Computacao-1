//Cristiano Bertulino
#include <stdio.h>
float arredonda(float x);
void main()
{
  float m;
  printf("Digite um valor para ser arredondado\n");
  scanf("%f", &m);
  arredonda(m);
  //---------------
  printf("O valor arredondado é:%f", arredonda(m));
}

float arredonda(float x)
{
  int i, dec;
  i=x;
  dec=10*(x-i);
  if(dec<5)
    x=(10-dec)/10+x;
  else 
    x=(dec-10)/10+x;
  return x;
}
