#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


/*
int main()
{
    int cont;

    for(cont=1; cont<=10; cont++)
    {
       printf(" %d",cont);
    }
}
*/


/*
int main()
{
    char letra;

    for ( ; (letra = getche()) != 'x';)
    {
        printf("letra %c", letra);
    }
}
*/



int main()
{
    float e, n;
    e = 1;
    int fatorial, i;
    fatorial = 1;


    printf("informe numero : ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
        e = e + (1.0 / fatorial);
        i++;
    }
    printf("\nO valor de E calculado eh: %.5f", e);
}


/*
int main()
{
    int cont, n, n2, n3;

    printf("informe numero : ");
    scanf("%d", &n);
    printf("informe ate que numero fazer a tabuada : ");
    scanf("%d", &n2);
    printf("informe valor inicial da tabuada : ");
    scanf("%d", &n3);


    for(cont=n3; cont<=n2; cont++)
    {
       printf("%d x %d = %d\n", n, cont, n * cont);
    }
}
*/


/*
int main()
{
    int n, i, soma = 0, ipar = 0;
    float media;

    for (i=1; i<=10; i++)
    {
        printf("informe numero : ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            soma = soma + n;
            ipar++;
        }
    }

    if (ipar > 0)
    {
        media = soma / ipar;
        printf("Media dos numeros pares informados = %.2f", media);
    }
    else
        printf("Nenhum numero par foi informado");
}
*/


/*
int main() {
    int num;
    int primo = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num <= 1)
        primo = 0;
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
            }
        }
    }

    if (primo == 1)
        printf("%d eh primo.\n", num);
    else
        printf("%d nao eh primo.\n", num);
}
*/


