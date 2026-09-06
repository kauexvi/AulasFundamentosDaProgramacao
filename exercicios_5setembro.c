#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
                                            // algoritmo conta bancaria //
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
        else 
            printf("opcao invalida");
        
}
*/

/* 
                                            // algoritmo peso ideal //          
int main()

{
    char sexo[20];
    float altura;

    printf("Informe seu sexo (masculino/feminino) : ");
    gets(sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if (strcmp(sexo, "masculino") == 0)
    {
        float peso_idealmasc = (72.7 * altura) - 58;
        printf("Seu peso ideal eh: %.2f", peso_idealmasc);
    }
    else
        if (strcmp(sexo, "feminino") == 0)
        {
            float peso_idealfem = (62.1 * altura) - 44.7;
            printf("Seu peso ideal eh: %.2f", peso_idealfem);
        }
        else
            printf("Sexo invalido");

}
*/

/*  
                                            // algoritmo preco macas //                                     
int main()
{
    float qdm;
    printf("Informe a quantidade de macas : ");
    scanf("%f", &qdm);

    if (qdm < 12)
    {
        float preco = qdm * 1.30;
        printf("O valor a ser pago eh: %.2f", preco);
    }
    else
    {
        float preco = qdm * 1.00;
        printf("O valor a ser pago eh: %.2f", preco);
    }
}
*/

/*
                                            // algoritmo imprima F1, F2, F3 //
int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num <= 10)
    {
        printf("F1");
    }
    else
        if (num > 10 && num <= 100)
        {
            printf("F2");
        }
        else
            if (num >= 100)
            {
                printf("F3");
            }
}
*/


/*

int main()                                          // algoritmo ordem crescente //
{
    int n1, n2, n3;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 <= n2 && n2 <= n3)
        printf("ordem crescente = %d, %d, %d", n1, n2, n3); 
    else
        if (n1 <= n3 && n3 <= n2)
            printf("ordem crescente = %d, %d, %d", n1, n3, n2); 
        else 
            if (n2 <= n1 && n1 <= n3)
                printf("ordem crescente = %d, %d, %d", n2, n1, n3);
            else
                if (n2 <= n3 && n3 <= n1)
                    printf("ordem crescente = %d, %d, %d", n2, n3, n1);
                else
                    if (n3 <= n1 && n2 <= n1) 
                        printf("ordem crescente = %d, %d, %d", n3, n2, n1);
                    else
                        if (n3 <= n1 && n1 <= n2)
                            printf("ordem crescente = %d, %d, %d", n3, n1, n2); 

}

*/


/*
int main()                          // algoritmo media ponderada //
{   
    float p1, p2, p3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &p1);
    printf("Informe a segunda nota: ");
    scanf("%f", &p2);
    printf("Informe a terceira nota: \n");
    scanf("%f", &p3);

    media = (p1 * 2 + p2 * 3 + p3 * 5) / 10;

    if (media >= 7)
    
        printf("Aluno aprovado!");
    
    else
        printf("Aluno reprovado!");
    
    
    printf("\nA media das notas eh: %.2f", media);
}
*/

/*                                                                  // algoritmo media notas & verificar se algum esta abaixo de 5 //
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

/*                                                                  // algoritmo comissao de vendas //
int main()
{
    char nvend[60];
    float vvend, comissao;

    printf("Informe o nome do vendedor: ");
    gets(nvend);
    printf("Informe o valor total da venda: ");
    scanf("%f", &vvend);

    if (vvend > 50000)
    {
        comissao = vvend * 0.12;
        printf("O vendedor %s realizou uma venda de %.2f e foi contemplado com uma comissao de: %.2f", nvend, vvend, comissao);
    }
    else 
        if (vvend >= 30000 && vvend <= 50000)
        {
            comissao = vvend * 0.095;
            printf("O vendedor %s realizou uma venda de %.2f e foi contemplado com uma comissao de: %.2f", nvend, vvend, comissao);
        }
        else
            if (vvend < 30000)
            {
                comissao = vvend * 0.07;
                printf("O vendedor %s realizou uma venda de %.2f e foi contemplado com uma comissao de: %.2f", nvend, vvend, comissao);
            }
}
*/


/*                                                          // algoritmo soma de dois numeros e comparar com o terceiro //
int main()
{
    int a, b, c;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    printf("Informe o terceiro numero: ");
    scanf("%d", &c);

    if (a + b < c)
    {
        printf("A soma do primeiro e segundo numero eh menor que o terceiro numero");
    }
    else
        if (a + b > c)
        {
            printf("A soma do primeiro e segundo numero eh maior que o terceiro numero");
        }
        else
            if (a + b == c)
            {
                printf("A soma do primeiro e segundo numero eh igual ao terceiro numero");
            }
}
*/

/*                                                                  // algoritmo nota do aluno //
int main()
{
    int nota;
    char nome[60];

    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe sua nota: ");
    scanf("%d", &nota);

    if (nota > 0 && nota <= 49)
    {
        printf("O aluno %s possui a nota insuficiente", nome);
    }
    else
        if (nota >= 50 && nota <= 64)
        {
            printf("O aluno %s possui a nota regular", nome);
        }
        else
            if (nota >= 65 && nota <= 84)
            {
                printf("O aluno %s possui a nota bom", nome);
            }
            else
                if (nota >= 85 && nota <= 100)
                {
                    printf("O aluno %s possui a nota otima", nome);
                }
                else
                    printf("Nota invalida");

}
*/
