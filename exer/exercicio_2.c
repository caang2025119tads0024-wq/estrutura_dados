#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");
    // Declaração da matriz e variáveis
    int matriz[3][3];
    int i, j;
    int soma_diagonal = 0;

    // Solicita e lê os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime a matriz digitada para verificação
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Soma os elementos da diagonal principal (onde i == j)
    for (i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // Exibe o resultado da soma
    printf("\nA soma dos elementos da diagonal principal e: %d\n", soma_diagonal);

    return 0;
}