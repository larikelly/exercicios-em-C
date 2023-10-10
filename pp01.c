/*
Joãozinho é um estudante do ensino médio que possui um grande problema organização querendo que tudo sempre esteja organizado, sendo assim, estudar vetores está sendo um grande problema para ele pois quase sempre eles estão em ordens aleatórias.
Sabendo de suas habilidades com programação, ele lhe solicitou que você faça um progama que após ler o tamanho e todos os dados de um vetor, ponha o mesmo em ordem crescente, ou seja, um vetor como [1,7,5,3,5] deve virar [1,3,5,5,7]
*/
#include <stdio.h>
int main (){
    int n, i;

    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);

    int vet[n];

    for(i = 0; i < n; i++){
    printf ("Digite os valores do vetor: ");
    scanf("%d",&vet[i]);
    }

    int aux = 0, j;

   for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
        if (vet[j] > vet[j+1]) {
            aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = aux;
        }
    }
}
printf ("o vetor ordenado é:");
for (i = 0; i < n; i++) {
printf ("%d", vet[i]);
}
    return 0;
}
