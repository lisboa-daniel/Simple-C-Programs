#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num;
	
	printf("Programa que escreve os 5 primeiros multiplos de 3 \n");
	printf("\n");
		
	
	for(num=1;num<6;num++)
	{
		printf("\n");
		printf("Multiplos de 3: %d \n",num*3);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
