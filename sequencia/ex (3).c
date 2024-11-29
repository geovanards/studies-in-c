#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
 
    float nota1, nota2, media;
    
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    
    printf("Média: %.2f\n", media);
   
}

