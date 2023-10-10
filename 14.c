//Escreva um programa para:
//a. pedir 10 números ao usuário e armazenar esses valores em um array
//b. pedir um outro número ao usuário e calcular e mostrar quantos números do array são inferiores a esse número
#include <stdio.h>
int main (){
    int vet[10], i, outroNumero;

    for (i = 0; i < 10; i++){
        printf("Digite dez numeros: ");
        scanf("%d",&vet[i]);
            }
        printf ("Digite outro numero:");
        scanf("%d",&outroNumero);

int contador = 0;
    for (i = 0; i < 10; i++){
        if (vet[i] < outroNumero){
            contador ++;
        }}
    printf ("Existem %d inferiores ao %d", contador, outroNumero);
    return 0;
}