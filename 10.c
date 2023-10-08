// Clara e uma estudante que possui uma tarefa tediosa de criar uma matriz 3x3, onde o valor de cada elemento na linha "i"e na coluna "j" é igual a soma de "i"e "j". Ela estva sem tempo e pediu que voce desenvolva um algoritmo que crie e imprima essa matriz automaticamente.
#include <stdio.h>

int main() {
    int matriz[3][3]; 
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = i + j;
        }
    }

    printf("Matriz 3x3 com a soma de i e j:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

