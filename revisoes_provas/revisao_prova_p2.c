#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
int fat, n;

int main()
{
    printf("Informe um numero para calcular o fatorial: ");
    scanf("%d", &n);

    for(fat = 1; n > 1; n--)
        fat = fat * n;

    printf("%d\n", fat);
    return 0;
}
*/


/*
int main() {
    int num;
    int primo = 1; // Flag indicando que é primo até que se prove o contrário

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num <= 1) 
        primo = 0;
    else 
    {
        // Inicialização, condição e incremento no cabeçalho do for
        for (int i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                primo = 0;
                break; // Otimização: sai do for se achar divisor
            }
        }
    }

    if (primo == 1) {
        printf("%d eh primo.\n", num);
    } else {
        printf("%d nao eh primo.\n", num);
    }
    return 0;
}

*/

/*
int main() 
{
int cont = 1, num;
float x = 0;
char flag = '+'; // A flag inicia como soma

printf("digite numero: ");
scanf("%d", &num);

    while (cont < num) 
    {
        switch (flag){
            case '+':
                x = x + cont;
                flag = '-'; // Após somar, prepara a flag para subtrair no próximo ciclo[cite: 1]
                break;
            case '-':
                x = x - cont;
                flag = '*'; // Após subtrair, prepara a flag para multiplicar no próximo ciclo[cite: 1]
                break;
            case '*':
                x = x * cont;
                flag = '/'; // Após multiplicar, prepara a flag para dividir no próximo ciclo[cite: 1]
                break;
            case '/':
                x = x / cont;
                flag = '+'; // Após dividir, retorna para a soma, reiniciando o ciclo[cite: 1]
                break;
        }
    cont++; // Incrementa o contador para avançar o laço[cite: 1]
    }
    printf("Resultado: %.2f\n", x);
    return 0;
}
*/


/*
int main() {
    int num;

    while (1) {
        printf("informe numero (menor que 1 para sair): ");
        scanf("%d", &num); // Lê o número a cada rodada[cite: 1]

        if (num < 1) {
            printf("invalido\n");
            break;
        }

        // --- COMEÇA A VERIFICAÇÃO SE É PRIMO ---
        int primo = 1;
        
        if (num <= 1) {
            primo = 0;
        } else {
            for (int i = 2; i <= num / 2; i++) 
            {
                if (num % i == 0) {
                    primo = 0;
                    break;
                }
            }
        }


        if (primo == 1) {
            // Reiniciamos as variáveis EXATAMENTE AQUI, antes do laço[cite: 1]
            int fatorial = 1;
            int ifat = 1; 
            float e = 0.0; // Acumulador fracionário precisa ser float e começar em 0.0[cite: 1]

            // Aqui é o "Esqueleto do Fatorial" rodando
            while (ifat <= num) {
                fatorial = fatorial * ifat;
                e = e + (1.0 / fatorial); // Usando o fatorial recém-calculado na fração[cite: 1]
                ifat++;
            }
            printf("%d eh primo e o valor acumulado eh %.4f\n\n", num, e);
        } 
        else {
            if (num % 2 == 0)
                printf("%d nao eh primo e eh par.\n\n", num);
            else
                printf("%d nao eh primo e eh impar.\n\n", num);
        }
    }
    return 0;
}
*/
/*
int main() {
    int num, i, j, sold = 1;

    printf("informe um numero multiplo de 6:");
    scanf("%d",&num);

    if (num % 6 != 0) {
        printf("Numero invalido. O numero deve ser multiplo de 6.\n");
    }

    
    for (i=1; i<=num/6; i++){
        printf("\nFila %d :",i);
        
        for (j=1; j <= 6; j++)
        {
            printf(" %d ",sold);
            sold++;
        }
    }
    return 0;
}
*/
/*
int main()
{
    int fatorial, n;


    printf("Informe um numero para calcular o fatorial: ");
    scanf("%d", &n);

    for (fatorial = 1; n > 1; n--)
        fatorial = fatorial * n;
    
    printf("%d\n", fatorial);
}
*/

/*
int main()
{
    int num, primo, i;
    primo = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
            break;
        }
    }
    if (primo == 1)
        printf("%d eh primo.\n", num);
    else
        printf("%d nao eh primo.\n", num);
}
*/