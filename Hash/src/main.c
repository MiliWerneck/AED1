#include "HashFechada.h"
#include "HashAberta.h"
#include <time.h>

int main() {

	srand(time(NULL));

	hashF hf;
	hash ha;
	int M = 73;

	int vetor[30];

	InicializaF(&hf, M);
	Inicializa(&ha, M);
	InsereVetor(vetor);

	InsereValor(&ha, vetor);
	Insere(&ha, 50, 2200);
	Insere(&ha, 51, 2300);
	Insere(&ha, 52, 2400);
	Insere(&ha, 53, 2500);
	Imprime(&ha);
	printf("\n");

	InsereValorF(&hf, vetor);
	InsereF(&hf, 50, 1100);
	InsereF(&hf, 51, 1200);
	InsereF(&hf, 52, 1300);
	InsereF(&hf, 53, 1400);
	ImprimeF(&hf);

	printf("\n");
	printf("Número de colisões HF: %d\n", RetornaColisoesF(&hf));
	printf("\n");
	printf("Número de colisões HA: %d\n", RetornaColisoes(&ha));

	return 0;
}