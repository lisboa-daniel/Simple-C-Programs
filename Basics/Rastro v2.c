#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
   int col=40, lin=12, color = 0, activated = 1;
   while( 1 ) {
      _gotoxy(col,lin); 
      _putch(219);

      switch( toupper(_getch()) ) {
         case 'W': if( lin> 1 ) lin--; break;
         case 'S': if( lin<42-7 ) lin++; break;
         case 'D': if( col<80 ) col++; break;
         case 'A': if( col> 1 ) col--; break;
		 case 'R': if (color == 0) color= 15;else color = 0;_textcolor(color);  break;
		 case 'C': if (color < 15) color++;else color = 0; _textcolor(color); break;
         case 'F': exit(1);
      }
   }
   return 0;
}
