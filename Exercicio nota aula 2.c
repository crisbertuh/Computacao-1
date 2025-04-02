//Codigo faz media de notas
#include<stdio.h>

void main()
{
    float n1, n2, n3, m;

    printf("Digite 3 notas menores que 10.0: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1>10.0 || n2>10.0 || n3>10.0)
        printf("ERRO! \nDigite 3 numeros menores que 10.0\n");

    else{
    m=((n1+n2+n3)/3);

    if(m>8.0)
        printf("Aluno aprovado com distincao, media:\n %f", m);

    if(m>=6 && m<8.1)
        printf("Aluno aprovado direto, media:\n %f", m);

    else if(m>=4 && m<6.1)
        printf("Aluno em recuperacao final, media:\n %f", m);

    else if(m<4)
        printf("Aluno reprovado direto, media:\n %f", m);

    }
}
