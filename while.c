#include <stdio.h>
#include <math.h>


//                                                      tabuada

/*
int main()
{
    int num, i;
    i = 1;
    printf("informe numero para gerar a tabuada : ");
    scanf("%d", &num);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", i, num, i * num);
        i++;
    }
}
*/


//                                               media de altura e idade

/*
int main()
{
    float altura, somaA, mediaA;
    int idade, i, somaI, mediaI;

    i = 1;
    somaI = 0;
    somaA = 0;

    while (i <= 5)
    {
        printf("informe altura do aluno em centimetros : ");
        scanf("%f", &altura);
        printf("informe idade do aluno em anos : ");
        scanf("%d", &idade);

        somaI = somaI + idade;
        somaA = somaA + altura;

        i++;
    }

    mediaI = somaI / 5;
    mediaA = somaA / 5;

    printf("\nMedia de altura dos alunos eh : %.2f", mediaA);
    printf("\nMedia de idade dos alunos eh %d", mediaI);
}

*/


//                                     conjunto numero (descobrir o maior e menor)

/*
int main()
{
    int num, i, maior, menor;
    i = 1;

    while (i <= 5)
    {
        printf("informe numero : ");
        scanf("%d", &num);

        if (i == 1)
        {
            num = maior;
            num = menor;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
            if (num < menor)
            {
                menor = num;
            }
        }
        i++;
    }
    
    printf("menor eh : %d", menor);
    printf("\nmaior eh : %d", maior);
}

*/




//                                                        fibonacci
/*
long int main()
{
    long int i, t1, t2, proximo; 
    i = 3;
    t1 = 1;
    t2 = 1;
    
    printf("1\n1\n");

    while (i <= 20)
    {
        proximo = t1 + t2;
        printf("%d\n", proximo + t2);
        t1 = t2;
        t2 = proximo;
        i++;
    }
}
*/



//                                              calcular s
/*
int main()
{
    int i = 1;
    float s = 0;
    char flag = '+';

    while (i <= 10)
    {
        switch (flag)
        {
        case '+':
            s = s + ((float)i / (i * i));
            flag = '-';
            break;
        case '-':
            s = s - ((float)i / (i * i));
            flag = '+';
            break;
        }
    i++;
    }
        printf("O valor final da serie S eh: %.4f\n", s);

}
*/

/*
long int main()
{
    long int cont, num, acumulador; 
    cont = 1;
    acumulador = 1;

    printf("informe numero : ");
    scanf("%d", &num);

    while (cont <= num)
    {
        printf("\n%d x %d = %d", cont, acumulador, cont * acumulador);
        acumulador = acumulador * cont;
        cont++;
    }
    printf("\nO fatorial eh: %d", acumulador);
}
*/





