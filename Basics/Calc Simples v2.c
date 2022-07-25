#include <stdio.h>

int main(void) {
   float x, y;
   char o;
   printf("Expressao? ");
   scanf("%f %c %f",&x,&o,&y);
   switch( o ) {
      case '+': printf("Valor = %.2f\n",x+y); break;
      case '-': printf("Valor = %.2f\n",x-y); break;
      case '*': printf("Valor = %.2f\n",x*y); break;
      case '/':  if (x != 0 && y != 0) printf("Valor = %.2f\n",x/y);
				else printf("Err: Nao eh possivel dividir por 0\n"); break;
      default : printf("Operador invalido: %c\n",o);
   }
   return 0;
}
