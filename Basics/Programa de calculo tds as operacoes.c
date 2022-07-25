#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a=10,b=5,sm,sub,mul,div;
	
	printf("Programa de cálculo com todas as operaçoes\n");
	printf("O Valor de A é : %.2f \n",a);
	printf("O Valor de B é : %.2f \n",b);
	sm=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;

	printf("A Soma de A e B é de: %.2f \n",sm);
	printf("A Subtração de A e B é de: %.2f \n",sub);
	printf("A Multiplicação de A e B é de: %.2f \n",mul);
	printf("A Divisão de A e B é de: %.2f \n",div);
	
	system("pause");
	return 0;
	
}
