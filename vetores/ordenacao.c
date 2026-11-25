#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


//                                                          numeros                                              

/*
int main() {
    int a[5];
    int aux;

    // 1. Leitura dos dados
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // 2. Método da Seleção
    // O laço de 'i' vai até o penúltimo elemento
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            
            // Se o elemento de trás for maior que o da frente, troca!
            if (a[i] > a[j]) {
                aux = a[i];    // Guarda o valor de a[i] no aux
                a[i] = a[j];   // a[i] recebe o valor menor que estava em a[j]
                a[j] = aux;    // a[j] recebe o valor maior que estava no aux
            }
        }
    }
    // 3. Imprime o vetor ordenado
    printf("\nVetor ordenado: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}
*/



//                                                          nomes

/*
int main() 
{
    char a[5][50];
    char aux[50];

    // 1. Leitura dos dados
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", a[i]);
    }

    // 2. Método da Seleção
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(a[i], a[j]) > 0) {
                strcpy(aux, a[i]);   // Guarda o valor de a[i] no aux
                strcpy(a[i], a[j]);  // a[i] recebe o valor menor que estava em a[j]
                strcpy(a[j], aux);   // a[j] recebe o valor maior que estava no aux
            }
        }
    }

    // 3. Imprime o vetor ordenado
    printf("\nVetor ordenado: \n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", a[i]);
    }
}
*/

                                // sempre seguir essa estrutura 
/*

strcpy(aux, nome);
strcpy(nome, nome1);
strcpy(nome1, aux);

ou 

aux = a[i];
a[i] = a[j];
a[j] = aux;

*/