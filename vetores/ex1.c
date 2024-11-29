#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	int vet[4]; //posicoes de 0 ate 3
	int i, media=0, soma=0;
	
	
	for( i=0; i<4; i++){
		printf("Digite um valor para a posição %d: \n", i, vet[i]);
		scanf("%d", &vet[i]);
	}	
	
	for( i=0; i<4; i++){
		soma+= vet[i];
	}
	media = soma /4;
	
	for( i=0; i<4; i++){
		printf("Valor da posicao é %d: %d \n", i, vet[i]);
	}
	
	printf("\n\nSoma: %d Media: %d\n",soma,media);
}
