#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int mult,c,num;
	
	printf("Programa que exibe o fatorial do n�mero digitado \n");
	printf("\n");
	printf("Insira um n�mero : ");
	scanf("%d",&num);
	
	mult=1;
		
	for(c;c<num+1;c++)
	{
		mult*=c;
	}

	printf("O fatorial de %d � %d",num,mult);
	printf("\n");
	
	system("pause");
	return 0;
	
}
