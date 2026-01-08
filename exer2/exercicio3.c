#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa em C que diga quantos números pares existem de 1 a 1000.
//Faça um programa em C que diga quantos números ímpares existem de 1 a 1000.
// Faça um programa em C que diga quantos números primos existem de 1 a 1000.

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");
    int contador_pares = 0;
    int contador_impares = 0;
    int contador_primos = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            contador_pares++;
        }
        else {
            contador_impares++;
        }   
    }
    for (int i = 2; i <= 1000; i++) {
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            contador_primos++;
        }      
    }

    printf("Quantidade de numeros pares de 1 a 1000: %d\n", contador_pares);
    printf("Quantidade de numeros impares de 1 a 1000: %d\n", contador_impares);
    printf("Quantidade de numeros primos de 1 a 1000: %d\n", contador_primos);
    return 0;


}