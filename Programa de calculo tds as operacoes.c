#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a=10,b=5,sm,sub,mul,div;
	
	printf("Programa de c�lculo com todas as opera�oes\n");
	printf("O Valor de A � : %.2f \n",a);
	printf("O Valor de B � : %.2f \n",b);
	sm=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;

	printf("A Soma de A e B � de: %.2f \n",sm);
	printf("A Subtra��o de A e B � de: %.2f \n",sub);
	printf("A Multiplica��o de A e B � de: %.2f \n",mul);
	printf("A Divis�o de A e B � de: %.2f \n",div);
	
	system("pause");
	return 0;
	
}
