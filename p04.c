//Carol é uma confeitera de muito sucesso no seu bairro, vendendo uma grande quantidade de cookies por dia. No entanto, ela está enfrentando um problema relacionado ao cálculo de ingredientes necessários.
//Sua receita apenas indica a quantidade necessária para fazer 12 cookies (6 colheres de cacau, 2 caixa de leite, 250 gramas de chocolate, 500 gramas de açúcar e 3 xicaras de farinha). Ela pediu um programa que, dado o numero de cookies que ela deseja fazer, automaticamente ajuste a escala dos ingredientes da receita de 12 cookies para essa nova quantidade.
#include <stdio.h>
int main () {
    int qnt;
    
    printf ("Digite a quantidade de cookies:");
    scanf ("%d", &qnt);

    float cacau = 0.5*qnt;
    float leite = 0.33*qnt;
    float chocolate = 2.2*qnt;
    float acucar = 4.2*qnt;
    float farinha = 0.77*qnt;

    printf("Receita:\nCacau: %.2f colher(es) \nLeite: %.2f caixa(as)\nChocolate: %.f grama(s)\nAcucar: %.2f grama(s)\nFarinha: %.2f xicara(s)\n", cacau, leite, chocolate, acucar, farinha);

    return 0;
}