#include <stdio.h>

void main(void) {
    int vet[100], i;
    
    // Preenche o vetor conforme a condição do problema
    for(i = 0; i < 100; i++) {
        if(i % 2 == 0) {
            vet[i] = 1;  // Se o índice for par, coloca 1
        } else {
            vet[i] = 0;  // Se o índice for ímpar, coloca 0
        }
    }

    // Exibe o conteúdo do vetor
    printf("Conteúdo do vetor:\n");
    for(i = 0; i < 100; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }
}

