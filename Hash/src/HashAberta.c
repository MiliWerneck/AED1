#include "HashAberta.h"

void InsereVetor(int *vetor) {
	for (int n = 0; n < 30; n++) {
		vetor[n] = rand() % 74;
	}
}

void InsereValor(hash *ha, int *vetor) {
	for (int n = 0; n < 30; n++) {
		Insere(ha, n + 100, vetor[n]);
	}
}

void Inicializa(hash *ha, int M) {
	ha->tabela = (data *)malloc(M * sizeof(data));

	for (int i = 0; i < M; i++) {
		ha->tabela[i].chave = -1;
		ha->tabela[i].valor = 0;
	}

	ha->M = M;
	ha->colide = 0;
}

void Insere(hash *ha, int chave, int valor) {
	int id = hash1(chave, ha->M);
	int aux1 = id;

	while (ha->tabela[id].chave != -1) {
		id = hash2((id + 1), chave, ha->M);


		ha->colide++;
		if (id == aux1) {
			printf("Hash cheia aberta!\n");
			return;
		}
	}

	ha->tabela[id].chave = chave;
	ha->tabela[id].valor = valor;
}


void Imprime(hash *ha) {
	for (int i = 0; i < ha->M; i++) {
		printf("%d -> %d\n", ha->tabela[i].chave, ha->tabela[i].valor);
	}
}


int RetornaColisoes(hash *ha) {
	return ha->colide;
}