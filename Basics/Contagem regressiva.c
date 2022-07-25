#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_CTYPE,"BR");
	
	int n;

	printf("Insira um número: ");
	scanf("%d", &n);

	for(int i = n; i >= 0; i--){
		if (i != 0) printf("%d,",i);
		else printf("%d.\n", i);
		 
	}
	
	return 0;
}
