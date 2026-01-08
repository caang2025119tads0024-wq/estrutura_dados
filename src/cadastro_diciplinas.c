#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Daniel Gonçalves Maciel
int main() {
    int menu = 0;
    char parar = 'S';
	setlocale(LC_ALL, "");
    while (menu != 4) {
    	printf("\n");
        printf("MENU");
        printf("1 - Programação Orientada a Objetos\n");
        printf("2 - Sistemas Operacionais\n");
        printf("3 - Banco de Dados\n");
        printf("4 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("\nMatéria 1 selecionada para cadastrar notas.\n");
                parar = 'S';
                while (parar == 'S' || parar == 's') {
                    float notas[4], soma = 0, media = 0;

                    for (int i = 0; i < 4; i++) {
                        printf("Digite a nota %d: ", i + 1);
                        scanf("%f", &notas[i]);
                        soma += notas[i];
                    }

                    media = soma / 4;
                    printf("A média do aluno é: %.2f\n", media);

                    if (media >= 7.0)
                        printf("Situação: Aprovado\n");
                    else
                        printf("Situação: Reprovado\n");

                    printf("Cadastrar outro aluno? (S/N): ");
                    scanf(" %c", &parar);
                }
                break; 

            case 2:
                printf("\nMatéria 2 selecionada para cadastrar notas.\n");
    			parar = 'S';
				while (parar == 'S' || parar == 's') {
					float notas[4], soma = 0, media = 0;
					
					for (int i = 0; i < 4; i++) {
						printf("Digite a nota %d: ", i + 1);
						scanf("%f", &notas[i]);
						soma += notas[i];
					}
					
					media = soma / 4;
					printf("A média do aluno é: %.2f\n", media);
					if (media >= 7.0)
					{
						printf("Situação: Aprovado\n");
					}
					else
					{
					 	 printf("Situação: Reprovado\n");
					}
					
					printf("Cadastrar outro aluno? (S/N): ");
					scanf(" %c", &parar);
				}
				break;
            case 3:
                printf("\nMatéria 3 selecionada para cadastrar notas.\n");
				parar = 'S';
				while (parar == 'S' || parar == 's') {
					float notas[4], soma = 0, media = 0;
					
					for (int i = 0; i < 4; i++) {
						printf("Digite a nota %d: ", i + 1);
						scanf("%f", &notas[i]);
						soma += notas[i];
					}
					
					media = soma / 4;
					printf("A média do aluno é: %.2f\n", media);
					if (media >= 7.0)
					{
						printf("Situação: Aprovado\n");
					}
					else
					{
					 	 printf("Situação: Reprovado\n");
					}
					
					printf("Cadastrar outro aluno? (S/N): ");
					scanf(" %c", &parar);
				}
				break;

            case 4:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
