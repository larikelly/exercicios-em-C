// Clara mais uma vez pediu ajuda com uma tarefa de casa. Ela precisa de um programa que realize a seguinte tarefa:
//(a) Dadas duas matrizes A e B, ambas 2x3, o programa deve calcular a soma das duas matrizes e criar uma matriz C com os resultados;
//(b) Em seguida, o programa deve imprimir as matrizes A, B e C.
#include <stdio.h>
int main()
{
    int matA[2][3], matB[2][3], matC[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite os valores de %d %d da matriz 1:", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite os valores de %d %d da matriz 2:", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}