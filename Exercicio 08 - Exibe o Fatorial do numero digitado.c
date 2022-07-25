#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int mult,c,num;
	
	printf("Programa que exibe o fatorial do número digitado \n");
	printf("\n");
	printf("Insira um número : ");
	scanf("%d",&num);
	
	mult=1;
		
	for(c;c<num+1;c++)
	{
		mult*=c;
	}

	printf("O fatorial de %d é %d",num,mult);
	printf("\n");
	
	system("pause");
	return 0;
	
}
