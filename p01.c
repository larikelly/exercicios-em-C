//A formula 1 é um dos maiores esportes e qualquer avanço na precisão de dados é bem vindo. O comite internacional de esportes solicitou um programa que faça o seguinte: 1. Receba a distancia da pista em metros; 2. Receba o tempo de corrida em segundo de cada um dos 8 competidores; 3. Mostre o numero do competidor e a velocidade media (VM) em Km/h de cada competidor no pódio (1º, 2º e 3º). Primeiro o numero e Vm do 1º lugar, seguido do numero e Vm do 2º e logo após os dados do 3º.
//Obs: 1 metro por segundo é igual a 3.6 quilometros por hora. - VM = tamanho da pista dividido pelo tempo de corrida. 
#include <stdio.h>
int main (){
    int i;
    float vet[8], VM, met;

    printf("Digite o distancia da pista em metros:\n");
    scanf ("%f", &met);

for (i = 0; i < 8; i++){
    printf("Digite o tempo em segundos do competidor %d: \n", i);
    scanf ("%f", &vet[i]);
    VM = met/vet[i];
    vet[i] = 3.6*VM;
}
//em ordem
int j, aux;
  for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (vet[j] > vet[j+1]) {
                // Troca os elementos
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

printf ("Ordem de chegada");
for (i = 0; i < 3; i++){
    printf ("%f",vet[i]);
}


    return 0;
}