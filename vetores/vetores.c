#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

/*
int main()
{
    int a[5];
    int i;

    for (i=0; i < 5; i++) {
        printf("informe um numero:");
        scanf("%d",&a[i]);
    }
        for (i=0; i<5; i++) {
            printf("\n%d",a[i]);
        }
}
*/


/*
int main   ()
{
    int a[5],b[5];
    int i;

    for (i=0; i<5; i++)
    {
        printf("informe um numero:");
        scanf("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        b[i] = a[i] * 5;
    }
    for (i=0; i<5; i++)
    {
        printf("\n%d",b[i]);
    }
}
*/

/*
int main()
{
    int nota[5];
    int i;
    float media, soma = 0;

    for (i=0; i<5; i++) {
        printf("informe nota : ");
        scanf("%d", &nota[i]);
        soma = soma + nota[i];
    }

    media = soma / 5;

    printf("Media das notas eh %.2f", media);
    printf("\nNotas acima da media : ");

    for(i=0; i<5; i++){
        if (nota[i] > media)
            printf("\n%d", nota[i]);
    }
}
*/


/*
int main()
{
    int nota[5];
    int i = 0;
    char nome[5][50];
    float media, soma = 0;

    for (i=0; i<5; i++) {
        printf("\ninforme nota : ");
        scanf("%d", &nota[i]);
        soma = soma + nota[i];

        printf("informe nome : ");
        scanf("%s", nome[i]);
    }

    media = soma / 5;

    printf("Media das notas eh %.2f", media);
    printf("\nNotas acima da media : ");

    for(i=0; i<5; i++){
        if (nota[i] > media)
            printf("\n%s com nota %d", nome[i], nota[i]);
    }
}
*/

/*
int main()
{
    int a[5], b[5], c[5];
    int i = 0;

    for (i=0; i<5; i++) 
    {
        printf("\ninforme valor do vetor A : ");
        scanf("%d", &a[i]);

        printf("informe valor do vetor B : ");
        scanf("%d", &b[i]);

        c[i] = a[i] + b[i];
    }
    printf("\n%d", c[0] + c[1] + c[2] + c[3] + c[4]);
}
*/


/*
int main()
{
    int a[5], b[5], c[5];
    int i = 0, fatorial, n;

    for (i=0; i<5; i++) 
    {
        printf("\ninforme valor : ");
        scanf("%d", &a[i]);

        n = a[i];
        for (fatorial = 1; n > 1; n--)
            fatorial = fatorial * n;
        b[i] = fatorial;
    }

    for(i=0; i<5; i++) {
    printf("\n%d - %d", a[i], b[i]);
    }
}
*/


/*
int main()
{
    int a[5], b[5], c[10];
    int i = 0;


    for (i=0; i<5; i++) 
    {
        printf("\ninforme valor : ");
        scanf("%d", &a[i]);

        printf("informe valor : ");
        scanf("%d", &b[i]);
    }

    printf("\nVetor C : ");
    for(i=0; i<5; i++)
    {
        c[i] = a[i];
        c[i+5] = b[i];
        printf("\n%d", c[i]);
        printf("\n%d", c[i+5]);
    }
}
*/

/*
int main()
{
    
    int a[5], b[5], c[5], d[15];
    int i = 0;


    for (i=0; i<5; i++) 
    {
        printf("\ninforme valor : ");
        scanf("%d", &a[i]);

        printf("informe valor : ");
        scanf("%d", &b[i]);

        printf("Informe valor : ");
        scanf("%d", &c[i]);
    }

    printf("\nVetor D : ");
    for(i=0; i<5; i++)
    {
        d[i] = a[i];
        d[i+5] = b[i];
        d[i+10] = c[i];
        printf("\n%d", d[i]);
        printf("\n%d", d[i+5]);
        printf("\n%d", d[i+10]);
    }
}
*/

/*
int main()
{
    int a[5], b[10], c[15];
    int i = 0;

    for (i=0; i<5; i++) 
    {
        printf("informe valor A : ");
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    for (i=0; i<10; i++) 
    {
        printf("informe valor B : ");
        scanf("%d", &b[i]);
        c[i+5] = b[i];
    }

    printf("\nVetor C : ");
    
    for(i=0; i<15; i++)
    {
        printf("\n%d", c[i]);
    }
}
*/


