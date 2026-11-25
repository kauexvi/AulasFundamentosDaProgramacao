#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
int main()
{
    int a[3][3];

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero : ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%3d",a[i][j]);
            printf("\n");
    }
}
*/

/*
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int soma;
    int i, j;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero da matriz A: ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero da matriz B: ");
        scanf("%d", &b[i][j]);
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            c[i][j] = a[i][j] + b[i][j];

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%3d",c[i][j]);
            printf("\n");
    }
}
*/

/*
int main()
{
    int a[7];
    int b[7];
    int c[2][7];
    int i, j;

    for (int i=0; i<7; i++){
        printf("informe numero do elemento A: ");
        scanf("%d", &a[i]);
        }

    printf("\n");

    for (int i=0; i<7; i++) {
        printf("informe numero do elemento B: ");
        scanf("%d", &b[i]);
        }

    for (int j=0; j<7; j++) {
        c[0][j] = a[j];
        c[1][j] = b[j];
    }

    for(int i=0;i<2;i++){
        printf("\n");

        for (int j=0; j<7; j++) {
            printf("%3d", c[i][j]);
        }
    }
}
*/

/*
int main()
{
    int a[3][2];
    int b[3][2];
    int c[3][2];
    int soma;
    int i, j;

    for (int i=0; i<3; i++)
        for (int j=0; j<2; j++) {
        printf("informe numero da matriz A: ");
        scanf("%d", &a[i][j]);
    }

    printf("\n");

    for (int i=0; i<3; i++)
        for (int j=0; j<2; j++) {
        printf("informe numero da matriz B: ");
        scanf("%d", &b[i][j]);
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<2; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("\n");

    for (int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            printf("%3d",c[i][j]);
            printf("\n");
    }
}
*/


/* int main questao 3 */


/*
int main()
{
    int a[4][5];
    int b[4][5];

    int i, j, k;


    for (int i=0; i<4; i++)
        for (int j=0; j<5; j++) {
        printf("informe numero da matriz : ");
        scanf("%d", &a[i][j]);
    }

    printf("\n");

    for (int i = 0; i<4 ; i++)
        for (int j = 0; j<5 ; j++)
        b[i][j] = 1;
            for (int k = 1; k<=a[i][j] ; k++)
                b[i][j] *= k;


    for(int i=0;i<4;i++){
        printf("\n");
        for (int j=0; j<5; j++)
            printf("%d ", b[i][j]);
    }
}
*/


/*
int main()
{
    int a[4][5];
    int i, j, somap = 0, somai = 0;


    for (int i=0; i<4; i++)
        for (int j=0; j<5; j++) {
        printf("informe numero da matriz : ");
        scanf("%d", &a[i][j]);
    }

    printf("\n");

     for (int i=0; i<4; i++)
        for (int j=0; j<5; j++) {
         if (a[i][j] % 2 == 0)
            somap = somap + a[i][j];
        else
            somai = somai + a[i][j];
    }

    printf("soma dos pares = %d", somap);
    printf("\nsoma dos impares = %d", somai);
}
*/


/*
int main()
{
    int a[4][5];
    int aa[4] = {0,0,0,0};
    int soma;

    for (int i=0; i<4; i++)
        for (int j=0; j<5; j++) {
        printf("informe numero da matriz : ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0; i<4; i++)
        for (int j=0; j<5; j++)
            aa[i] += a[i][j];

    for(int i=0;i<4;i++)
        printf("%d ", aa[i]);
}
*/

/*
int main()
{
    int a[3][3];
    int b[3][3];
    int valor;

    int i, j;


    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        do {
        printf("informe numero da matriz A : ");
        scanf("%d", &valor);
        if (valor % 3 != 0 && valor % 4 != 0)
            printf("O numero precisa ser divisivel por 3 ou 4.\n");
        } while (valor % 3 != 0  && valor % 4 != 0);

        a[i][j] = valor;
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        do {
        printf("informe numero da matriz B : ");
        scanf("%d", &valor);
        if (valor % 5 != 0 && valor % 6 != 0)
            printf("O numero precisa ser divisivel por 5 ou 6.\n");
        } while (valor % 5 != 0  && valor % 6 != 0);

        b[i][j] = valor;
    }
        for(int i=0;i<3;i++){
        printf("\n");
        for (int j=0; j<3; j++)
            printf("%d ", a[i][j]);
    }
    printf("\n");
    printf("\n");
        for(int i=0;i<3;i++){
        printf("\n");
        for (int j=0; j<3; j++)
            printf("%d ", b[i][j]);
    }
}
*/


