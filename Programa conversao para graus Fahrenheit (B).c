#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float c=100,f;
	
	printf("Programa que converte graus Celsius para Fahrenheit \n");
	f=(9 * c + 160)/5;
	printf("O Valor em graus Celsius � de: %.2f \n",c);
	printf("E a convers�o para graus Fahrenheit � de: %.2f\n",f);
	
	system("pause");
	return 0;
	
}
