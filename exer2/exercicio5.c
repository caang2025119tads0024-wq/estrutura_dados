#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 7.Faça um programa em C que o usuário insira um
 nome de até 10 caracteres e o programa informe quantas letras A ou a tem no nome.
*/

int main() {
    // Configura o console para UTF-8
    setlocale(LC_ALL, "Portuguese");  

    char nome[10];
    int contador_a = 0;

    printf("Digite um nome de ate 10 caracteres:\n");
    scanf("%s", nome);
    for (int i = 0; i < 10; i++) {
        if (nome[i] == 'a' || nome[i] == 'A'){
            contador_a++;
        }
    }
    printf("O nome %s tem %d letras a\n", nome, contador_a);
    return 0;
}
