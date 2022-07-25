#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ordenado(int w[], int n){
	
	for(int i = 0; i < n-1; i++){
		if (w[i] > w[i+1]) return 0;	
	}

	return 1;
}

void exibe(int w[],int n){
	printf("{");
	for(int i = 0; i <= n-1; i++){
		printf("%d",w[i]);
		if (i != n-1) printf(",");
	}
	printf("}\n\n");
}

void troca(int v[], int i, int j){
	int x = v[i];
	v[i] = v[j];
	v[j] = x;
}


void bsort(int v[], int n){
	for(int i =1; i<=n-1;i++)
		for (int j=0; j<n-i;j++)
			if (v[j] > v[j+1]) troca(v,j,j+1);
}

void preenche(int v[], int n){
	for(int i = 0; i<n;i++){
		v[i] = rand()%50;
	}
}

int main(void){
	srand(time(NULL));
	int n = 10;
	int v[10];
	preenche(v,n);
	exibe(v,n);
	bsort(v,n);
	exibe(v,n);
	return 0;
}
