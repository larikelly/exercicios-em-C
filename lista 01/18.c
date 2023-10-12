/*O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
                  Até 5 Kg           Acima de 5 Kg
(01) File Duplo R$ 4,90 por Kg R$ 5,80 por Kg 
(02) Alcatra R$ 5,90 por Kg R$ 6,80 por Kg 
(03) Picanha R$ 6,90 por Kg R$ 7,80 por Kg
Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente.
Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra.
Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo de carne quantidade de carne, preço total, tipo de pagamento, valor do desconto valor a pagar.*/
#include <stdio.h>

int main() {
    int tipoCarne; 
    int tipoPagamento;
    int quant;
    float valorCarne;

    printf ("Digite o tipo de carne (1 - filé duplo, 2 - alcatra, 3 - picanha): ");
    scanf ("%d", &tipoCarne);

    printf ("Quantos quilos? ");
    scanf ("%d", &quant);

    printf ("Como será o pagamento? (digite 1 para cartão, 2 para dinheiro e 3 para pix): ");
    scanf ("%d", &tipoPagamento);

    switch(tipoCarne) {
        case 1:
            valorCarne = (quant <= 5) ? 4.90 * quant : 5.80 * quant;
            break;
        case 2:
            valorCarne = (quant <= 5) ? 5.90 * quant : 6.80 * quant;
            break;
        case 3:
            valorCarne = (quant <= 5) ? 6.90 * quant : 7.80 * quant;
            break;
        default:
            printf("Tipo de carne inválido!\n");
            return 1;
    }

    if (tipoPagamento == 1) {
        valorCarne = valorCarne - (valorCarne * 5 / 100);
    }

    printf("\nCupom Fiscal\n");
    printf("Tipo de carne: %d\nQuantidade: %d Kg\nPreço total: R$ %.2f\nTipo de pagamento: %d\n", tipoCarne, quant, valorCarne, tipoPagamento);

    return 0;
}

