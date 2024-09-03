//Crie um programa em C que solicita ao usuário inserir 6 notas em numeros inteiros, calcula a média dessas notas e imprime a média, com o resultado da soma das notas faça a soma de todos os números pares compreendidos na soma e imprima na tela, e faça o mesmo para os números impares e imprima na tela deve-se usar a estrutura de repetição for.//

// 462 pares 441 impares

#include <stdio.h>
#include <math.h>

int main(){
    
    int n1,n2,n3,n4,n5,n6, i;
    int soma, media, soma2, soma3;

    printf("Digite a primeira nota: \n");
    scanf("%i", &n1);
    
    printf("Digite a segunda nota: \n");
    scanf("%i", &n2);
    
    printf("Digite a terceira nota: \n");
    scanf("%i", &n3);
    
    printf("Digite a quarta nota: \n");
    scanf("%i", &n4);
    
    printf("Digite a quinta nota: \n");
    scanf("%i", &n5);
    
    printf("Digite a sexta nota: \n");
    scanf("%i", &n6);

    soma=n1+n2+n3+n4+n5+n6;
    media= soma/6;

    printf("A media foi de: %i \n",media);
    printf("Soma: %i \n", soma);

        for (i % 2==0, i = 1; i <= soma; i++)
        {
            soma2= i+i;
            printf("\n %i, %i,", i, soma2);
        }
        for (i = 1; i <= soma; i++)
        {
         printf("Soma dos impares:\t %i", i);
        }
        
        
   
    
        



}