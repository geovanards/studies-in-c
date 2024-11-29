#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
	int x;
	
	printf("Digite um valor:\n");
	scanf("%d",&x);
	
	if (x > 100){
		printf("O valor digitado é maior que 100!\n ", x);
	}
	else if(x == 100){
		printf("O valor digitado é igual a 100!\n", x);
		
	}
	
	else if(x < 100){
		printf("O valor digitado é menor que 100!\n", x);
	}
	
	else{
		printf("valor não reconhecido\n");
	}
}
