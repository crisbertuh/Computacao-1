//Cristiano Bertulino
#include <stdio.h>
int arredonda(float x);
float a;
void main()
{
  float m;
  printf("Digite um valor para ser arredondado\n");
  scanf("%f", &m);
  arredonda(m);
  //---------------
  printf("O valor arredondado é:%f", a);
}

int arredonda(float x)
{
  int i, dec;
  i=x;
  dec=10*(x-i);
  if(dec<5)
    a=(10-dec)/10+x;
  else 
    a=(dec-10)/10+x;
  return(a);
}
