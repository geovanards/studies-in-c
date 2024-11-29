#include<stdio.h>
#include<locale.h>

/*Escreva um programa que leia 10 números inteiros, 
armazene-os em um vetor e, ao final, imprima o maior e o menor valor digitado.*/

void main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[10], i, menor, maior;
	
	for( i=0; i<10; i++ ){
		printf("\nDigite o valor: ", i);
		scanf("%d",&vet[i]);
	}
	
	
	printf("\nValores armazenados no vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
	}

	maior = menor = vet[0];

	for( i = 0; i < 10; i++ ) {
		if( vet[i] > maior) {
			maior =  vet[i];
		}
		
		if( vet[i] < menor ){
			menor = vet[i];
		}
	}
	
	printf("Maior valor: %d \n", maior);
	printf("Menor valor: %d \n", menor);
	
}
