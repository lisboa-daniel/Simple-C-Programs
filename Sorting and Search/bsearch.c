#include <stdio.h>

int binsearch(int x, int v[], int n){
	int p = 0;
	int u = n-1;
	while(p<=u){
		int m = (p+u)/2;
		if (x==v[m]) return 1;
		if (x<v[m]) u = m-1;
		else p = m +1;
	}

	return 0;
}

int main(void){
	
	int v[8] = {1,2,3,4,5,6,7,8};
	printf("3: %d\n",binsearch(3,v,8));
	return 0;
}
