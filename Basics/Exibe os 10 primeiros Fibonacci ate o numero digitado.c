#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a,b,aux,i,n,count=0;
	
	a=0;
	b=1;
	
	printf("Programa que mostra a os números da sequencia Fibonacci pela quantidade digitada\n");
	printf("Insira um número : ");
	scanf("%d",&n);
	printf("\n");
	if (n > 0 && n!=1)
	{
		printf("%d",a);
		printf(" - " );
		printf("%d", b);
		
		for(i=0;count!=n-2;i++)
		{
			aux=a+b;
			a=b;
			b=aux;
			printf(" - " );
			printf("%d",aux);
			count++;
		}
	}
	else
	{
		if (n == 1)
		{
			printf("%d \n",a);
		}
		else
		printf("O número digitado precisa ser maior que 0 \n");
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
