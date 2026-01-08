#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    // Declaração das matrizes e variáveis
    int A[3][3], B[3][3], C[3][3], i, j, k;
    
    // Colocar dados na matriz A
    printf("Preenchendo a matriz A:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            A[i][j] = 3*j;
        }
    }
    
    // Colocar dados na matriz B
    printf("\nPreenchendo a matriz B:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            B[i][j] = 6*j;
        }
    }

    // Imprimir a matriz A
    printf("\nMatriz A:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Imprimir a matriz B
    printf("\nMatriz B:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Multiplicação de matrizes 
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            C[i][j] = 0;  // Inicializa o elemento como zero
            for(k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimir a matriz C (resultado da multiplicação)
    printf("\nMatriz C (resultado da multiplicação A x B):\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}