#include <stdio.h>
#include <string.h>


typedef struct  { //label
	char titulo[13];
	char autor[17];
	int ano;
} Livro; //type name


void exibe(Livro f) {
    printf("%-12s | %-16s | %d\n",f.titulo,f.autor,f.ano);
}


void exibetab(Livro f[],int s) {
	for(int i =0; i < s; i++){
		exibe(f[i]);
	}
}



int main(void) {
	
			
	Livro v[] = {{"Frankenstein","Mary Shelley",1818},
				{"Dracula","Bram Stoker",1897},
				{"Carmilla","Sheridan Le Fanu",1872},
				{"Varney","Thomas Prest",1847}};
	
	exibetab(v,4);

	return 0;
}
