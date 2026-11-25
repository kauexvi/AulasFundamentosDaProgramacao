#include <stdio.h>
#include <string.h>


/*
int main()
{
    struct paises {
        char nome[50];
        int rendaAnual;
        int populacao;
    };

    int somaR = 0;

    struct paises pais[4];

    for (int i = 0; i < 4; i++) {
        setbuf(stdin, NULL);

        printf("Informe o nome do pais %d: ", i + 1);
        fgets(pais[i].nome, sizeof(pais[i].nome), stdin);

        printf("Informe a renda anual do pais %d: ", i + 1);
        scanf("%d", &pais[i].rendaAnual);

        printf("Informe a populacao do pais %d: ", i + 1);
        scanf("%d", &pais[i].populacao);

        somaR = somaR + pais[i].rendaAnual;
    }

    int RendaMedia = somaR / 4;

    printf("\n=== Dados dos Paises ===\n");
    
    printf("\nRenda Anual Media: %d\n", RendaMedia);


    for (int i = 0; i < 4; i++) {
        if (pais[i].rendaAnual > RendaMedia) {
            printf("\nPais: %s | Renda Anual: %d | Populacao: %d\n", pais[i].nome, pais[i].rendaAnual, pais[i].populacao);
        }
    }
}
*/

int main()
{
    struct produto {
        char desc[50];
        int cod;
    };

    struct produto produtos[10];

    int temp;

    for (int i = 0; i < 10; i++) {
        setbuf(stdin, NULL);

        printf("Informe a descricao do produto %d: ", i + 1);
        fgets(produtos[i].desc, sizeof(produtos[i].desc), stdin);

        printf("Informe o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].cod);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 11; j++) {
            if (produtos[j].cod < produtos[i].cod)
            {
                temp = produtos[i].cod;
                produtos[i].cod = produtos[j].cod;
                produtos[j].cod = temp;
            }
        }
    }

    int ini = 0, final = 10, meio = 0, achou = 0;

    char pesq[50];

    printf("\nDigite o nome para pesquisar: ");
    scanf("%s", pesq);

    while (1) {
        meio = (ini + final) / 2;

        if (strcmp(pesq, produtos[meio].desc) == 0) {
            achou = 1; // Encontrou o nome
        } 
        else {
            if (strcmp(pesq, produtos[meio].desc) > 0) {
                ini = meio + 1; // Nome vem depois no alfabeto
            } else {
                final = meio - 1; // Nome vem antes no alfabeto
            }
        }
        if (achou == 1) {
            printf("Produto '%s' encontrado, descricao: %s.\n", pesq, produtos[meio].desc);
        } else {
            printf("Produto '%s' nao encontrado.\n", pesq);
        }
    }

}