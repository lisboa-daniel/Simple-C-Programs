#include <stdio.h>

int main(void){
	
	int a,b;

	printf("Digite os valores a,b: ");
	scanf("%d %d",&a,&b);

	printf("O maior é = %d\n", (a>b ? a : b));

	return 0;
}
