#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

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



int main()
{
    int a[5], b[5], c[5];
    int i = 0, fatorial, n;

}