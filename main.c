#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ImprimirHist(int* Nrvendas[], int NrCateg);
int main() {
    int NrCateg = 5; // Defina um valor fixo para NrCateg
    int* Nrvendas[NrCateg];

    // Simulando os dados sem scanf
    int vendas[] = {10, 5, 7, 3, 0};  // Simulando os números de vendas para as categorias

    for (int i = 0; i < NrCateg; i++) {
        Nrvendas[i] = (int*)malloc(sizeof(int)); // Aloca memória para cada categoria
        if (Nrvendas[i] == NULL) {
            return 1;  // Retorna 1 em caso de erro de alocação
        }
        *Nrvendas[i] = vendas[i]; // Atribui o valor da venda de cada categoria
    }

    ImprimirHist(Nrvendas, NrCateg); // Chama a função de impressão

    // Libera a memória alocada
    for (int i = 0; i < NrCateg; i++) {
        free(Nrvendas[i]);
    }

    return 0;
}

void ImprimirHist(int* Nrvendas[], int NrCateg) {
    for (int i = 0; i < NrCateg; i++) {
        if (*Nrvendas[i] > 0) {
            for (int j = 0; j < *Nrvendas[i]; j++) {
                // Aqui seria o local para imprimir os asteriscos (*)
                // Em vez de usar printf, poderia acumular asteriscos em uma string ou processar de outra forma.
            }
        } else {
            // Aqui trataria o caso de não haver vendas
        }
    }
}
