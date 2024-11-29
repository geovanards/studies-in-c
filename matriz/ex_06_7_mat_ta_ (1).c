#include <stdio.h>
#include <locale.h>
#define L 4
#define C 5

void main(void){
 setlocale(LC_ALL, "Portuguese");
    int matriz[L][C];
    float mediaLinhas[L] = {0};
    int i,j;
    
    printf("Digite os elementos da matriz 4x5:\n");
    for (i = 0; i < L; i++) {
        for ( j = 0; j < C; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for ( i = 0; i < L; i++) {
        int soma = 0;
        for ( j = 0; j < C; j++) {
            soma += matriz[i][j];
        }
        mediaLinhas[i] = soma / (float)C;
    }

    printf("\nMédia aritmética de cada l:\n");
    for ( i = 0; i < L; i++) {
        printf("l %d: %.2f\n", i + 1, mediaLinhas[i]);
    }

    return 0;
}

