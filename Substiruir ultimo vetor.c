//Cristiano Bertulino
#include <stdio.h>

int vetor (int tam);

void main()
{
    int tam;
    
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tam);
    
    vetor(tam);
    
    
}

int vetor(int tam)
{
    int vec[tam];
    int sorte;
    
    srand(time(NULL));
     
    for(int i=0; i<tam; i++)
    {
        vec[i] = 1+rand() % 100; 
        printf("Os valores do vetor são:[%d] = %d\n", i, vec[i]);
    }
    
    printf("Sorteie um número para substituir o último valor do vetor\n");
    scanf("%d", &sorte);
    
    for(int j=0; j<tam; j++)
    {
        if(sorte==vec[j])
        {
            printf("Este número já tem, digite outro\n");
            scanf("%d", &sorte);
            j=0;
        }
        else if(tam-j==1)
        {
            vec[j]=sorte;
            printf("substituindo o último valor: %d\n", sorte);
        }
    }
}
