#include <stdio.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");

#define L 4
#define C 5

    int matriz[L][C];
    int somaLinhas[L] = {0};
    int maiorSoma = 0;
    int linhaMaiorSoma = 0;
    int i,j;
    
    printf("Digite os elementos da matriz 4x5:\n");
    for ( i = 0; i < L; i++) {
        for ( j = 0; j < C; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for ( i = 0; i < L; i++) {
        int soma = 0;
        for (j = 0; j < C; j++) {
            soma += matriz[i][j];
        }
        somaLinhas[i] = soma;

        if (soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaiorSoma = i;
        }
    }

    printf("\nMaior soma encontrada: %d, na linha %d\n", maiorSoma, linhaMaiorSoma + 1);

}

