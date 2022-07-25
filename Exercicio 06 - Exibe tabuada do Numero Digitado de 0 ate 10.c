#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num,tab;
	
	printf("Programa que exibe a tabuada do numero digitado de 0 a 10 \n");
	printf("\n");
	printf("De qual número deseja ver a tabuada? ");
	scanf("%d",&tab);
	
	for(num=0;num<11;num++)
	{
		printf("%d ",tab);
		printf("%d",num);
		printf(" = ");
		printf("%d \n",num*tab);
	}

	
	printf("\n");
	
	system("pause");
	return 0;
	
}
