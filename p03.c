//São Joaquim é o proprietário de uma lanchonete de está enfrentando dificuldades ao ajustar os preços dos itens em seu cardápio de comidas. Cada alimento tem o codigo de [0] a [4] e os preços são os seguintes: [0] = rs 4.50 [1] = rs 6.00 [2] = rs 6.50 [3] = rs 10.00 [4] = rs 8.00
//Ele solicitou que você crie um programa que faça o seguinte:
//- Leia o numero inteiro que represente o tipo de ajuste desejado (1 para aumento e 2 para desconto);
// - Em seguida, receba um codigo de alimento e porcentagem x de reajuste desejado;
// - Modifique o preço do alimento com o codigo fornecido, aumentando ou diminuindo em %X;
// - Imprima o preço de cada produto indicando a qual codigo de alimento aquele preço especifico se refere.

//Por exemplo, se ele deseja aumentar o preço do produto 4 em 12%, primeiro seria lido 1 (para aumento), depois 4 (codigo do produto), e por dfim 12 (porcentagem de aumento). No final, o programa deve imprimir. 
// [0] = rs 4.50 [1] = rs 6.00 [2] = rs 6.50 [3] = rs 10.00 [4] = rs 8.96

#include <stdio.h>
int main (){
    int aumdesc, cod, i;
    float porc, vet[5] = {4.5, 6.0, 6.5, 10.0, 8.0};

    for (int i = 0; i < 5; i++) {
    printf("Codigo %d: %.2f\n", i, vet[i]);}

    printf ("Digite o codigo do alimento (de 0 a 4): ");
    scanf ("%d", &cod);

    printf ("Digite a porcentagem de reajuste desejada:");
    scanf ("%f", &porc);
    
    porc = vet[cod]*porc/100;

    printf ("Digite o numero que represente o tipo de reajuste (1 para aumento e 2 para desconto):");
    scanf("%d", &aumdesc);
    for (i = 0; i < 5; i++) {
    if (aumdesc == 1){
        vet[cod] = vet[cod] + porc;
    } else { 
        vet[cod] = vet[cod] - porc;
    }}

    for (int i=0; i < 5; i++){
        printf ("%.2f\n",vet[i]);
    }

    return 0;
}