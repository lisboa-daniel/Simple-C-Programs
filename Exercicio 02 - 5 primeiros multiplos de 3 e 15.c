#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num,n1,n2,n3,n4,n5,s1,s2,s3,s4,s5;
	
	printf("Programa que escreve os 5 primeiros multiplos de 3 e 15 \n");
	printf("\n");
	
	for(num=15;num<76;num=num+15)
	{
		printf("Numero : %d \n",num);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
