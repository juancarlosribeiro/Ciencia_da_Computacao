#include <stdio.h>

int main(){

    int var, op;
    double peso, alt, imc, vl1,vl2, sm,sub,mult,divi;


    printf("Selecione a opção desejada: \n [1] Calculo de IMC \n [2]Operacoes matematicas \n [3]Calculo de area do circulo\n [4] Celsius para Fahreint");
    scanf("%i", &var);

    switch (var)
    {
    case 1:
        printf("Selecionado calculo de imc: \n");
        printf("Digite seu peso: ");
        scanf("%lf", &peso);
        printf("Digite sua altura: ");
        scanf("%lf",&alt);

        imc= peso/(alt*alt);
        printf(" Seu IMC é de: %lf", imc);

    break;

    case 2:
        
        printf("Selecionado operacoes matematicas: \n");
        printf("Selecione a operacao desejado usando os numeros abaixo: \n [1]Soma \n [2]Subtracao \n [3] Multiplicacao \n [4]Divisao");
        scanf("%i", &op);
            
            if (op==1)
            {
                printf("Voce escolheu soma: \n");
                printf("Digite o primeiro valor: \t");
                scanf("%lf",&vl1);
                printf("Digite o segundo valor:\t");
                scanf("%lf", &vl2);

                sm=vl1+vl2;

                printf("O resultado da soma é de: %lf", &sm);

            }
            else if (op==2)
            {
                printf("Voce escolheu subtracao: \n");
                printf("Digite o primeiro valor: \t");
                scanf("%lf",&vl1);
                printf("Digite o segundo valor:\t");
                scanf("%lf", &vl2);

                sub=vl1-vl2;

                printf("O resultado da subtracao é de: %lf", &sub);
            }
            
            else if (op==3)
            {
                printf("Voce escolheu multiplicacao: \n");
                printf("Digite o primeiro valor: \t");
                scanf("%lf",&vl1);
                printf("Digite o segundo valor:\t");
                scanf("%lf", &vl2);

                mult=vl1*vl2;

                printf("O resultado da multiplicacao é de: %lf", &mult);
            }
            
            else if (op==4)
            {
                printf("Voce escolheu divisao: \n");
                printf("Digite o primeiro valor: \t");
                scanf("%lf",&vl1);
                printf("Digite o segundo valor:\t");
                scanf("%lf", &vl2);

                divi=vl1/vl2;

                printf("O resultado da divisao é de: %lf", &divi);
            }
            
            else{
                printf("Erro de usuario")
            }
    break;

    case 3:

        printf("Calculo de area do circulo: \n");


    break;

    case 4:

        printf("Selecionado operacoes matematicas: \n");


    break;    


    

    


    default:
        break;
    }



}