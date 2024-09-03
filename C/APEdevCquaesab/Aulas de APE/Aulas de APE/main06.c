#include <stdio.h>
#include<locale.h>

int main(){


// double n1,n2;
// char op;

// printf("Digite o primeiro numero: \n");
// scanf("%lf", &n1);

// printf("Digite o operador a ser usado (Exemplo, + - * / ): \n");
// scanf(" %c", &op);

// printf("Digite o segundo numero: \n");
// scanf("%lf", &n2);

// if (op == '+')
// {
//  printf("O resultado da soma e: %.2lf", n1 + n2);   
// }
// else if (op == '/')
// {
//     printf("O resultado da divisao e: %.2lf", n1/n2);
// }
// else{
// printf("Erro");
// }lse if (op == '-')
// {
//     printf("O resultado da subtracao e: %.2lf", n1-n2);

// }
// else if (op == '*')
// {
//     printf("O resultado da multiplicacao e: %.2lf", n1*n2);
// }

double peso, alt, imc;

printf("Digite seu peso: \n");
scanf("%lf", &peso);
printf("Digite sua altura: \n");
scanf("%lf", &alt);

imc= peso/(alt*alt);

if (imc < 17)
{
    printf("Muito abaixo do peso");
}
else if (imc >17 && imc<= 18.49)
{
    printf("Abaixo do peso");
}
else if (imc >=18.50 && imc<=24.99)
{
    printf("Peso normal");
}
else if (imc >=25 && imc<=29.99)
{
    printf("Acima do peso");
}
else if (imc >=30 && imc<= 34.99)
{
    printf("Obesidade 1");
}
else if (imc >=35 && imc<=39.99)
{
    printf("Obesidade 2 (severa)");
}
else if (imc >40)
{
    printf("Obesidade Morbida");
}
else{
    printf("Erro");
}

}