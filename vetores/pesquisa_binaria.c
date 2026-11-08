#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


                                            // numeros
/*
int main() 
{
    int a[5];
    int pesq;
    int ini = 0;
    int final = 4;
    int meio;
    int achou = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Digite o valor para pesquisar: ");
    scanf("%d", &pesq);

    // O laço roda enquanto houver intervalo válido e não tiver achado
    while (ini <= final && achou == 0) {
        meio = (ini + final) / 2;

        if (pesq == a[meio]) {
            achou = 1; // Encontrou o elemento
        } 
        else {
            if (pesq > a[meio])  {
                ini = meio + 1; // O item está na metade superior
            }      
                else  {
                    final = meio - 1; // O item está na metade inferior
                }
                        
        }
    }

    // Saída dos resultados
    if (achou == 1) {
        printf("Elemento %d encontrado na posicao %d.\n", pesq, meio + 1);
    } else {
        printf("Elemento %d nao encontrado.\n", pesq);
    }
}
*/

                                    // nomes

int main() 
{
    // O vetor DEVE estar em ordem alfabetica!
    char a[5][50];
    char pesq[50];
    int ini = 0;
    int final = 4; // Ultimo indice valido (0 a 4)
    int meio;
    int achou = 0;

    // Cadastro dos 5 nomes
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d (em ordem alfabetica): ", i + 1);
        scanf("%s", a[i]);
    }

    printf("\nDigite o nome para pesquisar: ");
    scanf("%s", pesq);

    // Laco da pesquisa binaria
    while (ini <= final && achou == 0) {
        meio = (ini + final) / 2;

        if (strcmp(pesq, a[meio]) == 0) {
            achou = 1; // Encontrou o nome
        } 
        else {
            if (strcmp(pesq, a[meio]) > 0) {
                ini = meio + 1; // Nome vem depois no alfabeto
            } else {
                final = meio - 1; // Nome vem antes no alfabeto
            }
        }
    }

    // Saida dos resultados
    if (achou == 1) {
        printf("Nome '%s' encontrado na posicao %d.\n", pesq, meio + 1);
    } else {
        printf("Nome '%s' nao encontrado.\n", pesq);
    }

}