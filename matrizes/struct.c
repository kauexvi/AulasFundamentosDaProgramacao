#include <stdio.h>
#include <string.h>

/*
// Definição da estrutura de registro para o cliente
struct Cliente {
    char nome[100];
    char endereco[150];
    char telefone[20];
};

int main() 
{
    // Declaração de uma variável do tipo struct Cliente
    struct Cliente cliente1;

    printf("=== Cadastro de Cliente ===\n\n");

    // Leitura do nome
    printf("Digite o nome completo: ");
    fgets(cliente1.nome, sizeof(cliente1.nome), stdin);
    cliente1.nome[strcspn(cliente1.nome, "\n")] = '\0'; // Remove o '\n' lido pelo fgets

    // Leitura do endereço
    printf("Digite o endereco: ");
    fgets(cliente1.endereco, sizeof(cliente1.endereco), stdin);
    cliente1.endereco[strcspn(cliente1.endereco, "\n")] = '\0';

    // Leitura do telefone
    printf("Digite o telefone: ");
    fgets(cliente1.telefone, sizeof(cliente1.telefone), stdin);
    cliente1.telefone[strcspn(cliente1.telefone, "\n")] = '\0';

    // Exibição dos dados cadastrados
    printf("\n=== Dados Cadastrados ===\n");
    printf("Nome: %s\n", cliente1.nome);
    printf("Endereco: %s\n", cliente1.endereco);
    printf("Telefone: %s\n", cliente1.telefone);
}
*/

/*

struct Cliente {
    char nome[100];
    char endereco[150];
    char telefone[20];
};

int main() {
    struct Cliente clientes[5]; // Vetor do tipo struct Cliente com 5 posições
    int total = 0;              // Controla quantos clientes foram cadastrados
    char continuar = 'S';       // Controla a resposta (S/N)

    printf("=== Cadastro de Clientes (Max: 5) ===\n");

    // Continua enquanto não atingir 5 clientes E o usuário responder 'S' ou 's'
    while (total < 5 && (continuar == 'S' || continuar == 's')) {
        printf("\n--- Cliente %d ---\n", total + 1);

        printf("Digite o nome completo: ");
        fgets(clientes[total].nome, sizeof(clientes[total].nome), stdin);
        clientes[total].nome[strcspn(clientes[total].nome, "\n")] = '\0';

        printf("Digite o endereco: ");
        fgets(clientes[total].endereco, sizeof(clientes[total].endereco), stdin);
        clientes[total].endereco[strcspn(clientes[total].endereco, "\n")] = '\0';

        printf("Digite o telefone: ");
        fgets(clientes[total].telefone, sizeof(clientes[total].telefone), stdin);
        clientes[total].telefone[strcspn(clientes[total].telefone, "\n")] = '\0';

        total++; // Incrementa a quantidade de clientes cadastrados

        // Só pergunta se ainda houver espaço no vetor (menos de 5 cadastrados)
        if (total < 5) {
            printf("\nNovo Cliente (S/N)? ");
            scanf(" %c", &continuar);
            getchar(); // IMPORTANTE: Limpa o '\n' (Enter) deixado pelo scanf no buffer
        } else {
            printf("\nLimite maximo de 5 clientes atingido!\n");
        }
    }

    // Exibição apenas dos clientes que foram realmente cadastrados
    printf("\n=== Clientes Cadastrados (%d) ===\n", total);
    for (int i = 0; i < total; i++) {
        printf("\nCliente %d:\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Telefone: %s\n", clientes[i].telefone);
    }
}

*/

/*
int main() {
    // Vetor de 5 nomes com até 50 caracteres cada
    char nomes[5][50] = {
        "Lucas",
        "Ana",
        "Pedro",
        "Beatriz",
        "Carlos"
    };
    char temp[50]; // Variável auxiliar para a troca
    int n = 5;

    // Ordenação em ordem alfabética (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // Se nomes[j] vem depois de nomes[j + 1] no alfabeto, troca
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

    // Escrita do vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

}
*/


