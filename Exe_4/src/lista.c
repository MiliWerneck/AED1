#include "lista.h"
   
    int MaximaSoma(){
    int lista[] = {2,-4,5,-10,1,12,25,30};
	int soma;
	int ant;
    
    for(int i=0; i<8; i++){
        printf ("Lista a ser somada: %d \n", lista[i]);
    }

    soma = ant = lista[0];
    printf("\n");
	printf("Lista de números a serem somados: %d\n", soma); //Para imprimir o primeiro número na tela.

        for(int i=1; i<8; i++){ //Percorrendo a lista e comparando se é maior.
            if(lista[i] > ant){
                soma += lista[i]; 
                ant = lista[i];
                printf("Lista de números a serem somados: %d\n", lista[i]);
            };
        };
        printf("\n Soma Máxima: %d\n", soma);
        printf("\n");
    }



