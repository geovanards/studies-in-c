#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // Incluindo a biblioteca math.h

void main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;
    float delta;
    float x1, x2;

    printf("Digite os coeficientes a, b e c da equação ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("O coeficiente 'a' não pode ser zero em uma equação do 2º grau.\n");
        return 1; 
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raízes reais e diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existem duas raízes reais e iguais:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        printf("Não existem raízes reais.\n");
    }


}




