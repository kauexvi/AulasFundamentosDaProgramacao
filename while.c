#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


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

/*
int main()
{
    int i, num, fatorial, numF, quantdois;
    i = 1;

    printf("informe quantidade de numeros : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("\nInforme numero : ");
        scanf("%d", &numF);
        if (numF < 0)
        {
            printf("invalido");
        }
        else
        {
            fatorial = 1;
            quantdois = 1;
            setbuf(stdin, NULL);
            while (quantdois <= numF)
            {
                fatorial = fatorial * quantdois;
                quantdois++;
            }
            printf("fatorial de %d = %d", numF, fatorial);
            setbuf(stdin, NULL);
        }
        i++;
    }
}
*/

/*
int main()
{
    int num, intv025, intv2650, intv5175, intv76100, fora;

    intv025 = 0;
    intv2650 = 0;
    intv5175
     = 0;
    intv76100 = 0;
    fora = 0;

    printf("informe numeros(negativo para encerrar) : ");
    scanf("%d", &num);

    while (1)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        if (num < 26)
            intv025++;

        else
            if (num < 51)
            {
                intv2650++;
            }
            else
                if (num < 76)
                {
                    intv76100++;
                }
                else
                    if (num > 100)
                    {
                        fora++;
                    }
    }

    printf("Intervalo entre 0 e 25 = %d", intv025);
    printf("\nIntervalo entre 26 e 50 = %d", intv2650);
    printf("\nIntervalo entre 51 e 75 = %d", intv5175);
    printf("\nIntervalo entre 76 e 100 = %d", intv76100);
    printf("\nIntervalo maior que 100 = %d", fora);
}
*/


/*
int main()
{
    float salario, somaS, mediaS;
    int i, idade, idadeM, idadeMN, qtdM, maior, menor, i2;
    char genero[20];

    somaS = 0;
    qtdM = 0;
    i = 0;
    idadeM = 0;
    idadeMN = 0;

    while (1)
    {
        printf("\ninforme idade (ou 0 para sair) : ");
        scanf("%d", &idade);

        if (idade <= 0)
        {
            break;
        }
        if (idadeM == 0)
        {
            idadeM = idade;
            idadeMN = idade;
        }
        else
        {
            if (idade > idadeM)
                {
                    idadeM = idade;
                }
            if (idade < idadeMN)
                {
                    idadeMN = idade;
                }
        }

            printf("informe salario : ");
            scanf("%f", &salario);

            if (salario > 0)
            {
                somaS = salario + somaS;

                printf("informe sexo (masculino ou feminino) : ");
                scanf("%s", genero);

                if (salario < 1000 && strcmp(genero, "feminino") == 0)
                    qtdM = qtdM + 1;
                else
                    if (strcmp(genero, "masculino") == 0);
                    qtdM = qtdM;
            }
            else
            {
                printf("dado invalido ou negativo!");
                break;
            }
        i++;
        }
    mediaS = somaS / i;

    printf("\nMedia de salario do grupo eh : %.2f", mediaS);
    printf("\nMaior de idade dos alunos eh %d, e menor eh : %d", idadeM, idadeMN);
    printf("\nQuantidade de mulheres com salario ate 1000 reais eh %d", qtdM);
}
*/


/*
int main()
{
    char sexo[20], cordocabelo[20], cordosolhos[20];
    int idade, maioridade;
    int i, contFLV, primeiro;

    contFLV == 0;
    i == 0;
    primeiro == 1;

    while (1)
    {
        printf("Informe sexo (masculino/feminino) : ");
        scanf("%s", sexo);

        if (strcmp(sexo, "fim") == 0){
            break;
        }

        printf("\nInforme cor do cabelo\n\nL - Loiro\nC - Castanho\nP - Preto\n\nDigite : ");
        scanf("%s", cordocabelo);
        printf("\nInforme idade : ");
        scanf("%d", &idade);
        printf("\nInforme cor dos olhos\n\nA - Azuis\nC - Castanho\nV - Verde\n\nDigite : ");
        scanf("%s", cordosolhos);

        if (primeiro || idade > maioridade)
        {
            maioridade = idade;
            primeiro = 0;
        }

        if (strcmp(sexo, "feminino") == 0 && strcmp(cordocabelo, "L") == 0 && strcmp(cordosolhos, "V") == 0 && idade <= 35 && idade >= 18)
            contFLV++;

    i++;
    }
    printf("\nNumeros de mulheres com tenham olhos verdes e cabelos louros e tenham entre 18 e 35 anos : %d", contFLV);
    printf("\nMaior idade dos habitantes: %d anos\n", maioridade);
}
*/


/*
int main()
{
    int i, n1, n2;
    i = 1;
    float media, medialuno, soma = 0;

    while (i <= 5)
    {
        printf("\n\nInforme primeira Nota do Aluno %d : ", i);
        scanf("%d", &n1);
        printf("Informe segunda Nota do Aluno %d : ", i);
        scanf("%d", &n2);

        if (n1 < 0 || n2 < 0)
            printf("invalido");

        medialuno = (n1 + n2) / 2;

        printf("\nMedia do Aluno %d eh de %.2f", i, medialuno);

        if (medialuno >= 7)
            printf("\nAprovado!");
        else
            printf("\nReprovado");
        i++;
        soma = soma + medialuno;
    }
    media = soma / 5;

    printf("\n\n\nmedia final eh %.2f", media);
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
        printf("\n%d + %d = %d", cont, acumulador, cont + acumulador);
        acumulador = acumulador + cont;
        cont++;
    }
    printf("\nO somatorio eh: %d", acumulador);
}
*/

/*
int main()
{
    float e, n;
    e = 1;
    int fatorial, i;
    fatorial = 1;
    i = 1;
    
    printf("informe numero : ");
    scanf("%f", &n);

    while (i <= n)
    {
        fatorial = fatorial * i;
        e = e + (1.0 / fatorial);
        i++;
    }
    printf("\nO valor de E calculado eh: %.5f", e);
}
*/

/*
int main()
{
    int alunos, idade, soma2, cont, contA, contI, mediaI;
    float altura, mediaA, soma1;

    alunos = 5;
    cont = 1;
    soma1 = 0;
    soma2 = 0;
    contA = 0;
    contI = 0;

    while (cont <= alunos)
    {
        printf("\nInforme idade do aluno %d : ", cont);
        scanf("%d", &idade);
        printf("Informe altura do aluno %d : ", cont);
        scanf("%f", &altura);
        
    if (idade > 20)
        {
            soma1 = altura + soma1;
            contA++;
        }   

    if (altura < 1.70)
        {
            soma2 = idade + soma2;
            contI++;
        }
        cont++;
    }

    if (contA == 0)
        printf("\nNao ha alunos com mais de 20 anos");
    else
        {
            mediaA = soma1 / contA;
            printf("\nMedia das alturas dos alunos com mais de 20 anos : %.2f", mediaA);
        }

    if (contI == 0)
        printf("\nNao ha alunos com menos de 1,70 de altura");
    else
        {
            mediaI = soma2 / contI;
            printf("\nIdade media dos alunos com menos de 1,70 de altura : %d", mediaI);
        }

    return 0;
}
*/


