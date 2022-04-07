#include "matriz.h"

void matrizInicia(const int linhas, const int colunas, int matriz[linhas][colunas]) // Inicia a matriz
{
    for (int i = 0; i < linhas; i++) // 
    {
        for (int j = 0; j < colunas; j++) // 
        {
           matriz[i][j] = rand() % RANDOM_SIZE; // Cria valores randômicos
        }
    }
}

void matrizImprime(const int linhas, const int colunas, int matriz[linhas][colunas]) // 
{
    for (int i = 0; i < linhas; i++) // 
    {
        for (int j = 0; j < colunas; j++) // 
        {
            printf("[%i][%i] = %i\t", i, j, matriz[i][j]); // Imprimindo matriz
        }
        printf("\n");
    }
}

int matrizCaminho(const int linhas, const int colunas, int matriz[linhas][colunas]) // 5 + 5*n^2
{
    int soma = 0;
    int i = 0; 
    int j = 0;
    soma += matriz[i][j];
    matriz[i][j] = -1;

    while (i != linhas && j != colunas) // Percorrendo matriz pelos maiores valores
    {
        if (i < linhas - 1 && j == 0)
        {
            if(matriz[i][j + 1] >= matriz[i + 1][j] && matriz[i][j + 1] != -1)
            {
                soma += matriz[i][j + 1];
                matriz[i][j + 1] = -1;
                j++;
            }
            else
            {
                soma += matriz[i + 1][j];
                matriz[i + 1][j] = -1;
                i++;
            }
        }
        else if (i < linhas - 1 && j == colunas - 1)
        {
            if(matriz[i][j - 1] >= matriz[i + 1][j] && matriz[i][j - 1] != -1)
            {
                soma += matriz[i][j - 1];
                matriz[i][j - 1] = -1;
                j--;
            }
            else
            {
                soma += matriz[i + 1][j];
                matriz[i + 1][j] = -1;
                i++;
            }
        }
        else if(i == linhas - 1 && j < colunas - 1)
        {
            soma += matriz[i][j+1];
            matriz[i][j+1] = -1;
            j++;
        }
        else if(i == linhas - 1 && j == colunas - 1)
        {
            j++;
        }
        else if(i != linhas - 1 && j != colunas - 1)
        {
            if(matriz[i][j - 1] > matriz[i + 1][j] && matriz[i][j - 1] > matriz[i][j + 1])
            {
                soma += matriz[i][j - 1];
                matriz[i][j - 1] = -1;
                j--;
            }
            else if(matriz[i + 1][j] > matriz[i][j - 1] && matriz[i + 1][j] > matriz[i][j + 1])
            {
                soma += matriz[i + 1][j];
                matriz[i + 1][j] = -1;
                i++;
            }
            else
            {
                soma += matriz[i][j + 1];
                matriz[i][j + 1] = -1;
                j++;
            }
        }
    }
    return soma;
}