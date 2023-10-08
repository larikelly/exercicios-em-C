// Por fim, Roberto deseja que o programa, ao ler o faturamento de 8 filiais, realize as seguintes tarefas:
//(a) Armazene os faturamentos em um unico vetor;
//(b) Calcule a soma de todos os elementos desse vetor;
//(c) Conte quantos deles representam lucro (valores positivos).
#include <stdio.h>
int main()
{
    float vet[8], soma;
    int i, contador = 0;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o faturamento da filial %d:\n", i);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    for (i = 0; i < 8; i++)
        if (vet[i] > 0)
        {
            contador++;
            printf("Os faturamentos da empresa %d é %.2f\n", i, vet[i]);
        }
    printf("A soma deles é %.2f e %d empresas estao dando lucro \n", soma, contador);

    return 0;
}