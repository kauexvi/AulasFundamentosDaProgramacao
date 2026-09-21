#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
int main() 
{
    char meuNome[30];

    strcpy(meuNome, "João"); 

    printf("O nome armazenado eh: %s\n", meuNome);

    char outroNome[30];
    strcpy(outroNome, meuNome);

    printf("Copiado para outra variavel: %s\n", outroNome);
}
*/


/*
int main() 
{
    char sexo[20];

    printf("Informe seu sexo (masculino/feminino): ");
    scanf("%s", sexo);

    if (strcmp(sexo, "masculino") == 0) 
    
        printf("Opcao escolhida: Masculino.\n");
    
    else   
        if (strcmp(sexo, "feminino") == 0) 
            printf("Opcao escolhida: Feminino.\n");

        else 
            printf("Sexo invalido!\n");
    
}
*/


/*
int main() 
{
    char op;

    printf("Digite o operador desejado (+ ou -): ");
    op = getch(); // Lê o caractere na hora e exibe na tela sem precisar de Enter

    if (op == '+')
        printf("Voce escolheu a adicao!\n");
    
    else
        if (op == '-')
            printf("Voce escolheu a subtracao!\n");
     
        else
            printf("Operador nao reconhecido!\n");
    
}
*/

/*
int main() 
{
    char letra1, letra2;

    printf("Digite uma letra usando getche() [Ela vai aparecer na tela]: ");
    letra1 = getche(); // O que você digitar aparece instantaneamente

    printf("\nDigite uma senha (caractere secreto) usando getch() [Nao aparece na tela]: ");
    letra2 = getch(); // Você digita, mas o caractere fica invisível por segurança

    printf("\n\nVoce digitou visivelmente: %c\n", letra1);
    printf("Voce digitou no secreto (getch): %c\n", letra2);
}
*/

int main() 
{
    char nome[40];
    char categoria[30];

    printf("Informe o seu nome: ");
    scanf("%s", nome);

    strcpy(categoria, "noia supremo master"); 

    printf("\n--- FICHA DO ALUNO ---\n");
    printf("Nome digitado: %s\n", nome);
    printf("Sua categoria fixa: %s\n", categoria);

    char copiaCategoria[30];
    strcpy(copiaCategoria, categoria);
    
    printf("Categoria copiada com sucesso para outra variavel: %s\n", copiaCategoria);

}