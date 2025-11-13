#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Define a estrutura para representar um produto
struct Produto {
    char nome[50];
    int quantidade;
    float preco;
};

int main() {
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis
    int num_produtos = 0;
    int total_quantidade = 0;
    float valor_total = 0.0;
    float valor_com_desconto = 0.0;
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
        scanf("%49[^\n]", lista_de_produtos[i].nome);

        printf("  Preco unitario: ");
        scanf("%f", &lista_de_produtos[i].preco);

        printf("  Quantidade: ");
        scanf("%d", &lista_de_produtos[i].quantidade);

        while (getchar() != '\n');

        total_quantidade += lista_de_produtos[i].quantidade;
        valor_total += lista_de_produtos[i].quantidade * lista_de_produtos[i].preco;
    }

    valor_com_desconto = valor_total * 0.90;

    printf("\n----------------------------------------\n");
    printf("           RESUMO DA COMPRA\n");
    printf("Total de itens na lista: %d\n", total_quantidade);
    printf("Valor total da compra: R$ %.2f\n", valor_total);
    printf("Valor para pagamento a vista (10%% de desconto): R$ %.2f\n", valor_com_desconto);
    printf("----------------------------------------\n");

    return 0;
}