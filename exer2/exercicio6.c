#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 8.Faça um programa em C que insira
 um vetor de números de 10 posições do tipo inteiro e depois informe quais deles são pares.
*/
/* 9.Faça um programa em C que acrescente ao código da questão 7 
o fato de além de informar em qual posição do vetor estão os pares, 
também mostre cada número par.
*/

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("O numero %d de posicao %d e par\n", numeros[i], i);
        }
    }
    return 0;
    }
