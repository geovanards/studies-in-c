#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 	setlocale(LC_ALL, "Portuguese");
 	

    float fahrenheit, celsius;
	
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) / 1.8;
    printf("Temperatura em Celsius: %.2f\n", celsius);

}
