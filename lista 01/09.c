//O IBGE (Instituto Brasileiro de Geografia e Estatistica) precisa de um novo algoritmo. Eles têm dados
//sobre a idade das 3 cidades mais velhas de 3 estados diferentes, organizados em uma matriz 3x3. Agora,
//eles solicitam que voce desenvolva um algoritmo que realize as seguintes tarefas:
//(a) Leia a matriz de idade das cidades;
//(b) Solicite ao usuario que informe o indice de uma linha da matriz;
//(c) Calcule a media de idade das 3 cidades daquele estado correspondente a linha escolhida.

#include <stdio.h>
int main () {
int mat[3][3], i, j, soma = 0, media = 0, num1, num2;

for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        printf ("Digite a idade das cidades: ");
        scanf("%d", &mat[i][j]);
}}
    printf ("Digite o indice (aceito somente numero 1 e 2):");
    scanf ("%d", &num1);

    for (j = 0; j < 3; j++) {
        soma += mat[num1][j];
    }
 media = soma/3;

printf ("a media e: %d", media);

return 0;

}