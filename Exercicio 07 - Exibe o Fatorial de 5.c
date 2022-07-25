#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int mult,c;
	
	printf("Programa que exibe o fatorial de 5 \n");
	printf("\n");
	
	mult=1;
		
	for(c;c<6;c++)
	{
		mult*=c;
	}

	printf("O fatorial de 5 é %d",mult);
	printf("\n");
	
	system("pause");
	return 0;
	
}
