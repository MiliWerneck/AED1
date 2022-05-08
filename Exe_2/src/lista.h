#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM 5
#define TAMSTR 100

typedef struct Item{
	int val;
	char *str;
}Item;

typedef struct Lista{
	Item vet[MAXTAM+1];
	int first;
	int last;
	int count;
}Lista;

void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LRemove(Lista *l, Item d, int indice);
void Swap(Item *a, Item *b);
void LImprime(Lista *l);
void LBuscaRepetido(Lista *l);
int checkAll(Lista *l);

#endif