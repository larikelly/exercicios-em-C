//Jose precisa de ajuda em outra funcionalidade: o calculo da "media perfeita"da turma. A media perfeita e a media aritmetica simples das notas da turma, mas caso o resultado final seja maior que 8, ela sera igual a 10. Para isso, considere as notas dos 15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que resolva esse problema.
#include <stdio.h>
int main(){
    float vet[15], soma = 0;
    int i;

    for(i = 0; i < 15; i ++){
    printf("Digite a nota do aluno %d \n:", i);
    scanf("%f", &vet[i]);
    soma += vet[i];
    }

    float media;
    media = soma/15;

    if (media > 8) {
        media = 10; 
    }

    printf ("a media e %.2f", media);
    return 0;
}