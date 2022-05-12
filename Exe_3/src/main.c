#include "lista.h"

const char* filename = "src/files/entrada.txt";

int main(int argc, char *argv[]){
	Lista codon, anticodon;
	Item item, aux;

	aux.str = malloc(TAMSTR);

	FLVazia(&codon);
	FLVazia(&anticodon);

	lerEntrada(&item);
	lerTeste(&anticodon);
		
	for(int i=0; i< strlen(item.str);i += 3){
		strncpy(aux.str,item.str + i, 3);
		LInsert(&codon, aux);
	}

	LImprime(&codon);
	LImprime(&anticodon);

	testaAntiCodon(&anticodon,&codon);
	
	printf("\n");

	return 0;
}
