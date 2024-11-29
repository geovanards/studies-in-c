#include<stdio.h>
#include <stdlib.h>
#include  <locale.h>

void main (){
	setlocale(LC_ALL,"Portuguese");
	
	int x;
		
	printf("Digite o valor de x:\n");
	scanf("%d", &x);

	
	if (x > 0){
		printf("Esse número é positivo!\n",x);
		printf("Valor digitado: %d\n",x);
		printf("Esse valor ao dobro: %d\n", x * 2);
	}
	
	else if (x < 0){
		printf("Esse número é negativo!\n",x);
		printf("Valor digitado: %d\n",x);
		printf("Esse valor ao triplo: %d\n",x * 3);
	}
	
	else if ( x == 0){
		printf("Esse número é nulo!\n",x);
		printf("Valor digitado: %d\n",x);
		
	}
	
	printf("Você digitou: %d", x);
	
}
