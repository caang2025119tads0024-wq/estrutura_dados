#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1.  Faça um programa em C que o usuário insira 4 números e mostre a soma deles e a sua média.

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");
   
    int condicao = 1;
    while (condicao == 1)
    {
    
    int numeros[4];
    int soma = 0;
    float media;
    printf("Digite os 4 numeros inteiros:\n");
    for (int i = 0; i < 4; i++) {
        printf("Numero %d: ", i + 1 );
        scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        soma += numeros[i];
    }
    printf("A soma dos numeros e: %d\n", soma);
    media = soma / 4;
    printf("A media dos numeros e: %.2f\n", media);
    printf("Deseja continuar? (1-Sim / 0-Nao): ");
    scanf("%d", &condicao);
    }
    
     return 0;
}
