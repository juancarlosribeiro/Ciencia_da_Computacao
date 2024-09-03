#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/* double quadrado, valor, cubo;
	
	printf("Digite o valor: \n");
	scanf("%lf", &valor);
	
	quadrado= pow(valor, 2);
	
	cubo= pow(valor, 3);
	
	printf("Quadrado: %.2lf , Cubo: %.2lf", quadrado, cubo);*/
	
	
	
	
	/* double aplicacao, juros, resultado;
	int meses;
	
	printf("Digite o valor aplicado: \n");
	scanf("%lf", &aplicacao);
	
	printf("Digite o percentual de juros: \n");
	scanf("%lf", &juros);
	
	printf("Digite os meses que o dinheiro ficará guardado na aplicação: \n");
	scanf("%i", &meses);
	
	resultado = aplicacao *(1+juros/100)*meses;
	
	printf("%.2lf", resultado);*/
	
	
	
	/*double valor, resultado;
	
	printf("Insira o valor: \n");
	scanf("%lf", &valor);
	
	resultado = sqrt(valor);
	 
	printf("%.2lf", resultado);*/
	
	
	
	
	/*double perimetro, area, valor1, valor2;
	
	printf("Digite o primeiro valor: \n");
	scanf("%lf", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%lf", &valor2);
	
	area= valor1 * valor2;
	
	perimetro= valor1 *2 + valor2*2;
	
	printf("%.2lf, %.2lf", area, perimetro);*/
	
	
	/*int a, b ,c;
	double delta, bask1, bask2;
	
 
	printf("Digite o valor de a: \n");
	scanf("%i", &a);
	printf("Digite o valor de b \n");
	scanf("%i", &b);
	printf("Digite o valor de c \n");
	scanf("%i", &c);
	
	delta= pow(b,2) - 4*a*c;
	bask1=  -b + sqrt(delta)/ 2 *a;
	bask2=  -b - sqrt(delta)/ 2 *a;
	
	printf("%lf, %lf", bask1, bask2);*/
	
	
	/*int hora, minuto, conversao, rsfim, faltahora;
	
	printf("Digite a hora: \n");
	scanf("%i", &hora);
	
	printf("Digite os minutos: \n");
	scanf("%i", &minuto);
	
	conversao= hora*60;
	
	rsfim= conversao+minuto;
	
	faltahora= 1440-rsfim;
	
	printf("Faltam %i minutos para o fim do dia.", faltahora);*/
	
	
	double x, y,x2 , y2, formula;
	
	printf("Digite a coordenada x: \n");
	scanf("%i", &x);
	
	printf("Digite a coordenada y: \n");
	scanf("%i", &y);

	printf("Digite a coordenada x2: \n");
	scanf("%i", &x2);
	
	printf("Digite a coordenada y2: \n");
	scanf("%i", &y2);

	formula= sqrt(x2-x)+(y2-y);
	
	printf("%lf", formula);
	
}
