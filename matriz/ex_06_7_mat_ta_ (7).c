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
