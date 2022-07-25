#include <stdio.h>

int rbsearch(int x, int v[], int p, int u){
	if (p > u) return 0;
	int m = (p+u)/2;
	if (x == v[m]) return 1;
	if (x < v[m]) return rbsearch(x,v,p,m-1);
	else return rbsearch(x,v,m+1,u);

}

int main(void){
	
	int v[8] = {1,2,3,4,5,6,7,8};
	printf("3: %d\n",rbsearch(5,v,0,7));
	return 0;
}
