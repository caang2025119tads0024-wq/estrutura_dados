/*Acrescente
ao programa da questão 5 uma função que leia a nota da prova final caso o aluno
fique de PF segundo os critérios: Média >= 7 (aprovado); Média < 7 &&
Média > 4 (Prova Final); Média < 4 (Reprovado). Nova Média composta da
nota da Prova Final com a Média Anterior deverá ser maior ou igual a 6.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMedia(int n1, int n2, int n3) {
    return (n1 + n2 + n3) / 3;
}
int lerNotaFinal() {
    int notaFinal;
    pritf("Digite a nota da prova final: ");
    scanf("%d", &notaFinal);
    return notaFinal;
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
    if (media >= 7) {
        printf("Aluno aprovado! \n");
    } else if (media < 7 && media >= 4) {
        int notaFinal = lerNotaFinal();
        float novaMedia = (media + notaFinal) / 2;
        printf("A nova media do aluno e: %.2f\n", novaMedia);
        if (novaMedia >= 6) {
            printf("Aluno aprovado na prova final! \n");
        } else {
            printf("Aluno reprovado na prova final! \n");
        }
    } else if (media < 4) {
        printf("Aluno reprovado! \n");
    }
    return 0;
} 