#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");

	float a, b, raiz;
	
	printf("Digite o valor de a:\n");
	scanf("%f",&a);
	
	printf("Digite o valor de b:\n");
	scanf("%f",&b);
	
	
	raiz = - b / a;
	
	printf("o resultado da equação %.2f + %.2f = 0 é: %.2f\n", a, b, raiz);
	
}

