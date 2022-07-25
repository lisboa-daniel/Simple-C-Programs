#include <stdio.h>

void cr(int n){
	if (n == 0) return;
	cr(n-1);
	printf("%d ",n);
}

int main(void){

	int n;
	printf("Num? ");
	scanf("%d", &n);
	cr(n);

	return 0;
}
