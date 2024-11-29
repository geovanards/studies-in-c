#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
setlocale(LC_ALL, "Portuguese");

	float n1;
	float n2;
	float media;
	float peso1;
	float peso2;
	
 
	printf("Digite sua primeira nota:\n");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota:\n");
	scanf("%f", &n2);
	
	printf("Digite o peso da nota 1:\n");
	scanf("%f", &peso1);
	
	printf("Digite o peso da nota 2:\n");
	scanf("%f", &peso2);
	
	media = ( (peso1 * n1)+(peso2 * n2)) / (peso1 + peso2);
	
	printf("Sua média é:%.2f\n", media);
	
	if(media >= 5){
		printf("Você foi aprovado!");
	}
	
	else{
		printf("Você foi reprovado!");
	}
}
