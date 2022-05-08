#include "matriz.h"

int main(void)
{
    int matriz[MAXTAM][MAXTAM]; 
    int soma;

    srand(time(NULL)); // Gerando números randômicos de acordo com o relógio da máquina

    printf("\n");

    matrizInicia(MAXTAM, MAXTAM, matriz); // Inicializando matriz com valores randômicos

    printf("Imprimindo matriz randômica...\n\n");

    matrizImprime(MAXTAM, MAXTAM, matriz);

    soma = matrizCaminho(MAXTAM, MAXTAM, matriz); // Somando em soma os valores do caminho e trocando os valores para -1
    printf("\n");

    printf("Percorrendo o Caminho com maiores valores... (-1)\n\n");

    matrizImprime(MAXTAM, MAXTAM, matriz);
    printf("\n");

    printf("Soma do Caminho com maiores valores = %i\n", soma);
    printf("\n");

    return 0;
}