#include <stdio.h>

float soma(float v[], int n){
	float s = 0.0;
	//n>0
	while(n--) s += *v++;	
	//v++;
	//n--;

	return s;
	
}

int main(void) {
   float v[3] = {2.5,1.5,3.0};
   printf("%.1f\n",soma(v,3));
   return 0;
}


