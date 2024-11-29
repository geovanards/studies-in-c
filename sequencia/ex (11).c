#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 

	float a, b, soma, subtracao;
	
	printf("Digite o valor de a:\n");
	scanf("%f",&a);
	
	printf("Digite o valor de b:\n");
	scanf("%f",&b);
	
	soma = a + b;
	subtracao = a - b;
	
	printf("A soma total de %.2f + %.2f é igual a %2.f\n", a, b,soma);
	printf("A subtracao total de %.2f + %.2f é igual a %2.f\n", a, b,subtracao);
}
