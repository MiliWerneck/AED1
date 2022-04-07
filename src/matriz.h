#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAXTAM 5 // Tamanho da matriz
#define RANDOM_SIZE 100 // Maior valor randômico

void matrizInicia(const int linhas, const int colunas, int matriz[linhas][colunas]);
void matrizImprime(const int linhas, const int colunas, int matriz[linhas][colunas]);
int matrizCaminho(const int linhas, const int colunas, int matriz[linhas][colunas]);