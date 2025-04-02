//EXERCICIO HORARIO AULA 2 ABR 25
#include<stdio.h>

int main()
{
    int h;
    float m, s;

    printf("Digite hora, minuto e segundo \n");
    scanf("%d %f %f", &h, &m, &s);

    //Se hora for maior que 1 e minuto maior que 15
    if(h>1 && m >15)
    {
        s= (h*3600)+(m*60)+s;
        printf("Quantidade de segundos: %f\n", s);
    }

    //Caso o contrário
    else
    {
        m=(h*60)+(s/60)+m;
        printf("Quantidade de minutos: %f\n", m);
    }

    return 0;
}
