#include <stdio.h>
#define maiuscula(c) (((x) >= 'A') && ((x) <= 'Z'))  

int main(void){

	char x;
	printf("Caractere? ");
	scanf("%c", &x);
	printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
	return 0;
}
