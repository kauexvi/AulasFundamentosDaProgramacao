#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
main()
{
    float n1, n2, n3, media;
    char nome[50];


    printf("informe o nome:");
    gets(nome);

    printf("Informe a primeira nota : ");
    scanf("%f",&n1);

    printf("Informe a segunda nota : ");
    scanf("%f",&n2);

    printf("Informe a segunda nota : ");
    scanf("%f",&n3);

    media = (n1 + n2 + n3) / 3;

    printf("a media eh = %.1f",media);
    if (media >= 7)
        printf("\naluno %s aprovado",nome);
    else
        printf("\naluno %s reprovado",nome);

    system(0);
}

*/

/*

int main()
{
    int v1, v2;

    printf("informe o primeiro valor:");
    scanf("%d",&v1);
    setbuf(stdin, NULL);
    printf("informe segundo valor:");
    scanf("d%",&v2);

    int strcmp(v1, v2);
    setbuf(stdin, NULL);
    if  (v1 > v2)
        printf("valor mais alto eh %d", v1);
    else
        printf("valor mais alto eh %d", v2);
}

*/

/*
int main()
{
    int v1, v2, v3;

    printf("informe o primeiro valor:");
    scanf("%d",&v1);
    setbuf(stdin, NULL);
    printf("informe o segundo valor:");
    scanf("d%",&v2);
    setbuf(stdin, NULL);
    printf("informe o terceiro valor:");
    scanf("d%",&v3);

    int strcmp(v1, v2, v3);
    setbuf(stdin, NULL);
    if  (v1 > v2  v3)
        printf("valor mais alto eh %d", v1);
    else
        if (v2 > v1  v3)
            printf("valor mais alto eh %d", v2);
        else
            if (v3 > v1  v2)
                printf("valor mais alto eh %d", v3);
            else
                printf("valores iguais");

    return(0);

}
*/

/*
int main()
{
    int a, b;

    printf("informe o primeiro valor:");
    scanf("%d",&a);
    setbuf(stdin, NULL);
    printf("informe o segundo valor:");
    scanf("%d",&b);

    if (a % b == 0)
        printf("numeros multiplos");
    else
        printf("numeros nao sao multiplos");

    system(0);
}
*/


int main()

{
    int a;

    printf("informe o primeiro valor:");
    scanf("%d",&a);

    if (a % 2 == 0)
        printf("%d eh par",a);
    else
        printf("%d eh impar",a);
}



/*
main()                                                           // incompleto
{
    float altura1, peso1, altura2, peso2;
    char nome1[50];
    char nome2[50];

    printf("informe o nome da primeira pessoa:");               // primeira pessoa
    gets(nome1);
    printf("informe o peso da primeira pessoa:");
    scanf("%f",&peso1);
    printf("informe a altura (em centimetros) da primeira pessoa:");
    scanf("%f",&altura1);

    printf("\n\ninforme o nome da segunda pessoa pessoa:");        // segunda pessoa
    gets(nome2);
    printf("\ninforme o peso da segunda pessoa:");
    scanf("%f",&peso2);
    printf("informe a altura (em centimetros) da segunda pessoa:");
    scanf("%f",&altura2);

    if ()


}
*/