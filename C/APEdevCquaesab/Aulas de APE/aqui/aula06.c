#include <stdio.h>

 int main(){

//     int num;

//     printf("Digite o numero: \n");
//     scanf("%i", &num);

//     if (num%2 == 0)
//     { printf("Numero par");

//     } 
//     else {
//         printf("Numero impar");
//     }    

//     return 0;
    

    // double n1,n2,n3,med;

    // printf("Digite a nota 1: \n");
    // scanf("%lf", &n1);

    // printf("Digite a nota 2: \n");
    // scanf("%lf", &n2);

    // printf("Digite a nota 3: \n");
    // scanf("%lf", &n3);
    
    // med= (n1+n2+n3)/3;

    // if (med >=7.0)
    // {
    //     printf("Aprovado! Nota: %.2lf", med);

    // }
    //  else{
    //     printf("Reprovado! Nota: %.2lf", med);

    //  }


    // return 0;

    // double num;

    // printf("Digite o numero desejado:\n");
    // scanf("%lf", &num);

    // if (num >0)
    // {
    //  printf("Numero Positivo");
    // }
    // else if(num <0){
    //     printf("Numero Negativo");
    // }
    // else{
    //     printf("Numero zero");
    // }

    // return 0;

    // int idade;

    // printf("Digite sua idade:\n");
    // scanf("%i", &idade);

    // if (idade >0 && idade<=12)
    // {
    //     printf("Crianca");
    // }
    // else if (idade >13 && idade<=19)
    // {
    //     printf("Adolescente");
    // }
    // else if (idade>20 && idade<=59)
    // {
    //     printf("Adulto");
    // }
    
    // else if(idade >60){
    //     printf("Idoso");
    // }
    // else{
    //     printf("Erro!");

    // }
    
    // return 0;

    double saldo, valor, sdft;

    printf("Digite o seu saldo: \n");
    scanf("%lf", &saldo);
    printf("Digite o valor desejado para o saque: \n");
    scanf("%lf", &valor);

    sdft= saldo-valor;

    if (saldo >= valor)
    {
        printf("Saque realizado\n1Valor restante %.2lf", sdft);
    }
    else{
        printf("Saldo Insuficiente");
    }





}