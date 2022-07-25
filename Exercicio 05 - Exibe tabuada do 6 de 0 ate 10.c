#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num;
	
	printf("Programa que exibe a tabuada do 6 de 0 a 10 \n");
	printf("\n");
		

	for(num=0;num<11;num++)
	{
		printf("6x ");
		printf("%d",num);
		printf(" = ");
		printf("%d \n",num*6);
	}

	
	printf("\n");
	
	system("pause");
	return 0;
	
}
