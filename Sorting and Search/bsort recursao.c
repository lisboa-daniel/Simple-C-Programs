#include <stdio.h>
#include <stdlib.h>


void preenche(int v[], int n){
	for(int i = 0; i<n;i++){
		v[i] = rand()%50;
	}
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

void empurra(int v[], int n){
	if (n == 1) return;
	empurra(v,n-1);
	exibe(v,n);
	if (v[n-2] > v[n-1]) troca(v,n-1,n-2);
	printf("linha\n");
	exibe(v,n);

}


void bsr(int v[], int n){
	if (n == 1) return;
	empurra(v,n);
	bsr(v, n-1);
}

int main(void){
	int v[5] = {48,19,32,52,27};
	exibe(v,5);
	bsr(v,5);
	exibe(v,5);
}
