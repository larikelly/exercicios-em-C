//Jose esta enfrentando diculdades em uma outra funcionalidade de seu sistema escolar. Ele precisa calcular a "media funcional"da turma, composta por 10 alunos. A media funcional e a media das notas de todos os alunos que nao foram reprovados, ou seja, os alunos que obtiveram nota maior que 4. Para isso, considere as notas dos 10 alunos da turma como um vetor de 10 valores reais e desenvolva um algoritmo que resolva esse problema.

#include <stdio.h>
int main () {
    int i, contador = 0;
    float vet[10];

    for (i = 0; i < 10; i++){
    printf ("Digite a média do aluno %d: ", i);
    scanf("%f", &vet[i]);
    }

    float media = 0, soma;

    for (i = 0; i < 10; i++){
    if (vet[i] > 4){
        contador ++;
        soma += vet[i];
    }}
    media = soma/contador;

    printf ("a media funcional e: %.2f", media);
    return 0;
}