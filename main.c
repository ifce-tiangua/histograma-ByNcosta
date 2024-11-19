#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int NrCateg;
    printf( " ");
    scanf( "%d", &NrCateg);
    int* Nrvendas[NrCateg];
        for (int i = 0; i < NrCateg; i++) {
        Nrvendas[i] = (int*)malloc(sizeof(int));
        if (Nrvendas[i] == NULL) {
            printf( "Erro memoria alocada!.\n");
             }
        printf( "%d:", i + 1);
        scanf( "%d",Nrvendas[i]);
    }
      ImprimirHist(Nrvendas, NrCateg);
    for (int i = 0; i < NrCateg; i++){
        free(Nrvendas[i]);
    }
    free(Nrvendas);
    return 0;
}
void ImprimirHist(int* Nrvendas[], int NrCateg){
    for (int i = 0; i < NrCateg; i++) {
        printf("%d ", *Nrvendas[i]);
        if (*Nrvendas[i] > 0) {
          for (int j = 0; j < *Nrvendas[i]; j++) {
                printf("*");
            }
        } else {
        printf("0");
        }
        printf("\n");
    }
}





