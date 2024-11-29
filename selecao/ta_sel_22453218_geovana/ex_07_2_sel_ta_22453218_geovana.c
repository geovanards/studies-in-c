#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
setlocale(LC_ALL, "Portuguese");

	int n1, n2, media;
 
	printf("Digite sua primeira nota:\n");
	scanf("%d", &n1);
	
	printf("Digite sua segunda nota:\n");
	scanf("%d", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("Sua média é:%d\n", media);
	
	if(media >= 5){
		printf("Você foi aprovado!");
	}
	
	else{
		printf("Você foi reprovado!");
	}
}
