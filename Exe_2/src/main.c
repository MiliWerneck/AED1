#include "lista.h"

int menu();

int main(){
	Lista l;
	Item aux;
	int opcao;

	FLVazia(&l);
	
	aux.str = (char*)malloc(TAMSTR);

	do {
		opcao = menu();

		switch (opcao) {
		case 1:
			if(l.count < MAXTAM) {
				for(int i=0; i<MAXTAM;i++){
					printf("Insira o nome: (Sem espacos) \n");
		
					scanf("%s", aux.str);
				 	LInsert(&l, aux);
				}
			} else {
				printf("Lista cheia\n");
			}
		break;
		case 2:
			if(l.count == 0)
				printf("Lista vazia\n\n");
			else {
				LBuscaRepetido(&l);
				LImprime(&l);
				printf("\n");
			}
		break;
		case 0:
			printf("Finalizando programa...\n");

			for(int i=l.first; i<l.last; i++)
				free(l.vet[i].str);
			free(aux.str);

			return 0;
		default:
			break;
		}
	} while(opcao != 0);

	return 0;
}


int menu() {
	int valor;

	printf("\n   - Menu - \n");
	printf(" --------------- \n");
	printf("1 - Adicionar\n");
	printf("2 - Imprimir\n");
	printf("0 - Sair\n");
	
	printf("\n Escolha: ");
	scanf("%d", &valor);
	fflush(stdin);

	return valor;
}
