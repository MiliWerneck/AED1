#include "lista.h"

void Swap(Item *a, Item *b){
	Item aux;
	aux.str = malloc(sizeof(TAMSTR));

	strcpy(aux.str, a->str);

	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->count = 0;
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{

		l->vet[l->last].str = malloc(sizeof(TAMSTR));
		strcpy(l->vet[l->last].str, d.str);

		l->last ++;
		l->count++;
	}
}

void LRemove(Lista *l, Item d, int indice){
	bool ok = false;
	//printf ("%d - %s", indice, d.str);

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=indice; i<l->last; i++){
			if(strcmp(l->vet[i].str,d.str)==0){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
		}

		if(ok){
			l->count--;
			l->last --;
		}
	}
}

int checkAll(Lista *l) {
	Item aux;
	int check = 0;

	aux.str = (char*)malloc(TAMSTR);
	strcpy(aux.str, l->vet[l->first].str);

	for(int j=l->first+1; j<l->last; j++){
		if(strcmp(l->vet[j].str,aux.str) != 0){
			check = -1;
			break;
		}
	}
	return check;
}

void LBuscaRepetido(Lista *l){
	if(checkAll(l) == 0)
		l->last = 1;

	Item aux;
	aux.str = (char*)malloc(TAMSTR);
	
	for(int i=l->first; i<l->last; i++){
		strcpy(aux.str, l->vet[i].str);
			
		for(int j=0; j<l->last; j++)
			LRemove(l,aux,i+1);
			
	}

}

void LImprime(Lista *l){
	printf ("Lista sem os repetidos: \n");
	for(int i=l->first; i<l->last; i++)
		printf("%s , ", l->vet[i].str);
	printf("\n");
}

