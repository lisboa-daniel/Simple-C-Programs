#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"BR");

	int d,m,y,st,nd,rd;

	printf("dia/mes/ano: ");
	scanf("%d/%d/%d", &d, &m, &y);
	
	st = d * 100 + m + y;
	nd = (st/100) + (st % 100);
	rd = nd % 5;

	switch(rd){
      case 0: puts("Tímido"); break;
      case 1: puts("Sonhador"); break;
      case 2: puts("Paquerador"); break;
      case 3: puts("Atraente"); break;
      case 4: puts("Irresistível"); break;
	}


	return 0;
}
