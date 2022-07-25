#include <stdio.h>

void minimax(int v[],int n,int *mn, int *mx){
	
	*mn = v[0];
	*mx = v[0];
	for(int i =1;i < 5; i++){
		if (v[i] < *mn) *mn = v[i];
		else if (v[i] > *mx) *mx = v[i];
	}
}

int main(void) {
   int v[5] = {26,55,89,14,77};
   int min, max;
   minimax(v,5,&min,&max);
   printf("Min: %d\n",min);
   printf("Max: %d\n",max);
   return 0;
}
