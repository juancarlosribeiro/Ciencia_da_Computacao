#include <stdio.h>

int main(){

    int i = 1, num1;


    printf("O valor: \n");
    scanf("%d", &num1);

    printf("Numero\t Quadrado\n");

    while (i <= num1)
    {
        printf("%d\t%d\n", i, i*i);

        i++;

    }
        
    fflush(stdin);
    return 0;
}