// Um grupo de amigos esta debatendo sobre a ordem de altura entre eles. Para resolver essa discussao, eles pediram que voce criasse um algoritmo que fizesse o seguinte:
//(a) Leia a altura de 6 amigos;
//(b) Imprima a maior e a menor altura, juntamente com a posicao (ou indice) do amigo mais baixo e do mais alto;
//(c) Em seguida, imprima as alturas dos amigos em ordem crescente, do mais baixo para o mais alto.

#include <stdio.h>
int main()
{
    int i, j;
    float vet[6], temp;
    for (i = 0; i < 6; i++)
    {
        printf("Digite a altura do amigo %d: \n", i);
        scanf("%f", &vet[i]);
    }

    float maior;
    for (i = 0; i < 6; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    float menor = vet[0];

    for (i = 1; i < 6; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }

    printf("a menor altura é: %f e a maior altura é: %f\n", menor, maior);

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6 - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    printf("Alturas em ordem crescente:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%.2f\n", vet[i]);
    }
    return 0;
}