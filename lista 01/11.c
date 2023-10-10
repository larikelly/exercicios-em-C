//Clara esta com outra tarefa, que é digitar os numeros de 1 a 25 em uma matriz 5x5 da seguinte forma:
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25
//Ela pediu um algoritmo que faca o seguinte:
//(a) Gere e imprima essa matriz automaticamente;
//(b) Imprima a soma dos elementos de cada uma das 5 linhas;
//(c) Imprima um vetor com os elementos da diagonal principal (onde i e igual a j).
#include <stdio.h>
int main (){
    int mat[5][5], i, j, soma=1;

    for (i=0; i<5; i++){
        for (j=0; j<5; j ++){
            mat[i][j] = soma;
            soma++;
        }}
    for (i=0; i<5; i++){
        for (j=0; j<5; j ++){
        printf ("%d ", mat[i][j]);
    }
    printf("\n");}

    int somaCol1 = 0;
        for (j = 0; j < 5; j++){
            somaCol1 += mat[0][j];
        }
    int somaCol2 = 0;
        for (j = 0; j < 5; j++){
            somaCol2 += mat[1][j];
            }
    int somaCol3 = 0;
        for (j = 0; j < 5; j++){
            somaCol3 += mat[2][j];
        }
    int somaCol4 = 0;
        for (j = 0; j < 5; j++){
            somaCol4 += mat[3][j];
            }
    int somaCol5 = 0;
        for (j = 0; j < 5; j++){
            somaCol5 += mat[4][j];
            }
    printf("\n");
    printf("soma coluna 1:%d,\n soma coluna 2:%d,\n soma coluna 3:%d,\n soma coluna 4:%d,\n soma coluna 5:%d,\n", somaCol1, somaCol2, somaCol3, somaCol4, somaCol5);

    int somaDiag = 0;
    int vetMat[5];

    for (j=0; j<5; j ++){
        somaDiag += mat[j][j];
        vetMat[j] = 

    printf("\n");
    printf("soma diagonal e: %d\n", somaDiag);

    return 0;
}