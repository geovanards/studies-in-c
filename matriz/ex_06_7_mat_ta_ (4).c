#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
 setlocale(LC_ALL, "Portuguese");

#define tam 5

    int matrizA[tam][tam];
    int matrizB[tam][tam];
    int matrizSoma[tam][tam];
    int i,j;
    
    printf("Digite os elementos da matriz A (5x5):\n");
    for (i = 0; i < tam; i++) {
        for ( j = 0; j < tam; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    printf("Digite os elementos da matriz B (5x5):\n");
    for (i = 0; i < tam; i++) {
        for ( j = 0; j < tam; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
   
    printf("Matriz resultante:\n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%d\t", matrizSoma[i][j]);
        }
        printf("\n");
    }
    
}

