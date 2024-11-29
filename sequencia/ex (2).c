#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 	setlocale(LC_ALL, "Portuguese");
	 

    float base, altura, area;
    
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("Base: %.2f\n", base);
    printf("Altura: %.2f\n", altura);
    printf("Área do triângulo: %.3f\n", area);

}

