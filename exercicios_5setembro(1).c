#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
int main()
{
    float sb, sl;

    printf("informe salario bruto : ");
    scanf("%f", &sb);

    sl = (sb * 0.90) * 0.95;

    printf("salario liquido apos impostos : %2.f", sl);

}
*/


/*
int main()
{
    int codigo, digitov, a, b, c, d, e;

    printf("informe o seu codigo : ");
    scanf("%d", &codigo);

    a = codigo / 10000;
    codigo = codigo % 10000;
    b = codigo / 1000;
    codigo = codigo % 1000;
    c = codigo / 100;
    codigo = codigo % 100;
    d = codigo / 10;
    e = codigo % 10;

    digitov = (6 * a + 5 * b + 4 * c + 3 * d + 2 * e) % 7;

    printf("digito eh = %d", digitov);

}
*/


/*
int main()
{
    char nome[60];
    float n1, n2, n3, media;

    printf("informe seu nome : ");
    scanf("%s", nome);
    printf("informe a nota da prova de matematica : ");
    scanf("%f", &n1);
    printf("informe a nota da prova de portugues : ");
    scanf("%f", &n2);
    printf("informe a nota da prova de conhecimentos gerais : ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7)
    {

        printf("\n\nAluno aprovado!\n");
        printf("A media das notas eh: %.2f\n", media);
    }
    else
    {
        printf("\n\nAluno reprovado!\n");
        printf("A media das notas eh: %.2f\n", media);
    }

    if (n1 <= 5 || n2 <= 5 || n3 <= 5)
    {
        printf("Voce apresentou nota abaixo de 5 em alguma das provas");
    }
    else
    {
        printf("Parabens! Voce nao apresentou nota abaixo de 5 em nenhuma das provas");
    }
}
*/


/*
int main()
{
    int num;

    printf("informe numero (1 a 10) : ");
    scanf("%d", &num);

    switch ( num )
        {
        case 1 :
            printf("\num\n");
        break;

        case 2 :
            printf("\ndois\n");
        break;

        case 3 :
            printf("\ntres\n");
        break;

        case 4 :
            printf("\nquatro\n");
        break;

        case 5 :
            printf("\ncinco\n");
        break;

        case 6 :
            printf("\nseis\n");
        break;

        case 7 :
            printf("\nsete\n");
        break;

        case 8 :
            printf("\noito\n");
        break;

        case 9 :
            printf("\nnove\n");
        break;

        case 10 :
            printf("\ndez\n");
        break;

        default :
            printf("valor errado");
    }

}
*/

/*
int main()
{
    int a, b, cal;
    int op;

    printf("informe o primeiro numero : ");
    scanf("%d", &a);

    printf("informe segundo numero : ");
    scanf("%d", &b);

    printf("\n\nEscolha uma das operacoes abaixo\n\n1- adicao\n2- subtracao\n3- divisao\n4- multiplicacao\n\nDigite a operacao desejada : ");
    scanf("%d", &op);


    switch (op)
    {
        case 1 :
            cal = a + b;
            printf("\n\nResultado da operacao : %d\n", cal);
        break;

        case 2 :
            cal = a - b;
            printf("\n\nResultado da operacao : %d\n", cal);
        break;

        case 3 :
            cal = a / b;
            printf("\n\nResultado da operacao : %d\n", cal);
        break;

        case 4 :
            cal = a * b;
            printf("\n\nResultado da operacao : %d\n", cal);
        break;

        default :
            printf("\n\ncodigo da operacao invalida\n");
        break;
    }
}
*/
