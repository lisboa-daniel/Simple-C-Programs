#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <conio.h>

int main(int argc,char *argy[])
 {
 	setlocale(LC_ALL,"Portuguese_Brazil");
	 
	 int salliqud,desctot,irpf,calculosal,salbruto,faltas,transportedesc,dsfaltas,inss,fgts;
 	char vtrans;
 	int laco;
 	laco=1;
 	while(laco == 1)
 	
 	{
	
 	
 	printf("Folha de pagamento");
 	printf("\n");
 	printf("\n");
 	printf("\n");
 	printf("Salario bruto: ");
 	scanf("%d",&salbruto);
 	printf("\n");
 	printf("\n");
 	printf("Quantidade de faltas em dias: ");
 	scanf("%d",&faltas);
 	if (faltas==0) dsfaltas=0;
	if (faltas>=1) dsfaltas=(salbruto/30)* faltas;
	
	 printf("\n");
	 printf("\n");
	 while (vtrans!='s'&&vtrans!='n')
	 {
	 	printf("Utiliza vale transporte (S/N)");
	 	scanf("%1s",&vtrans);
	 	
	 	if(vtrans=='s')
	 	{
	 		transportedesc=salbruto*0.06;
	 		  
	 		if(transportedesc>200) transportedesc=200;
	 		   
		 }
	}
		  if(vtrans=='n')
	{
		transportedesc=0;
	}
	system("c|s");
	printf("Folha de pagamento");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Salario:...........................%d",salbruto);
	printf("\n");
	calculosal=salbruto-dsfaltas;
	printf("Valor descontado das faltas:............%d",dsfaltas);
	printf("\n");
	printf("Valor descontado do valetransporte:............%d",transportedesc);
	printf("\n");
	   
	    if(calculosal<=400.00)
	    inss=calculosal*0.08;
	    if(calculosal>=400.01 && calculosal<=800.00)
		inss=salbruto*0.10;
		
		
		if(calculosal>=800.01 && calculosal<=1350.00)	
		inss=salbruto*0.11;
		
		if(calculosal>=1350.01)
		inss=146;
		
		printf("Valor descontado do INSS:............%d",inss);
		printf("\n");
		
		fgts=calculosal*0.08;
		
		printf("Valor do FGTS:...........................%d",fgts);
		printf("\n");
		
		
		irpf=0;
		
		if(calculosal>=900.01 && calculosal<=2000.00)
		irpf=calculosal*0.15;
		
		if(calculosal>=2000.01)
		  irpf=calculosal*0.255;
		  
		  printf("Valor descontado do IRPF:............%d",irpf);
		  printf("\n");
		  
		  
		  desctot=irpf+fgts+inss+dsfaltas+transportedesc;
		  
		  
		  printf("Total dos descontos:............%d",desctot, "conto");
		  printf("\n");
		  
		  
		  salliqud=salbruto-desctot;
		  
		  
		 printf("\n");
		 printf("\n");
		 printf("Salario Liquido:............%d",salliqud);
		 printf("\n");
		
		printf("Quer calcular denovo ? \n");
		printf("Se sim digite [1] | Se não digite [0]");
		scanf("%d",&laco);
	
		}
		
		getch();
		
 }
