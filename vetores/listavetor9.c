#include <stdio.h>

void main(void) {
    int a[20], b[20], resultado[20];
    char op[20];
    int i;

    // Leitura do vetor 'a'
    printf("Digite os 20 elementos do vetor a:\n");
    for(i = 0; i < 20; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Leitura do vetor 'b'
    printf("\nDigite os 20 elementos do vetor b:\n");
    for(i = 0; i < 20; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // Leitura do vetor de operações 'op'
    printf("\nDigite as 20 operações (+, -, *, /) no vetor de operações:\n");
    for(i = 0; i < 20; i++) {
        printf("op[%d]: ", i);
        scanf(" %c", &op[i]);  // O espaço antes de %c é para limpar o buffer do caractere de nova linha
    }

    // Realização das operações e armazenamento no vetor 'resultado'
    for(i = 0; i < 20; i++) {
        switch(op[i]) {
            case '+':
                resultado[i] = a[i] + b[i];
                break;
            case '-':
                resultado[i] = a[i] - b[i];
                break;
            case '*':
                resultado[i] = a[i] * b[i];
                break;
            case '/':
                if(b[i] != 0) {
                    resultado[i] = a[i] / b[i];
                } else {
                    printf("Erro: Divisão por zero em op[%d].\n", i);
                    resultado[i] = 0;  // Define o resultado como 0 em caso de erro
                }
                break;
            default:
                printf("Erro: Operação inválida em op[%d].\n", i);
                resultado[i] = 0;  // Caso a operação não seja válida
        }
    }

    // Exibição do vetor 'resultado'
    printf("\nResultados das operações:\n");
    for(i = 0; i < 20; i++) {
        printf("resultado[%d] = %d\n", i, resultado[i]);
    }
}

