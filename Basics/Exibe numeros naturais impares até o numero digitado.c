#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num,numfake,numod,contador=0,quanti;
	
	printf("Programa que escreve os primeiros n�meros impares pela quantidade digitada \n");
	printf("At� que n�mero voc� deseja ver?  ");
	scanf("%d",&quanti);
	printf("\n");
		

	for(num=0;num!=quanti+1;num++)
	{
		numfake = num;
		numod = numfake%2;
		if (numod == 1) 
		{
			printf("N�mero : %d \n",num);
			contador++;
		}
	}

	
	printf("\n");
	
	system("pause");
	return 0;
	
}
