#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
// aula utilizando float

                              // questao 1 - correta

                    1) Escreva um programa em C para ler duas notas 
                          e escrever a média das notas lidas;


int main()

{
    float res, a, b;
    printf("Informe valor da primeira nota:");
    scanf("%f",&a);
    printf("Informe valor da segunda nota:");
    scanf("%f",&b);
    res = (a + b) / 2;
    printf("media final %.2f",res);

}




// ---------------------------------------------------------------------------------------------------------------------------

                                // questao 2 - (corrigida)
 
            2) Escreva um programa em C para calcular e escrever o volume de uma
                esfera de raio R, em que R é um dado fornecido pelo usuário;
                                    (4 * PI * R3 ) / 3




int main()

{
    float R, vol;
    printf("informe o raio : ");
    scanf("%f", &R);

    vol = (4 * 3.14 * pow(R, 3)) / 3;

    printf("Resultado eh : %.2f", vol);
}





// ---------------------------------------------------------------------------------------------------------------------------

                                // questao 3 - correta

            3) Escreva um algoritmo para ler nome e salario bruto de um funcionário
         calcular e escreve seu salário liquido, sendo que sobre o salario bruto temos
                8,5% de desconto de inss e 12% de desconto de imposto de renda;




int main()

{
    char fun[40];
    float sb, sl, ir, in;

    printf("Informe o nome do funcionario: ");
    fgets(fun, sizeof(fun), stdin);
    printf("Informe o salario do mesmo: ");
    scanf("%f", &sb);
    


    ir = sb * 0.085;

    in = sb * 0.12;

    sl = sb - ir - in;

    printf("Salario de %s eh de R$ %.2f",fun ,sl);

}





                                // questao 4 - (corrigida)
 
            4) Escreva um programa em C que leia 3 valores A, B e C do tipo inteiro, a
                seguir encontre o maior dos três valores e o escreva com a mensagem,
               "maior valor é:", utilize a seguinte formula --> (a + b + |a - b| ) / 2 



int main()

{
    int a, b, c, mv;
    printf("informe o primeiro valor : ");
    scanf("%d",&a);
    printf("informe o segundo valor : ");
    scanf("%d",&b);
    printf("informe o terceiro valor : ");
    scanf("%d",&c);

    mv = (a + b + abs(a - b)) / 2;

    mv = (mv + c + abs(mv - c)) / 2;
    setbuf(stdin, NULL);
    printf("o maior valor eh : %d", mv);
}

*/

/*
                                        // questao 5 - (corrigida)

            6) tendo como dados de entrada um valor com até duas casas decimais, que representa um valor monetário,
                            calcular e escreve o menor número possível de notas e moedas nas
                                        quais o valor pode ser decomposto.

                                As notas consideradas são de 100, 50, 20, 10, 5 e 2.
                            As Moedas possíveis são de 1,00 - 0,50 - 0,25 – 0,10 – 0,05 
*/

