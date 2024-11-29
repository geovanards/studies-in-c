/*Escreva um programa que leia 5 notas de um aluno, 
calcule a soma das notas e a media, e depois informe 
se o aluno esta aprovado ou reprovado com base na media 
(aprovado se a media for maior ou igual a 7).*/

#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	
	float  media;
	int nota[5], i, soma=0;
	
	for( i=0; i<5; i++){
		printf("Digite a nota %d do aluno: \n",i, nota[i]);
		scanf("%d", &nota[i]);
	}
	
	for( i=0; i<5; i++){
	soma += nota[i];
	}
	
	media = soma / 5.0;
	
	printf("\n\nA soma do aluno é: %d \nA média do aluno é: %.2f", soma, media);
	
	if(media >= 7.0){
		printf("\nAprovado!\n");
	}
	else{
		printf("\nReprovado!\n");
	}
}
