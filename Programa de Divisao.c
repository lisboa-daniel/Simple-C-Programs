#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a=10,b=5,r;
	
	printf("Programa de Divis�o\n");
	printf("O Valor de A � : %.2f \n",a);
	printf("O Valor de B � : %.2f \n",b);
	r=a/b;
	printf("A divis�o de A e B � de: %.2f \n",r);
	
	system("pause");
	return 0;
	
}
