#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

                                        // numero
/*
int main()
{
    int numeros[5];
    int busca;
    int achou = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o numero a ser buscado: ");
    scanf("%d", &busca);

    printf("\nResultado da pesquisa:\n");
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            printf("Numero %d encontrado na posicao %d.\n", busca, i + 1);
            achou = 1;
            break;
        }
        if (!achou) {                                           // <- isso aqui pode ser tambem if (achou == 0)  //
            printf("Numero %d nao encontrado.\n", busca);
            break;
        }
    }
}
*/


                                                // nomes
/*
int main()
{
    char nomes[5][50];
    char busca[50];
    int achou = 0; // flag

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Leitura do nome a ser buscado
    printf("\nDigite o nome para buscar: ");
    scanf("%s", busca);

    // Pesquisa sequencial com strcmp
    for (int i = 0; i < 5; i++) {
        if (strcmp(nomes[i], busca) == 0) {
            printf("\nNome '%s' encontrado na posicao %d!\n", busca, i);
            achou = 1;  // 2. Marca que encontrou
            break;
        }
    }

    //  3. Verificação FORA do for: só imprime se percorreu tudo e achou continuou 0
    if (achou == 0) {
        printf("\nNome '%s' nao encontrado.\n", busca);
    }
}
*/


