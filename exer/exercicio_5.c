/*  Faça
um programa em C usando Função para ler as notas de 3 alunos e exibir o
resultado (média e se está aprovado ou reprovado).*/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int calcularMedia(int n1, int n2, int n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");    
    // Declaração das variáveis
    int nota1,nota2,nota3;
    float media;
    pritf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    pritf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    pritf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    media = calcularMedia(nota1, nota2, nota3);
    printf("A media do aluno e: %.2f\n", media);
    if (media >= 6) {
        printf("Aluno aprovado! \n");
    } else {
        printf("Aluno reprovado! \n");
    }
    return 0;
} 