#include "lista.h"

void lerTeste(Lista *l){
    FILE *file = fopen("src/entrada.txt", "r");
	
    Item item;

    item.str = (char*)malloc(TAMSTR);

	if(file == NULL) {
		printf("Nao foi possivel abrir o arquivo entrada.txt\n");
		return;
	} else 
        while (fscanf(file, "%[^\n] ", item.str) != EOF){
            tokenizar(item.str, l);
        }

	fclose(file);
}

void tokenizar(char *str, Lista *l) {
	const char sep[] = " ";
	char *tokens;
    Item h;
    h.str = malloc(TAMSTR);
	
	tokens = strtok(str, sep);
	
	while(tokens != NULL) {
        strcpy(h.str, tokens);
		LInsert(l,h);
        tokens = strtok(NULL, sep);
	}
}
