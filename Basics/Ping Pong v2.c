#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
   int x=1, y=1, dx=-1, dy=-1, color = 15;
   do {
      _gotoxy(x,y); 
      printf("O\b");         
      printf(".");
	  _sleep(1);
      if( x==1 || x==80 ) {
		 dx = -dx; 
		 color = rand() % 15 + 1;
		 _textcolor(color);

	  }

      if( y==1 || y==24 ) {
		 dy = -dy;
		 color = rand() % 15 + 1;
		 _textcolor(color);
	  }
      x += dx;
      y += dy;
   } while( !_kbhit() );
   return 0;
}
