#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHAS 4
#define COLUNAS 5
void main(void){
 setlocale(LC_ALL, "Portuguese");

    int matriz[LINHAS][COLUNAS];
    int somaLinhas[LINHAS] = {0};
    int somaTotal = 0;
    int i,j;
    
    printf("Digite os elementos da matriz 4x5:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            somaLinhas[i] += matriz[i][j];
        }
        somaTotal += somaLinhas[i];
    }

    printf("\nSoma de cada linha:\n");
    for ( i = 0; i < LINHAS; i++) {
        printf("Linha %d: %d\n", i + 1, somaLinhas[i]);
    }
    printf("Soma total da matriz: %d\n", somaTotal);

 
}

