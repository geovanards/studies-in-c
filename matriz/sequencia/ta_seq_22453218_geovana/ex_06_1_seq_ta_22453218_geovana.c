#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
	float r, area;
	
	printf("Digite o valor do raio:\n");
	scanf("%f",&r);
	
	
	area = 3.14 + (r * r);  

    printf("O valor do raio é: %.2f\n", r);
    printf("A área do círculo é: %.3f\n", area);
	
	
}
