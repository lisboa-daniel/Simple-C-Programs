#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float c,f;
	
	f=32;
	
	printf("Programa que converte graus Fahrenheit para Celsius \n");
	c=(f -32) * 5/9;
	printf("O Valor em graus Fahrenheit é de: %.2f \n",f);
	printf("E a conversão para graus Celsius é de: %.2f\n",c);
	
	system("pause");
	return 0;
	
}
