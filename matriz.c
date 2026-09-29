#include <stdio.h>

int main() {
    // Declara uma matriz de 3 linhas e 3 colunas
    int matriz[3][3];
    int i, j;

    // Preenchendo a matriz com dados digitados pelo usuário
    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz em formato de tabela
    printf("\nMatriz informada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n"); // Pula para a próxima linha da matriz
    }

    return 0;
}