#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
int x, y, soma, sub,multi, divi;
	
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	
	printf("Digite o valor de y: \n");
	scanf("%d", &y);
	
	soma = x + y ;
	printf("a soma é: %d", soma);
	
	sub = x - y;
	prinf("a subtração é: %d", sub);
	
	
 }
