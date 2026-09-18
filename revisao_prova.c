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



/*
                                                             // ano dos signos do zodiaco //
int main()
{
    int dia, mes;

    printf("Informe o dia do seu aniversario : ");
    scanf("%d", &dia);
    printf("Informe o mes do seu aniversario : ");
    scanf("%d", &mes);

    if (mes == 1 && dia >= 21 && dia < 32 || mes == 2 && dia <= 19 && dia < 29)
    
        printf("Voce e do seguinte signo do zodiaco: Aquario!");

    else 
        if (mes == 2 && dia >= 20 && dia < 29 || mes == 3 && dia <= 20 && dia < 32)
        
            printf("Voce e do seguinte signo do zodiaco: Peixes!");

        else
            if (mes == 3 && dia >= 21 && dia < 32 || mes == 4 && dia <= 20 && dia < 31)
            
                printf("Voce e do seguinte signo do zodiaco: Aries!");
            
            else
                if (mes == 4 && dia >= 21 && dia < 31|| mes == 5 && dia <= 20 && dia < 32)
                
                    printf("Voce e do seguinte signo do zodiaco: Touro!");
                
                else
                    if (mes == 5 && dia >= 21 && dia < 32 || mes == 6 && dia <= 20 && dia < 31)
                    
                        printf("Voce e do seguinte signo do zodiaco: Gemeos!");
                    
                    else
                        if (mes == 6 && dia >= 21 && dia < 31 || mes == 7 && dia <= 21 && dia < 32)
                        
                            printf("Voce e do seguinte signo do zodiaco: Cancer!");
                        
                        else
                            if (mes == 7 && dia >= 22 && dia < 32 || mes == 8 && dia <= 22 && dia < 32)
                            
                                printf("Voce e do seguinte signo do zodiaco: Leao!");
                            
                            else
                                if (mes == 8 && dia >= 23 && dia < 32 || mes == 9 && dia <= 22 && dia < 31)
                                
                                    printf("Voce e do seguinte signo do zodiaco: Virgem!");
                                
                                else
                                    if (mes == 9 && dia >= 23 && dia < 31 || mes == 10 && dia <= 22 && dia < 32)
                                    
                                        printf("Voce e do seguinte signo do zodiaco: Libra!");
                                    
                                    else
                                        if (mes == 10 && dia >= 23 && dia < 32 || mes == 11 && dia <= 21 && dia < 31)
                                        
                                            printf("Voce e do seguinte signo do zodiaco: Escorpiao!");
                                        
                                        else
                                            if (mes == 11 && dia >= 22 && dia < 31 || mes == 12 && dia <= 21 && dia < 32)
                                            
                                                printf("Voce e do seguinte signo do zodiaco: Sagitario!");
                                            
                                            else
                                                if (mes == 12 && dia >= 22 && dia < 32 || mes == 1 && dia <=20 && dia < 32)
                                                
                                                    printf("Voce e do seguinte signo do zodiaco: Capricornio!");
                                                
                                                else
                                                    printf("Data invalida!");

    
}*/

/*
int main()
{
    int vc, vp, cem, dez, um, troco;

    printf("Informe o valor da compra : ");
    scanf("%d", &vc);

    printf("Informe o valor a ser pago em notas : ");
    scanf("%d", &vp);

    if (vp > vc) 
    {
        troco = vp - vc;

        cem = troco / 100;
        troco = troco % 100;
        dez = troco / 10;
        troco = troco % 10;
        um = troco / 1;

        printf("quantidade de notas de 100 para o troco : %d\nquantidade de notas de 10 para o troco : %d\nquantidade de moedas de 1 para o troco : %d\n", cem, dez, um);
    }
    
    else
    {
        printf("valor insuficiente para pagar o valor!");
    }
    
}

*/

int main()
{
    float salario, final;

    printf("informe salario do trabalhador : ");
    scanf("%f", &salario);

    if (salario < 1500)
    { 
        final = salario * 1.15;
        printf("salario final = %2.f", final);
    }   
    else
        if (salario >= 1500 && salario < 1750)
        {
        final = salario * 1.12;
        printf("salario final = %2.f", final);
        }   
        else
            if (salario >= 1750 && salario < 2000)
            {
            final = salario * 1.10;
            printf("salario final = %2.f", final);
            }    
            else 
                if (salario >= 2000 && salario < 3000)
                {
                final = salario * 1.07;
                printf("salario final = %2.f", final);
                }    
                else 
                {
                    final = salario * 1.05;
                    printf("salario final = %2.f", final);
                }
}
