#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
	int a , b;
	
	printf("Digite o valor de a: \n");
	scanf("%d", &a);
	
	printf("Digite o valor de b: \n");
	scanf("%d", &b);
	
	printf("Antes de trocar o valor de a e de b: %d e %d\n", a, b );
	printf("Depois de trocar o valor de b: %d e %d\n", b, a);
}
