#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[4];
	
	for( i=0; i<4; i++){
		printf("Digite valores para armazenar: \n", i);
		scanf("%d", &vet[i]);
	}
	
	for( i=0; i<4; i++ ){
		printf("vet[%d] = %d\n", i, vet[i]);
		
	}
}

