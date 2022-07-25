#include <stdio.h>


int len(char *s){
	char *u = s;
	while(*u) u++;
	/*alt while(*u++);
	return u-s-1 conta um a mais*/	
	return u-s;
}

int main(void) {
   printf("%d\n",len("teste"));
   return 0;
}
