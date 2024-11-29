#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
	int compra;
	int venda;
	
	printf("Digite o valor de compra:\n");
	scanf("%d", &compra);
	
	printf("Digite o valor da venda:\n");
	scanf("%d", &venda);
	
	if (compra >= 1000 && venda >= 1200){
		printf("Teve lucro!");
	}
	
	else if (compra >= 1200 && venda >= 1000){
		printf("Teve prejuízo!");
	}
	
	else if (compra >= 1000 && venda >= 1000){
		printf("Os valores são iguais!");
	}
	
}
