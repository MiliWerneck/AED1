#ifndef HASH_ABERTA_H
#define HASH_ABERTA_H

#include <stdio.h>
#include <stdlib.h>

#define hash1(v, M) (v % M)
#define hash2(v, chave, M) (((v * chave + M) + valor % M) % M)

typedef struct data data;
typedef struct hash hash;

struct data {
	int chave;
	int valor;
};

struct hash {
	data *tabela;
	int M;
	int colide;
};

void InsereVetor(int *vetor);
void InsereValor(hash *ha, int *vetor);
void Inicializa(hash *ha, int M);
void Insere(hash *ha, int chave, int valor);
int RetornaColisoes(hash *ha);
void Imprime(hash *ha);

#endif