#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_CTYPE,"BR");

	float x1,x2,y1,y2,dist;
	
	printf("Digite o valor de x1 e y2: ");
	scanf("%f,%f",&x1,&y1);
	printf("\nDigite o Valor de x2 e y2: ");
	scanf("%f,%f",&x2,&y2);
	
	float a, b, c;

	a = x2 - x1;
	b = y2 - y1;
	c = sqrt(pow(b,2) + pow(c,2));

	printf("A distancia é de: %.1f\n",c);

	return 0;

}
