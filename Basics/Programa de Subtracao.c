#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a=10,b=5,r;
	
	printf("Programa de Subtra��o\n");
	printf("O Valor de A � : %d \n",a);
	printf("O Valor de B � : %d \n",b);
	r=a-b;
	printf("A subtra��o de A e B � de: %d \n",r);
	
	system("pause");
	return 0;
	
}
