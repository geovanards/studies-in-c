#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 	float volume, r;
 	
 	printf("Digite o valor do raio do cilindro:\n");
 	scanf("%f", &r);
 	
 	
 	
 	volume = 4.0/3.0 * 3.14 * r * r * r;
 	
 	printf("O volume da esfera é: %.2f\n", volume);
}
