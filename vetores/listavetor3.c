#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");
	
	int i;
	float media, soma = 0, nota[10];
	
	for( i=0; i<10; i++ ){
		printf("Digite a nota do aluno %d: \n",i+1);
		scanf("%f", &nota[i]);
	}
	
	for( i=0; i<10; i++ ){
	soma += nota[i];
	}
	
	printf("\nRelatório de Notas da Turma:\n");
    for(i = 0; i < 10; i++) {
        printf("Aluno %d - Nota: %.2f\n", i + 1, nota[i]);
	}
	
	media = soma / 10;
	
	printf("\nMédia da turma: %.2f", media);
}
