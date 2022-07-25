#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_CTYPE,"BR");

	float salario, imposto = 0.0;

	printf("Salário: ");
	scanf("%f",&salario);
	
	if (salario <= 1903.98) imposto = -1;
	else if (salario > 1903.98 && salario <= 2826.65) imposto = salario * 0.075;
	else if (salario > 2826.65 && salario <= 3751.05) imposto = salario * 0.15;
	else if (salario > 3.751,05 && salario <= 4664.68) imposto = salario * 0.225;
	else if (salario > 4664.68) imposto = salario * 0.275;

	if (imposto < 0) printf("\nInsento\n.");
	else printf("\nO valor do imposto a ser recolhido é de R$%.2f\n",imposto);

	return 0;
}

/*Até 1.903,98 isento
Acima de 1.903,98, até 2.826,65 7,5 %
Acima de 2.826,65, até 3.751,05 15,0 %
Acima de 3.751,05, até 4.664,68 22,5 %
Acima de 4.664,68 27,5 %*/
