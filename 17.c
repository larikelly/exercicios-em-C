/*Faça um programa que, dados dois arrays bidimensionais (matrizes A e B) com dimensões
de no máximo 5x5 elementos, retorne:
a. a soma destas duas matrizes
b. a soma das diagonais de cada matriz
c. a multiplicação das duas matrizes */
#include <stdio.h>
int main () {
    int mat1[3][3];
    int mat2[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    printf ("Digite o numero da matriz 1:");
    scanf("%d", &mat1[i][j]);    
        }}
        
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    printf ("Digite o numero da matriz 2:");
    scanf("%d", &mat2[i][j]);   
}}
int somaMat[3][3];
int somaDiag = 0;
int multMat[3][3];

for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    somaMat[i][j] = mat1[i][j] + mat2[i][j];
    multMat[i][j] = mat1[i][j]*mat2[i][j];
        }
    somaDiag = mat1[i][i] + mat2[i][i];}

    printf ("\nSOMA DA MATRIZ \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    printf("%d \n", somaMat[i][j]);}

    printf ("\nMULTIPLICACAO DA MATRIZ\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    printf ("%d \n", multMat[i][j]);}

    printf ("\nSOMA da DIAGONAL\n");
    printf ("%d ", somaDiag);
        }}
    return 0;
}