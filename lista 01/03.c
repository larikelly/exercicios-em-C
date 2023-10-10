//Roberto e o dono de uma empresa com 20 filiais e precisa de ajuda para criar um algoritmo. Ele possui um vetor com 20 valores reais, onde valores positivos representam filiais lucrativas e valores negativos representam filiais que dao prejuzo. Voce deve desenvolver um algoritmo que faca o seguinte: (a) Imprima o indice no vetor de todas as empresas que dao lucro; (b) Calcule a media dos lucros, desconsiderando todas as filiais que dao prejuzo.
#include <stdio.h>
int main()
{
    float vet[20], media = 0;
    int i, contador = 0;

    for (i = 1; i < 20; i++)
    {
        printf("Digite o valor da empresa %d\n:", i);
        scanf("%f", &vet[i]);
    }

    for (i = 1; i < 20; i++)
    {
        if (vet[i] > 0)
        {
            contador++;
            printf("o indice das empresas estao em %d \n", i);
            float soma = +vet[i];
            media = soma / contador;
        }
    }

    printf("as empresas que dao lucros sao %d e a media é %f: \n", contador, media);

    return 0;
}