#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    
    // Preenchendo a matriz A
    printf("Preenchendo a matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            A[i][j] = 3*j;
        }
    }
    
    // Preenchendo a matriz B
    printf("Preenchendo a matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = 2*j;
        }
    }
    
    // Imprimindo matriz A
    printf("\nMatriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
    // Imprimindo matriz B
    printf("\nMatriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    // Multiplicação das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0; // Inicializa o elemento como 0
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Imprimindo o resultado da multiplicação
    printf("\nResultado da multiplicação (Matriz C = A x B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