int main()
{
    int a[4][4];
    int i, j, somaA=0, somaB=0, somaC=0, somaD=0, somaE=0, somaF=0;

    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
        {
            printf("informe numero da matriz : ");
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            // a) Diagonal principal
            if (i == j) {
                somaA += a[i][j];
            }

            // b) Diagonal secundária
            if (i + j == 3) {
                somaB += a[i][j];
            }

            // c) Acima da diagonal principal
            if (j > i) {
                somaC += a[i][j];
            }

            // d) Abaixo da diagonal principal
            if (i > j) {
                somaD += a[i][j];
            }

            // e) Acima da diagonal secundária
            if (i + j < 3) {
                somaE += a[i][j];
            }

            // f) Abaixo da diagonal secundária
            if (i + j > 3) {
                somaF += a[i][j];
            }
        }
    }
    printf("\nSoma diagonal prin %d",somaA);
    printf("\nSoma diagonal sec %d",somaB);
    printf("\nSoma diagonal acima prin %d",somaC);
    printf("\nSoma diagonal abaixo prin %d",somaD);
    printf("\nSoma diagonal acima sec %d",somaE);
    printf("\nSoma diagonal abaixo sec %d",somaF);
}


/*
int main() 
{
    int a[3][3];
    int par = 0, impar = 0, somaP = 0, somaI = 0;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero : ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (a[i][j] % 2 == 0) {                         // Verifica se o número é par
                printf("PAR na posicao [%d][%d] : %d\n", i, j, a[i][j]);
                par++;                                                      // Incrementa o contador de números pares
                somaP += a[i][j];                                           // Acumula a soma dos números pares
            }
            else {
                printf("IMPAR na posicao [%d][%d] : %d\n", i, j, a[i][j]);
                impar++;                                                    // Incrementa o contador de números ímpares
                somaI += a[i][j];                                           // Acumula a soma dos números ímpares
            }
        }
    }

    printf("\ntotal de numeros pares: %d\n", par);
    printf("total de numeros impares: %d\n", impar);

    printf("\nsoma dos numeros pares: %d\n", somaP);
    printf("soma dos numeros impares: %d\n", somaI);
}
*/


/*
int main()
{
    int a[3][3];
    int num, primo = 1, k;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero : ");
        scanf("%d", &a[i][j]);
    }

        
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
            if (a[i][j] <= 0)
                primo = 0;
            else
            {
                    primo = 1; // Assume que o número é primo
                    for (k = 2; k <= a[i][j] / 2; k++) {
                        if (a[i][j] % k == 0) {
                            primo = 0; // Encontrou um divisor, não é primo
                            break;
                        }
                    }
                    if (primo == 1)
                printf("numero %d da posicao [%d][%d] eh primo\n", a[i][j], i, j);
                    else
                printf("numero %d da posicao [%d][%d] nao eh primo\n", a[i][j], i, j);
            }
        }
}
*/


/*
int main()
{
    int a[3][3];
    int fat = 1;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero : ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
            fat = 1;
            for (int k = 1; k <= a[i][j]; k++) {
                fat *= k;
            }
            printf("fatorial de %d da posicao [%d][%d] eh %d\n", a[i][j], i, j, fat);
        }
}
*/

/*
int main()
{
    int a[3][3];
    int primo = 1, k;
    int maior, fat;

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
        printf("informe numero : ");
        scanf("%d", &a[i][j]);
    }

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++) {
            if (a[i][j] <= 1)
                primo = 0;
            else
            {
                    primo = 1; // Assume que o número é primo
                    for (k = 2; k <= a[i][j] / 2; k++) {
                        if (a[i][j] % k == 0) {
                            primo = 0; // Encontrou um divisor, não é primo
                            break;
                        }
                    }
                    if (primo == 1)
                printf("numero %d da posicao [%d][%d] eh primo\n", a[i][j], i, j);
            }
        }

        printf("\n");
        printf("\n");

        maior = a[0][0];
        fat = 1;

        for (int i=0; i<3; i++)
            for (int j=0; j<3; j++) {
                if (i == j) {
                    if (a[i][j] > maior) {
                        maior = a[i][j];
                    }
                }
            }
        
        for (int k = 1; k <= maior; k++) 
                fat *= k;
            
        printf("o maior numero da diagonal principal fatorial eh: %d\n", fat);
}
        */