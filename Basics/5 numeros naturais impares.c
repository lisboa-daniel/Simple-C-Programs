#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num,numfake,numod,contador=0;
	
	printf("Programa que escreve os 5 primeiros números naturais impares \n");
	printf("\n");
		

	for(num=0;contador<5;num++)
	{
		numfake = num;
		numod = numfake%2;
		if (numod == 1) 
		{
			printf("Número : %d \n",num);
			contador++;
		}
	}

	
	printf("\n");
	
	system("pause");
	return 0;
	
}
