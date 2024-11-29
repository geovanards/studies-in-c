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
