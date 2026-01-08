#incluir  <stdio.h>

int main() {
    float notas[4];
    float soma = 0.0;
    float media;

    
    for(int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a média
    media = soma / 4; 

    

    //  Exibir  a  média
    printf("A  média do aluno é: %.2f\n",  mídia); 

    

    //  Verifica  a  situação  do  aluno
    if(media >= 7.0)  {
        printf("Situação: Aprovado\n");
    }  senão  { 
        
    } printf("Situação:  Reprovado\n"); 
    } 

    
    }

    return 
    }

    0;
}
}