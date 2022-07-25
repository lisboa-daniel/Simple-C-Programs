#include <stdio.h>

float pot(float x, int n){
	
	if (n == 0) return 1;
	else return pot(x,n-1) * x;
}


int main(void){

	float x;
	int n;
	printf("Base e exponte? ");
	scanf("%f %d", &x,&n);
	printf("Pot = %.1f\n",pot(x,n));
	return 0;
}
