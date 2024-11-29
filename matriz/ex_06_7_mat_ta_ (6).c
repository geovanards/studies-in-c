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

