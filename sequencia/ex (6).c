#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
  
  float	comprimento, r;
  
  	printf("Digite o valor da circuferência:\n");
	scanf("%f", &r);
	
	
	comprimento = 2 * (3.14 * r);
	  
	printf("O valor do raio é: %.2f\n", r);
    printf("A área do círcuferência é: %.3f\n",comprimento );
	
}
