#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"BR");
	float a,b,c,d;

	printf("Insira os valores de a b c: ");
	scanf("%f %f %f",&a,&b,&c);
	d = pow(b,2) -4 * a * c;

	if (a != 0){
		if (d > 0){
		printf("x1 = %.2f\n", (-b + sqrt(d)) / (2*a));
		printf("x2 = %.2f\n", (-b - sqrt(d)) / (2*a));
		} else {
			printf("Não existem raizes reais\n");
		}
	} else {
		printf("Não é uma raíz do segundo grau\n");
	}
	
	return 0;

}
