#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3.Faça um programa em C que diga quantos números pares existem de 1 a 1000.
//4.Faça um programa em C que diga quantos números ímpares existem de 1 a 1000.
//5.Faça um programa em C que diga quantos números primos existem de 1 a 1000.

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração das variáveis contadoras
    int contador_pares = 0;      // Conta números pares de 1 a 1000
    int contador_impares = 0;    // Conta números ímpares de 1 a 1000
    int contador_primos = 0;     // Conta números primos de 1 a 1000
    
    // PRIMEIRA SEÇÃO: Conta pares e ímpares
    // Itera de 1 a 1000 e verifica se cada número é par ou ímpar
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            // Se o resto da divisão por 2 for 0, é par
            contador_pares++;
        }
        else {
            // Caso contrário, é ímpar
            contador_impares++;
        }   
    }
    
    // SEGUNDA SEÇÃO: Conta números primos
    // Um número primo tem exatamente 2 divisores: 1 e ele mesmo
    for (int i = 2; i <= 1000; i++) {
        int divisores = 0;  // Contador de divisores do número atual
        
        // Otimização: só verifica números ímpares (exceto 2 que é primo)
        if(i % 2 != 0) {
            // Conta quantos divisores o número i possui
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    // Se i é divisível por j, incrementa o contador
                    divisores++;
                }
            }
            // Se tem exatamente 2 divisores (1 e ele mesmo), é primo
            if (divisores == 2) {
                contador_primos++;
            }  
        } else if (i == 2) {
            // 2 é o único número par que é primo
            contador_primos++;
        }     
    }

    // Exibe os resultados
    printf("Quantidade de numeros pares de 1 a 1000: %d\n", contador_pares);
    printf("Quantidade de numeros impares de 1 a 1000: %d\n", contador_impares);
    printf("Quantidade de numeros primos de 1 a 1000: %d\n", contador_primos);
    
    return 0;
}