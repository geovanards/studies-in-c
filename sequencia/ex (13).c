#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
	float x,y,z,soma, media;
	
	printf("Digite o valor de x: \n");
	scanf("%f", &x);
	
	printf("Digite o valor de y: \n");
	scanf("%f", &y);
	
	printf("Digite o valor de z: \n");
	scanf("%f", &z);
	
	soma = x , y, z;
	
	media = soma / 3;
	
	printf("A média é %.2f", media);
}
