#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


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

int main()                               // corrigido e funcionando corretamente
{
    int v1, v2, v3;

    printf("informe o primeiro valor:");
    scanf("%d",&v1);
    printf("informe o segundo valor:");
    scanf("%d",&v2);
    printf("informe o terceiro valor:");
    scanf("%d",&v3);


    if  (v1 > v2 && v1 > v3)
        printf("valor mais alto eh %d", v1);
    else
        if (v2 > v1 && v2 > v3)
            printf("valor mais alto eh %d", v2);
        else
            if (v3 > v1 && v3 > v2)
                printf("valor mais alto eh %d", v3);
            else
                printf("valores iguais");
}

*/



/*

int main()                 // corrigir um detalhe no if

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

}

*/


/*

int main()
{
    int a;
    printf("informe o valor:");
    scanf("%d",&a);

    if (a % 2 == 0)
        printf("%d eh par",a);
    else
        printf("%d eh impar",a);
}

*/

/*
int main()                                                          
{
    float altura1, peso1, altura2, peso2;
    char nome1[50];
    char nome2[50];

    printf("informe o nome da primeira pessoa:");               
    gets(nome1);
    printf("informe o peso da segunda pessoa:");
    gets(nome2);
    printf("\ninforme a altura (em centimetros) da primeira pessoa:");
    scanf("%f",&altura1);
    printf("informe o peso da primeira pessoa:");
    scanf("%f",&peso1);
    printf("\ninforme a altura (em centimetros) da segunda pessoa:");        
    scanf("%f",&altura2);
    printf("informe o peso da segunda pessoa:");
    scanf("%f",&peso2);

    if (peso1 > peso2)
        printf("\n%s eh mais pesado(a) que %s",nome1,nome2);
    else
        if (peso2 > peso1)
            printf("\n%s eh mais pesado(a) que %s",nome2,nome1);
        else
            if (peso1 == peso2)
            printf("\n%s e %s tem o mesmo peso",nome1,nome2);

    if (altura1 > altura2)
        printf("\n%s eh mais alto(a) que %s",nome1,nome2);
    else
        if (altura2 > altura1)
            printf("\n%s eh mais alto(a) que %s",nome2,nome1);
        else
            if (altura1 == altura2)
            printf("\n%s e %s tem a mesma altura",nome1,nome2);

}
*/


/*

main()
{
    int codigo;

    printf("Informe codigo: ");
    scanf("%d", &codigo);
    if (codigo == 1)
    printf("banana");
    else
        if (codigo == 2)
        printf("maca");
        else
            if (codigo == 3)
            printf("laranja");
            else
                if (codigo == 4)
                printf("abacate");
                else
                    if (codigo == 5)
                    printf("melancia");
                    else
                        if (codigo == 6)
                        printf("abacaxi");
                        else
                            printf("nao ha produtos com esse codigo");


}

*/


int main()

{
    float sald, vd, vr;
    int tpdr;
    char nome[60];

    printf("informe o nome: ");
    gets(nome);
    printf("Informe seu saldo: ");
    scanf("%f", &sald);
    printf("\n\nSelecione o tipo de retirada!\nDepositar = 1\nRetirar == 2\n\n");
    scanf("%d", &tpdr);

    if (tpdr == 2)
    {
        printf("\ninforme o valor que deseja Retirar : ");
        scanf("%f", &vr);

        sald = sald - vr;
        scanf("%f", &sald);

        if (sald < 0)
        {
            printf("\nVoce nao possui saldo suficiente para realizar a retirada de %.2f!", vr);
        }
        else 
            printf("Seu saldo final eh %.2f!\nValor Retirado = %.2f" ,sald, vr);
            setbuf(stdin, NULL);
        
    }

    else
        if (tpdr == 1)
        {
            printf("\ninforme o valor que deseja Depositar : ");
            scanf("%f", &vd);

            sald = sald + vd;
            scanf("%f", &sald);

            printf("Seu saldo final eh %.2f!", sald);
            printf("\nValor Depositado = %.2f!", vd, sald);
        }
}

