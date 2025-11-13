#include <stdio.h>
#include <locale.h>

int main(){
    // Configura o locale para português, permitindo acentuação no console
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o tamanho do array:\n");
    int tamanho_array;
    scanf("%d", &tamanho_array);
    float numeros_armazenados[tamanho_array]; // Isso é um VLA (Variable Length Array)
    printf("Digite o valor dos numeros a ser armazenados\n");
    for(int i = 0; i < tamanho_array; i++){
        scanf("%f", &numeros_armazenados[i]);
    }
    float soma = 0;
    for(int i = 0; i < tamanho_array; i++){
        soma += numeros_armazenados[i];
    }
    // O operador % não funciona com float. Convertemos a soma para int.
    if((int)soma % 2 == 0){
        printf("A soma dos numeros e par\n");
    } else {
        printf("A soma dos numeros e impar\n");
    }
    
    

   return 0;
}