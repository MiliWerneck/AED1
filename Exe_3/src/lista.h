#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM 20
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

void lerTeste(Lista *l);
void lerEntrada(Item *item);
void tokenizar(char *str, Lista *l);

void testaAntiCodon(Lista *l2, Lista *codon);

#endif