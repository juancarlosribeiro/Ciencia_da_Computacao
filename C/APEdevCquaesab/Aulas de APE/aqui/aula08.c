#include <stdio.h>

int main(){

    double n1,n2;
    char op;

    printf("Digite o primeiro numero: \n");
    scanf("%lf", &n1);

    printf("Digite o operador desejado. EX: (+-*/) \n");
    scanf(" %c", &op);

    printf("Digite o segundo numero: \n");
    scanf("%lf", &n2);

    switch (op)
    {
    case '+':
        printf("Soma: %.2lf", n1+n2);
        break;
    
    case '-':
        printf("Subtracao: %.2lf", n1-n2);
        break;

    case '*':
        printf("Multiplicacao: %.2lf", n1*n2);
        break;

    case '/':
        if (n2 == 0)
        {
           printf("A gente nao divide por zero arrombado! \n");
           break;
        }
        else{
        printf("Divisao: %.2lf", n1/n2);
        break;}

    default:
        printf("Erro fudido!");
        break;
    }
}