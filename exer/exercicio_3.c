#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define a estrutura para representar um produto
struct Produto {
    char nome[50];
    int quantidade;
};

int main() {
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    int num_produtos = 0;
    int total_quantidade = 0;
    int i;

    // Pergunta ao usuário quantos produtos ele deseja cadastrar
    printf("Quantos produtos voce deseja cadastrar? ");
    scanf("%d", &num_produtos);

    // Cria um array de 'struct Produto' com o tamanho informado
    struct Produto lista_de_produtos[num_produtos];

    // Limpa o buffer do teclado para evitar problemas com a leitura de strings
    while (getchar() != '\n');

    printf("\n--- Cadastro de Produtos ---\n");

    // Loop para pedir os dados de cada produto
    for (i = 0; i < num_produtos; i++) {
        printf("\nProduto %d:\n", i + 1);

        printf("  Nome: ");
        // Lê o nome do produto (permite nomes com espaços)
        scanf("%49[^\n]", lista_de_produtos[i].nome);

        printf("  Quantidade: ");
        scanf("%d", &lista_de_produtos[i].quantidade);

        // Limpa o buffer do teclado novamente para a próxima iteração
        while (getchar() != '\n');

        // Soma a quantidade do produto atual ao total
        total_quantidade += lista_de_produtos[i].quantidade;
    }

    // Exibe o resultado final
    printf("\n----------------------------------------\n");
    printf("O valor total de itens em estoque e: %d\n", total_quantidade);
    printf("----------------------------------------\n");

    return 0;
}