/*
int main()
{
    int a[5], b[5];
    int i = 0;

    for (i=0; i<5; i++) 
    {
        printf("informe valor A : ");
        scanf("%d", &a[i]);
        // b[4 - i] = a[i];
    }

    b[0] = a[4];
    b[1] = a[3];
    b[2] = a[2];
    b[3] = a[1];
    b[4] = a[0];

    // ou utilizar no propio for b[4 - i] = a[i];

    printf("valores invertidos : ");

    for(i=0; i<5; i++)  
    {
        printf("\n%d", b[i]);
    }
}
*/


/*
int main()
{
    int a[5], b[5];
    int i = 0, pos = 0;

    for (i=0; i<5; i++) 
    {
        printf("informe valor : ");
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)  
    {
        b[i] = a[i];

        if (b[i] >= 1) {
            printf("\n%d", b[i]);
            pos = 1;
        }          
    }

    if (pos == 0)
        printf("\ntodos numeros negativos ou nulos");
}
*/

/*
int main()
{
    int a[10], b[10], c[10];
    int i = 0;

    for (i=0; i<10; i++) 
    {
        printf("informe valor A : ");
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++)  
    {
        if (a[i] % 2 == 0) {
            b[i] = a[i];
            printf("\nnumero par = %d", b[i]);
        }
        else {
            c[i] = a[i];
            printf("\nnumero impar = %d", c[i]);
        }
    }
}
*/

/*
int main()
{
    int a[10];
    int i = 0, maior, posicao;

    for (i=0; i<10; i++) 
    {
        printf("informe valor : ");
        scanf("%d", &a[i]);
    }

    maior = a[0];
    
    for (i=0; i<10; i++)  
    {
        if (a[i] > maior) {
            maior = a[i];
            posicao = i;
        }
    }
    printf("\nmaior numero = %d", maior);
    printf("\nposicao do maior numero = %d", posicao + 1);
}
*/


/*
int main() {
    float temp[5];
    float menor, maior, soma = 0, media;
    int i, dias_abaixo = 0;

    for (i = 0; i < 5; i++) 
    {
        printf("Informe a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma = soma + temp[i];

        if (i == 0) 
        {
            menor = temp[0];
            maior = temp[0];
        } 
        else 
        {
            if (temp[i] < menor) {
                menor = temp[i];
            }
            if (temp[i] > maior) {
                maior = temp[i];
            }
        }
    }

    media = soma / 5;

    for (i = 0; i < 5; i++) 
    {
        if (temp[i] < media) 
        {
            dias_abaixo++;
        }
    }
    printf("\n");
    printf("Menor temperatura do ano: %.2f\n", menor);
    printf("Maior temperatura do ano: %.2f\n", maior);
    printf("Temperatura media anual: %.2f\n", media);
    printf("Numero de dias abaixo da media: %d\n", dias_abaixo);
}
*/


/*
int main()
{
    int a[10], qlqr, nqlqr = 0;

    for (int i = 0; i < 10; i++) 
    {
        printf("Informe um valor : ");
        scanf("%d", &a[i]);
    }

    printf("\nInforme numero qualquer : ");
    scanf("%d", &qlqr);

    for (int i = 0; i < 10; i++) 
    {
        if (a[i] == qlqr) 
        {
            printf("\nO numero %d esta na posicao %d", qlqr, i + 1);
            nqlqr = 1;
        }
    }

    if (nqlqr == 0) 
    {
        printf("\nsem numeros iguais a %d", qlqr);
    }
}
*/


//                                                          masterizado


int main() 
{

    float temp[365];
    float menor, maior, soma = 0, media;
    int i, dias_abaixo = 0;

    srand(time(NULL)); 

    for (i = 0; i < 365; i++) {
        temp[i] = 5.0 + ((float)rand() / RAND_MAX) * (39.0 - 5.0); 
        printf("Dia %d: %.2f graus\n", i + 1, temp[i]);

        soma = soma + temp[i];

        if (i == 0) 
        {
            menor = temp[0];
            maior = temp[0];
        } 
        else 
        {
            if (temp[i] < menor) {
                menor = temp[i];
            }
            if (temp[i] > maior) {
                maior = temp[i];
            }
        }
    }

    media = soma / 365;

    for (i = 0; i < 365; i++) 
    {
        if (temp[i] < media) 
        {
            dias_abaixo++;
        }
    }
    printf("\n");
    printf("Menor temperatura do ano: %.2f\n", menor);
    printf("Maior temperatura do ano: %.2f\n", maior);
    printf("Temperatura media anual: %.2f\n", media);
    printf("Numero de dias abaixo da media: %d\n", dias_abaixo);
}