/*

int main()

{
    int valor, decimal, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, resto;

    printf("Informe o valor : ");
    scanf("%d,%d", &valor, &decimal);

    n100 = valor / 100;
    resto = valor % 100;
    n50 = resto / 50;
    resto = resto % 50;
    n20 = resto / 20;
    resto = resto % 20;
    n10 = resto / 10;
    resto = resto % 10;
    n5 = resto / 5;
    resto = resto % 5;
    n2 = resto / 2;
    resto = resto % 2;
    m1 = resto / 1;
    resto = resto % 1;


    m50 = decimal / 50;
    resto = decimal % 50;
    m25 = resto / 25;
    resto = resto % 25;
    m10 = resto / 10;
    resto = resto % 10;
    m05 = resto / 5;
    resto = resto % 5;


    printf("\no valor inteiro em notas de 100 eh : %d", n100);
    printf("\no valor inteiro em notas de 50 eh : %d", n50);
    printf("\no valor inteiro em notas de 20 eh : %d", n20);
    printf("\no valor inteiro em notas de 10 eh : %d", n10);
    printf("\no valor inteiro em notas de 5 eh : %d", n5);
    printf("\no valor inteiro em notas de 2 eh : %d", n2);
    printf("\no valor inteiro em moedas de 1 real eh : %d", m1);
    printf("\no valor inteiro em moedas de 50 centavos eh : %d", m50);
    printf("\no valor inteiro em moedas de 25 centavos eh : %d", m25);
    printf("\no valor inteiro em moedas de 10 centavos eh : %d", m10);
    printf("\no valor inteiro em moedas de 5 centavos eh : %d", m05);

}

=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
// aula utilizando float

                              // questao 1 - correta

                    1) Escreva um programa em C para ler duas notas 
                          e escrever a média das notas lidas;


int main()

{
    float res, a, b;
    printf("Informe valor da primeira nota:");
    scanf("%f",&a);
    printf("Informe valor da segunda nota:");
    scanf("%f",&b);
    res = (a + b) / 2;
    printf("media final %.2f",res);

}




// ---------------------------------------------------------------------------------------------------------------------------

                                // questao 2 - (corrigida)
 
            2) Escreva um programa em C para calcular e escrever o volume de uma
                esfera de raio R, em que R é um dado fornecido pelo usuário;
                                    (4 * PI * R3 ) / 3




int main()

{
    float R, vol;
    printf("informe o raio : ");
    scanf("%f", &R);

    vol = (4 * 3.14 * pow(R, 3)) / 3;

    printf("Resultado eh : %.2f", vol);
}





// ---------------------------------------------------------------------------------------------------------------------------

                                // questao 3 - correta

            3) Escreva um algoritmo para ler nome e salario bruto de um funcionário
         calcular e escreve seu salário liquido, sendo que sobre o salario bruto temos
                8,5% de desconto de inss e 12% de desconto de imposto de renda;




int main()

{
    char fun[40];
    float sb, sl, ir, in;

    printf("Informe o nome do funcionario: ");
    fgets(fun, sizeof(fun), stdin);
    printf("Informe o salario do mesmo: ");
    scanf("%f", &sb);
    


    ir = sb * 0.085;

    in = sb * 0.12;

    sl = sb - ir - in;

    printf("Salario de %s eh de R$ %.2f",fun ,sl);

}





                                // questao 4 - (corrigida)
 
            4) Escreva um programa em C que leia 3 valores A, B e C do tipo inteiro, a
                seguir encontre o maior dos três valores e o escreva com a mensagem,
               "maior valor é:", utilize a seguinte formula --> (a + b + |a - b| ) / 2 



int main()

{
    int a, b, c, mv;
    printf("informe o primeiro valor : ");
    scanf("%d",&a);
    printf("informe o segundo valor : ");
    scanf("%d",&b);
    printf("informe o terceiro valor : ");
    scanf("%d",&c);

    mv = (a + b + abs(a - b)) / 2;

    mv = (mv + c + abs(mv - c)) / 2;
    setbuf(stdin, NULL);
    printf("o maior valor eh : %d", mv);
}

*/

/*
                                        // questao 5 - (corrigida)

            6) tendo como dados de entrada um valor com até duas casas decimais, que representa um valor monetário,
                            calcular e escreve o menor número possível de notas e moedas nas
                                        quais o valor pode ser decomposto.

                                As notas consideradas são de 100, 50, 20, 10, 5 e 2.
                            As Moedas possíveis são de 1,00 - 0,50 - 0,25 – 0,10 – 0,05 
*/

/*

int main()

{
    int valor, decimal, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, resto;

    printf("Informe o valor : ");
    scanf("%d,%d", &valor, &decimal);

    n100 = valor / 100;
    resto = valor % 100;
    n50 = resto / 50;
    resto = resto % 50;
    n20 = resto / 20;
    resto = resto % 20;
    n10 = resto / 10;
    resto = resto % 10;
    n5 = resto / 5;
    resto = resto % 5;
    n2 = resto / 2;
    resto = resto % 2;
    m1 = resto / 1;
    resto = resto % 1;


    m50 = decimal / 50;
    resto = decimal % 50;
    m25 = resto / 25;
    resto = resto % 25;
    m10 = resto / 10;
    resto = resto % 10;
    m05 = resto / 5;
    resto = resto % 5;


    printf("\no valor inteiro em notas de 100 eh : %d", n100);
    printf("\no valor inteiro em notas de 50 eh : %d", n50);
    printf("\no valor inteiro em notas de 20 eh : %d", n20);
    printf("\no valor inteiro em notas de 10 eh : %d", n10);
    printf("\no valor inteiro em notas de 5 eh : %d", n5);
    printf("\no valor inteiro em notas de 2 eh : %d", n2);
    printf("\no valor inteiro em moedas de 1 real eh : %d", m1);
    printf("\no valor inteiro em moedas de 50 centavos eh : %d", m50);
    printf("\no valor inteiro em moedas de 25 centavos eh : %d", m25);
    printf("\no valor inteiro em moedas de 10 centavos eh : %d", m10);
    printf("\no valor inteiro em moedas de 5 centavos eh : %d", m05);

}
*/