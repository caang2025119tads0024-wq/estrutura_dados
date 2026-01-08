#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Faça um programa em C que diga quantos números pares existem de 1 a 1000.
//Faça um programa em C que diga quantos números ímpares existem de 1 a 1000.
// Faça um programa em C que diga quantos números primos existem de 1 a 1000.
/* Faça um programa em C que refaça a 3 últimas questões,
 modificando apenas na quantidade de números,
  pois, o usuário deverá informar a quantidade.
*/

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");
    int valor_final;
    int resposta;

    do{

    printf("Digite um valor maior que 1: ");
    scanf("%d", &valor_final);
    for (int i = 1; i <= valor_final; i++) {
        if (valor_final < 1) {
            printf("Valor invalido! Digite um valor maior que 1: ");
            scanf("%d", &valor_final);
        }
    }

    int contador_pares = 0;
    int contador_impares = 0;
    int contador_primos = 0;
    for (int i = 1; i <= valor_final; i++) {
        if (i % 2 == 0) {
            contador_pares++;
        }
        else {
            contador_impares++;
        }   
    }

    for (int i = 2; i <= valor_final; i++) {
        int divisores = 0;
        if(i % 2 != 0) {
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            contador_primos++;
        }  
        } else if (i == 2) {
            contador_primos++;
        }     
    }

    printf("Quantidade de numeros pares de 1 a %d: %d\n", valor_final, contador_pares);
    printf("Quantidade de numeros impares de 1 a %d: %d\n", valor_final, contador_impares);
    printf("Quantidade de numeros primos de 1 a %d: %d\n", valor_final, contador_primos);
    printf("Deseja continuar? (1-Sim / 0-Nao): ");
    scanf("%d", &resposta);
} while (resposta == 1);
return 0;
}