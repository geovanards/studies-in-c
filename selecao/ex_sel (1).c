#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"Portuguese");

	int idade,dia,mes,ano;
	
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o dia que você nasceu:\n");
	scanf("%d",&dia );
	
	printf("Digite o mês que você nasceu:\n");
	scanf("%d", &mes);
	
	printf("Digite o ano que você nasceu:\n");
	scanf("%d", &ano);
	
	printf("%d %d %d",dia, mes, ano);
	
	if(idade >= 16){
		printf("\nVocê já pode votar!");
	}
	
	else{
		printf("\nVocê não pode votar!");
	}

}
