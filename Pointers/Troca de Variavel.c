#include <stdio.h>

void troca(int *p,int *q) {
   int x = *p;
   *p = *q;
   *q = x;
}

int main(void) {
   int a=5, b=3;
   troca(&a,&b);
   printf("a=%d b=%d\n",a,b);
   return 0;
}
