//Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a pior nota são eliminadas. A sua nota fica sendo a média dos votos restantes.
//Você deve fazer um programa que receba o numero do ginasta e as notas dos sete jurados alcançadas pelo atleta em sua apresentação e depois informe a sua média, conforme a descrição acima informada (retirar o melhor e o pior salto e depois calcular a média com as notas restantes).
//As notas não são informados ordenadas. Um exemplo de saída do programa deve ser conforme o exemplo abaixo: Atleta: Aparecido Parente Nota: 9.9 Nota: 7.5 Nota: 9.5 Nota: 8.5 Nota: 9.0 Nota: 8.5 Nota: 9.7

//Resultado final:
//Atleta: 01
//Melhor nota: 9.9
//Pior nota: 7.5
//Média: 9,04

#include <stdio.h>
int main () {
    int i, numerodoAtleta;
    float melhorNota, piorNota, media, vet[8];

    printf ("Digite o numero do atleta: ");
    scanf ("%d", &numerodoAtleta);

    for (i = 0; i < 8; i++) {
        printf ("Digite a nota do jurado %d:", i+1);
        scanf ("%f", &vet[i]);
    }

    melhorNota = vet[0];
    piorNota = vet[0];
    
    for (i = 1; i < 8; i++) {
        if (vet[i] < piorNota) {
            piorNota = vet[i];
        }

        if (vet[i] > melhorNota) {
            melhorNota = vet[i];
        }
    }

    media = (piorNota + melhorNota) / 2;

    printf ("Tabela do atleta: %d\n", numerodoAtleta);
    printf ("Numero do atleta: %d \nMelhor nota: %.2f \nPior nota: %.2f \nMedia: %.2f \n", numerodoAtleta, melhorNota, piorNota, media);

    return 0;
}
