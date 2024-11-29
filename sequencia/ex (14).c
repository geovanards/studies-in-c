#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 	setlocale(LC_ALL, "Portuguese");
 	
	int x, y, soma, sub,mult,divi;
	
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	
	printf("Digite o valor de y: \n");
	scanf("%d", &y);
	
	soma = x + y ;
	printf("\nAa soma é: %d", soma);
	
	sub = x - y;
	printf("\nA subtração é: %d\n", sub);
	
	mult = x * y;
	printf("\nA multiplicação: %d\n",mult);
	
}
