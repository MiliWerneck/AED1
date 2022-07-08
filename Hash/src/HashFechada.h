#ifndef HASH_FECHADA_H
#define HASH_FECHADA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define hashF(v, M) (v % M)

typedef struct dataF dataF;
typedef struct hashF hashF;

struct dataF {
	int chave;
	bool dataF;
	int *lista;
	int posicao;
};

struct hashF {
	dataF *tabela;
	int M;
	int colide;
};

void InsereValorF(hashF *hf, int *vetor);
void InicializaF(hashF *hf, int M);
void InsereF(hashF *hf, int chave, int valor);
int RetornaColisoesF(hashF *hf);
void ImprimeF(hashF *hf);

#endif