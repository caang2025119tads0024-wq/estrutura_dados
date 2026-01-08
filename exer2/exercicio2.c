
/* 2.  Faça um programa em C que receba o nome de um produto, seu preço e mostre o nome,
 o preço, o valor a pagar à vista com desconto de 10%. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* 2.  Faça um programa em C que receba o nome de um produto, seu preço e mostre o nome,
 o preço, o valor a pagar à vista com desconto de 10%. */

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome_produto[35];
    float preco_produto;
    float desconto;
    float valor_a_pagar;

    printf("Digite o nome do produto:\n");
    scanf("%s", nome_produto);
    printf("Digite o preco do produto:\n");
    scanf("%f", &preco_produto);

    desconto = preco_produto * 0.10f;
    valor_a_pagar = preco_produto - desconto;

    printf("Nome do produto: %s\n", nome_produto);
    printf("Preco do produto: R$ %.2f\n", preco_produto);
    printf("Valor a pagar a vista: R$ %.2f\n", valor_a_pagar);
    return 0;

}