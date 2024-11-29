#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
	float pes, metros;
	
	printf("Digite o valor em pés: \n");
	scanf("%f", &pes);
		
	metros = pes * 0.3048;
	
	printf("%.2f em metros é %.2f",pes, metros);
	
}
