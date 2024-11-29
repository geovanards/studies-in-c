//questão 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
	
	int a[3][4];
	int i,j, k;
	
	for ( i=0; i<3; i++ ) {
		for ( j=0; j<4; j++ ) {
			printf("Selecione o um valor para %d e %d\n", i, j);
			
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i=0; i<3; i++) {
		for ( j=0; j<4; j++ ) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

//questão 2
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void){
 setlocale(LC_ALL, "Portuguese");
	
	int a[3][4];
	int i, j;
	
	for ( i=0; i<4; i++ ) {
		for ( j=0; j<3; j++ ) {
			printf("Selecione o um valor para %d e %d\n", j, i);
			
			scanf("%d", &a[j][i]);
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
  
}

//questão 3
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
//questão 4
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

//questão 6
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

    printf("\nM�dia aritm�tica de cada l:\n");
    for ( i = 0; i < L; i++) {
        printf("l %d: %.2f\n", i + 1, mediaLinhas[i]);
    }

    return 0;
}
// questão 8
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
// questão 9
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int a[3][3];
	int i, j, k;
	
	for( i=0; i<3; i++ ){
		for( j=0; j<3; j++ ){
			printf("Selecione o um valor para %d e %d: \n", i, j+1);
			scanf("%d", &a[i][j]);
		}	
	}
		for (i=0; i<3; i++) {
			for (j=0; j<4; j++) {
			printf("%d ", a[i][j]);
			printf (" ");
		}
		printf("\n");
	}
		printf ("Digite um valor k para multiplicar a matriz: ");
		scanf ("%d", &k);
		
		printf ("O valor da matriz atualizada e:\n");
		
		for (i=0; i<3; i++) {
			for (j=0; j<3; j++) {
			a[i][j] *= k;
			
		printf ("%d", a[i][j]);
		printf (" ");
	}
		printf ("\n");
  }
}
