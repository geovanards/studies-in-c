#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
	
	float area,r, altura;
	
	printf("Digite o valor do raio:\n");
	scanf("%f", &r);
	
	printf("Digite a altura do cilindro:\n");
	scanf("%f",&altura);
	
	area = 2 * 3.14  * r * altura;
	
	printf("O valor de %.2f",area);
	
  }
