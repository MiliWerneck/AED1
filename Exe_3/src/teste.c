#include "Lista.h"


void testaAntiCodon(Lista *l2, Lista *codon){
    Item anticodon;
    int tamC, tamAC, controle = 0;

	tamC = codon->last - codon->first;

    for(int i=l2->first; i<l2->last; i++){
        printf("\n%s \n", l2->vet[i].str);

        for(int k=codon->first; k<codon->last; k++){
           controle = k;

            for(int j=0; j<strlen(l2->vet[i].str); j += 3){
                strncpy(anticodon.str,l2->vet[i].str + j, 3);
            
               if(strcmp(anticodon.str,codon->vet[k].str) == 0) {
                    printf("%s ", anticodon.str);
                    k++; 
                } else {
                   k = controle;
                    break;
                }
                if(k == tamC) break;
            }
   }
   printf("\n");
}
}