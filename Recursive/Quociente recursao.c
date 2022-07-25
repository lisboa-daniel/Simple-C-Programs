#include <stdio.h>

float quociente(float a , float b){
	if (a < b) return 0;
	return 1 + quociente(a-b,b);

}

int main(void){

	float a,b;
	printf("a b? ");
	scanf("%f %f",&a,&b);
	printf("r = %1.f\n",quociente(a,b));
	return 0;
}