/*
int main() 
{
    struct Cliente {
    char nome[100];
    char endereco[150];
    char telefone[20];
    };

    struct Cliente clientes[5];
    int total = 0;
    char continuar = 'S';
    char busca[100];
    int encontrado;

    printf("=== Cadastro de Clientes (Max: 5) ===\n");

    // 1. Cadastro dos clientes (Exercício 2)
    while (total < 5 && (continuar == 'S' || continuar == 's')) {
        printf("\n--- Cliente %d ---\n", total + 1);

        printf("Digite o nome completo: ");
        fgets(clientes[total].nome, sizeof(clientes[total].nome), stdin);
        clientes[total].nome[strcspn(clientes[total].nome, "\n")] = '\0';

        printf("Digite o endereco: ");
        fgets(clientes[total].endereco, sizeof(clientes[total].endereco), stdin);
        clientes[total].endereco[strcspn(clientes[total].endereco, "\n")] = '\0';

        printf("Digite o telefone: ");
        fgets(clientes[total].telefone, sizeof(clientes[total].telefone), stdin);
        clientes[total].telefone[strcspn(clientes[total].telefone, "\n")] = '\0';

        total++;

        if (total < 5) {
            do {
                printf("\nNovo Cliente (S/N)? ");
                scanf(" %c", &continuar);
                if (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n')
                    printf("invalido");
                } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');
        } else {
            printf("\nLimite maximo de 5 clientes atingido!\n");
        }
    }

    // 2. Consulta por nome após o término dos cadastros
    printf("\n=== Consulta de Clientes ===\n");
    while (1) {
        printf("\nDigite o nome para buscar (ou \"Fim\" para encerrar): ");
        fgets(busca, sizeof(busca), stdin);
        busca[strcspn(busca, "\n")] = '\0';

        // Verifica a condição de parada
        if (strcmp(busca, "Fim") == 0) {
            printf("Consulta encerrada.\n");
            break;
        }

        encontrado = 0; // Flag para saber se achou o cliente

        // Percorre apenas os clientes que foram cadastrados (até 'total')
        for (int i = 0; i < total; i++) {
            if (strcmp(clientes[i].nome, busca) == 0) {
                printf("\n--- Cliente Encontrado ---\n");
                printf("Nome: %s\n", clientes[i].nome);
                printf("Endereco: %s\n", clientes[i].endereco);
                printf("Telefone: %s\n", clientes[i].telefone);
                encontrado = 1;
                break; // Para o 'for' assim que encontrar
            }
        }

        if (!encontrado) {
            printf("Cliente \"%s\" nao encontrado.\n", busca);
        }
    }
}

*/

/*
// Molde global com apenas números
struct Produto {
    int codigo;
    int quantidade;
    float preco;
};

int main() {
    // Criando uma prateleira com 2 produtos
    struct Produto estoque[2];

    printf("=== Cadastro de Estoque ===\n\n");

    // Lendo o primeiro produto (posição 0)
    printf("--- Produto 1 ---\n");
    printf("Digite o codigo (numero): ");
    scanf("%d", &estoque[0].codigo); // Note o '&' antes de estoque

    printf("Digite a quantidade: ");
    scanf("%d", &estoque[0].quantidade);

    printf("Digite o preco: ");
    scanf("%f", &estoque[0].preco);

    // Lendo o segundo produto (posição 1)
    printf("\n--- Produto 2 ---\n");
    printf("Digite o codigo (numero): ");
    scanf("%d", &estoque[1].codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &estoque[1].quantidade);

    printf("Digite o preco: ");
    scanf("%f", &estoque[1].preco);

    // Exibindo para provar que guardou certo
    printf("\n=== Resumo do Estoque ===\n");
    printf("Prod 1 -> Cod: %d | Qtd: %d | Preco: R$ %.2f\n", estoque[0].codigo, estoque[0].quantidade, estoque[0].preco);
    printf("Prod 2 -> Cod: %d | Qtd: %d | Preco: R$ %.2f\n", estoque[1].codigo, estoque[1].quantidade, estoque[1].preco);
}
*/

