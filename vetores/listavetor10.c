#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	char palavra[100];
	int i, tamanho;
	
	printf("Digite uma palavra:\n");
	scanf("%s", palavra);
	
	tamanho = strlen(palavra);
	
	printf("A palavra invertida é: \n");
	
	for( i=tamanho-1; i>= 0; i--){
		printf("%c", palavra[i]);
	}
	printf("\n");	
}
