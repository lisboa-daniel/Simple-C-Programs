#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a,b,aux,i,n,count=0;
	
	a=0;
	b=1;
	n=10;
	
	printf("Programa que mostra os 10 números da sequencia Fibonacci \n");
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
	
	printf("\n");
	
	system("pause");
	return 0;
}
