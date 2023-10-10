/*Um pecuarista possui uma determinada quantia de bois, que possuem um identificador numérico (de 1 a n) cada um. Faça um programa que:
a. receba o peso de cada boi, um por vez, e o armazene em um vetor. Se o peso digitado for 0 significa que não há mais bois a serem digitados;
b. mostre a lista de todos os bois com seus identificadores e também os identificadores do boi mais gordo e do boi mais magro.  */
#include <stdio.h>
int main (){
    int i, n;

    printf("Digite quantos bois são:");
    scanf("%d",&n);

    float peso[n];

    for (i = 0; i < n; i++){
    printf("Digite o peso dos bois (digite 0 para encerrar):");
    scanf("%f",&peso[i]);
          if (peso[i] == 0) 
          {break;}
    }

    for (i = 0; i < n; i++){
    printf ("O indetificador é %d o peso é: %.2f\n", i+1, peso[i]);
    }

    int boiMagro = peso[0];
    int boiGordo = peso[0];

    for (i = 0; i < n; i++){
        if (peso [i] > boiGordo){
            boiGordo = peso [i];}
        if (peso [i] < boiMagro){
            boiMagro = peso [i];}
    }

    printf ("o peso boi mais gordo é: %d e o boi mais magro é: %d", boiGordo, boiMagro);

    return 0;
}