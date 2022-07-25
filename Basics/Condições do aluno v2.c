#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"BR");

	float n1,n2,m;
	int f;

	printf("Insira a sua nota 01: ");
	scanf("%f",&n1);

	printf("\nInsira a sua nota 02: ");
	scanf("%f",&n2);

	printf("Insira a quantidade de faltas: ");
	scanf("%d",&f);

	m = (n1+n2)/2;
	printf("Sua média é de: %.2f\n",m);
	
	if (f <= 5){
		if (m >= 6.0){
			_textcolor(2); 
			puts("Situação: Aprovado");
 
		} else {

		 	_textcolor(4); 
			puts("Situação: Reprovado pela média"); 
		}

	} else {
		_textcolor(13); 
		puts("Situação: Reprovado por falta"); 
	}
	_textcolor(15);
	return 0;

}
