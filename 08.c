//Gabriel estava desenvolvendo um minigame, mas encontrou dificuldades no seu algoritmo. A ideia do
//minigame e a seguinte: haveria uma matriz 3x3 onde cada elemento seria atribuido um valor inteiro.
//Se o valor fosse par, ele deveria ser substituido por 1; se fosse ímpar, por -1. Apos essa substituicao, o programa deveria exibir a nova matriz atualizada. Gabriel solicitou sua ajuda para realizar essa tarefa.

#include <stdio.h>
int main () {
    int mat [3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        printf ("Digite um numero para %d %d:\n", i,j);
        scanf ("%d", &mat[i][j]);
    }   }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat [i][j] % 2 == 0) {mat [i][j] = 1;
            } else { 
                mat [i][j] = - 1;
            }
}}
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        printf("%d\n", mat[i][j]);
        }}

return 0; 
}