/*
int main() 
{
    struct Estatisticas {
        int pontos;
        int rebotes;
        int assistencias;
    };

    struct Jogador {
        char nome[50];
        int camisa;
        struct Estatisticas stats; 
    };

    // Criando um time com espaço para 3 jogadores
    struct Jogador meulime[3]; 

    int i = 0;

    printf("=== Cadastro do Time de Basquete ===\n\n");

    for (i = 0; i < 3; i++) {

        printf("Digite o nome do jogador (ou 'Fim' para encerrar): ");
        fgets(meulime[i].nome, sizeof(meulime[i].nome), stdin);
        meulime[i].nome[strcspn(meulime[i].nome, "\n")] = '\0';

        if (strcmp(meulime[i].nome, "Fim") == 0) {
            printf("Encerrando cadastro.\n");
            break;
        }

        printf("Digite o numero da camisa: ");
        scanf("%d", &meulime[i].camisa);

        printf("Digite os pontos: ");
        scanf("%d", &meulime[i].stats.pontos);

        printf("Digite os rebotes: ");
        scanf("%d", &meulime[i].stats.rebotes);

        printf("Digite as assistencias: ");
        scanf("%d", &meulime[i].stats.assistencias);

        getchar();
    }


    printf("\n=== Resumo dos Jogadores Cadastrados ===\n");

    if (i == 0) {
        printf("Nenhum jogador foi cadastrado.\n");
        return 0;
    }

    for (int j = 0; j < i; j++) {

        printf("\nJogador: %s\n", meulime[j].nome);
        printf("Camisa: %d\n", meulime[j].camisa);
        printf("Pontos: %d\n", meulime[j].stats.pontos);
        printf("Rebotes: %d\n", meulime[j].stats.rebotes);
        printf("Assistencias: %d\n", meulime[j].stats.assistencias);
    }
}
*/


int main()
{
    struct music {
        char nome[50];
        char artista[50];
        int duracao; // duração em segundos
    };

    struct music playlist[5];

    int i, j;

    for (i = 0; i < 5; i++) 
    {

        printf("\nDigite o nome da musica para cadastro (ou 'Fim' para encerrar): ");
        fgets(playlist[i].nome, sizeof(playlist[i].nome), stdin);
        playlist[i].nome[strcspn(playlist[i].nome, "\n")] = '\0';

        if (strcmp(playlist[i].nome, "Fim") == 0) {
            printf("\nEncerrando cadastro.\n\n");
            break;
        }

        printf("Digite o artista da musica : ");
        fgets(playlist[i].artista, sizeof(playlist[i].artista), stdin);
        playlist[i].artista[strcspn(playlist[i].artista, "\n")] = '\0';

        printf("Digite a duracao (em segundos) da musica : ");
        scanf("%d", &playlist[i].duracao);

        getchar(); // Limpa o buffer do teclado
    }


    printf("\n=== Musicas Cadastradas ===\n");

    if (i == 0) {
        printf("Nenhuma musica foi cadastrada.\n");
        return 0;
    }

    int maior;

    for (j = 0; j < i; j++) 
    {
        if (playlist[j].duracao == 1) {
            playlist[j].duracao = maior;
        }
        else if (playlist[j].duracao > maior) {
            maior = playlist[j].duracao;
        }
    }
    for (j = 0; j < i; j++) 
    {
            printf("\nMusica: %s\n", playlist[j].nome);
            printf("Artista: %s\n", playlist[j].artista);
            printf("Duracao: %d segundos\n", playlist[j].duracao);
    }

    printf("\nA musica com maior duracao tem %d segundos\n", maior);
}


/*
int main()
{
    struct desempenho {
        float n1;
        float n2;
        float media;
    };

    struct aluno {
        char nome[50];
        int ra;
        struct desempenho notas;
    };

    struct aluno alunos[2];

    int i, j;

    for (i = 0; i < 2; i++) {
        printf("\nDigite o nome do aluno (ou 'Fim' para encerrar): ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        if (strcmp(alunos[i].nome, "Fim") == 0) {
            printf("\nEncerrando cadastro.\n\n");
            break;
        }

        printf("Digite o RA do aluno: ");
        scanf("%d", &alunos[i].ra);

        printf("Digite a nota 1: ");
        scanf("%f", &alunos[i].notas.n1);

        printf("Digite a nota 2: ");
        scanf("%f", &alunos[i].notas.n2);

        alunos[i].notas.media = (alunos[i].notas.n1 + alunos[i].notas.n2) / 2;

        getchar(); // Limpa o buffer do teclado
    }

        if (i == 0) 
        {
            printf("Nenhum aluno foi cadastrado.\n");
            return 0;
        }

    for (j = 0; j < i; j++) 
    {
        printf("\nAluno: %s\n", alunos[j].nome);
        printf("RA: %d\n", alunos[j].ra);
        printf("Nota 1: %.2f\n", alunos[j].notas.n1);
        printf("Nota 2: %.2f\n", alunos[j].notas.n2);
        if (alunos[j].notas.media >= 6.0) {
            printf("Media: %.2f - Aprovado\n", alunos[j].notas.media);
        } else {
            printf("Media: %.2f - Reprovado\n", alunos[j].notas.media);
        }
    }
}*/