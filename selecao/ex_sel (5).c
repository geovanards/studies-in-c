#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
 	int x;
 	
 	printf("Digite o valor de x:\n");
	scanf("%d", &x);
	
	if ((x % 2) == 0){
	
	printf("é par!");
	
	
	}
	
	else {
	printf("é ímpar!");
	
	}
	
 }
