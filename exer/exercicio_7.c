/*Faça
um Programa em C que tenha um struct, e uma matriz 3x3 que armazenará carros de
3 diferentes marcas em cada linha dessa matriz. Os dados contidos na struct
serão: Marca, Modelo, Ano, Versão (LTZ, Highlight, SP, etc.), Categoria (Hatch,
Sedan, Minivan, SUV, etc.), Motorização (1.0, 1.4, 2.0, etc.). E que eu possa
imprimir qualquer linha armazenada na matriz, usando Switch.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Carro{
    char marca[20];
    char modelo[20];
    int ano;
    char versao[20];
    char categoria[20];
    char motorizacao[20];
};

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis
    struct Carro carros[3][3];
    int i, j, Linha;

    // Leitura dos dados dos carros
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite os dados do carro [%d][%d]:\n", i, j);
            printf("Marca: ");
            scanf(" %19[^\n]", carros[i][j].marca);
            limparBuffer();
            printf("Modelo: ");
            scanf(" %19[^\n]", carros[i][j].modelo);
            limparBuffer();
            printf("Ano: ");
            scanf("%d", &carros[i][j].ano);
            limparBuffer();
            printf("Versao: ");
            scanf(" %19[^\n]", carros[i][j].versao);
            limparBuffer();
            printf("Categoria: ");
            scanf(" %19[^\n]", carros[i][j].categoria);
            limparBuffer();
            printf("Motorizacao: ");
            scanf(" %19[^\n]", carros[i][j].motorizacao);
            limparBuffer();
        }
    }

    // Solicita a linha a ser impressa
    printf("\nDigite a linha da matriz de carros que deseja imprimir (0, 1 ou 2): ");
    scanf("%d", &Linha);

    // Imprime a linha selecionada
    switch (Linha) {
    case 0:
    case 1:
    case 2:
        printf("\n--- Carros da Linha %d ---\n", Linha);
        for (j = 0; j < 3; j++) {
            printf("\nCarro [%d][%d]:\n", Linha, j);
            printf("Marca: %s\n", carros[Linha][j].marca);
            printf("Modelo: %s\n", carros[Linha][j].modelo);
            printf("Ano: %d\n", carros[Linha][j].ano);
            printf("Versao: %s\n", carros[Linha][j].versao);
            printf("Categoria: %s\n", carros[Linha][j].categoria);
            printf("Motorizacao: %s\n", carros[Linha][j].motorizacao);
        }
        break;
    default:
        printf("Linha invalida. Por favor, digite 0, 1 ou 2.\n");
        break;
    }

    return 0;
}