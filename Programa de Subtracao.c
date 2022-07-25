#include <stdio.h> //Abrindo Biblioteca
#include <stdlib.h>
#include <locale.h>

main()
{

	/* Programa de soma
	 programador Daniel*/
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a=10,b=5,r;
	
	printf("Programa de Subtração\n");
	printf("O Valor de A é : %d \n",a);
	printf("O Valor de B é : %d \n",b);
	r=a-b;
	printf("A subtração de A e B é de: %d \n",r);
	
	system("pause");
	return 0;
	
}
