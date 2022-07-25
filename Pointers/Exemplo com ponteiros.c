#include <stdio.h>

int main(void) {

	//*p o valor que p aponta
	//p = guarda o endereço em p
	int v, *p;
	p = &v;
	printf("Endereco de v: %P\n",&v);
	printf("Valor guardado: %P\n",p);
	printf("Valor apontado: %d\n",*p);
   	
	p==&v ? puts("sim\n") : puts("nao\n");
	
	printf("Valor apontado: %d\n",*p);
	printf("Valor de v: %P\n",v);

	*p == v ? puts(">>>sim\n") : puts(">>>nao\n");

	return 0;
}
