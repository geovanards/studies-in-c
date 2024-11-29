#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
 	float peso;
 	float altura;
 	char sexo;
 	
 	
 	printf("Digite seu sexo, F para feminino e M para masculino:\n ");
 	scanf("%c", &sexo);
 	
 	printf("Digite sua altura:\n");
 	scanf("%f", &altura);

 	if ( sexo == 'M')
	 peso = ( 72.70 * altura) - 58.0;

	 
	 if ( sexo == 'F')
	 peso = ( 62.1 * altura) - 44.70;
 	
 	printf("Seu peso ideal é %.2f\n", peso);
	 
	 }
