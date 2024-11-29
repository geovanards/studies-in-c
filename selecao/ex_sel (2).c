#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");

	
	int x, y;
	
	printf("Digite dois valores:\n");
	scanf("%d %d", &x, &y);
	
	if (x > y)
	printf("os valores são %d e %d", x,y);
	
	if (y > x)
	printf("os valores são %d e %d", y, x);
	
	
	else if (x == y){
		printf("os valores são iguais a %d", x);
		
	}
}
