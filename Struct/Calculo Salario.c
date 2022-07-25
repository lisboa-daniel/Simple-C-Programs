#include <stdio.h>
#include <string.h>


typedef struct  { //label
	int dia;
	int mes;
	int ano;
} Data; //type name


typedef struct {
	int codigo;
	char nome[22];
	float salario;
	Data admissao;

} Func;



void exibe(Func f) {
    printf("%3d | %-12s | R$%7.2f | %02d/%02d/%02d | \n",
          f.codigo,f.nome,f.salario,
          f.admissao.dia,f.admissao.mes,f.admissao.ano);
}

void exibetab(Func f[],int s) {
	for(int i =0; i < s; i++){
		exibe(f[i]);
	}
}

void troca(Func v[], int i, int j){
	Func t = v[i];
	v[i] = v[j];
	v[j] = t;

}

//cod
void bsort_codigo(Func v[],int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( v[j].codigo>v[j+1].codigo )
            troca(v,j,j+1);
}

//nome
void bsort_nome(Func v[],int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( strcmp(v[j].nome,v[j+1].nome) > 0 )
            troca(v,j,j+1);
}

//sal
void bsort_sal(Func v[],int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( v[j].salario>v[j+1].salario )
            troca(v,j,j+1);
}

//date
void bsort_sal(Func v[],int n) {
   for(int i=1; i<=n-1; i++)
      for(int j=0; j<n-i; j++)
         if( v[j].salario>v[j+1].salario )
            troca(v,j,j+1);
}

int main(void) {
	
			
	Func v[] = {{561,"Eva Maranhao",9200.00,{2,7,2012}},
            {295,"Ana Teixeira",6100.00,{5,9,2015}},
            {473,"Denise Lagoa",8500.00,{1,6,2013}},
            {12,"Catia Telles",7300.00,{3,8,2014}},
            {384,"Beatriz Lira",5400.00,{4,9,2016}}};
	
	puts("Antes");
	exibetab(v,5);
	bsort_sal(v,5);
	puts("Depois");
	exibetab(v,5);

	return 0;
}
