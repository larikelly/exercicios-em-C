/*Um cinema que possui capacidade de 20 lugares está sempre lotado. Certo dia cada espectador respondeu a um questionário, onde constava:
- sua idade;
- sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
Elabore um programa que, recebendo estes dados calcule e mostre:
a. a quantidade de respostas ótimo;
b. a diferença percentual entre respostas bom e regular;
c. a média de idade das pessoas que responderam ruim;
d. a porcentagem de respostais péssimo e a maior idade que utilizou esta opção;
e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que
respondeu ruim. */
#include <stdio.h>
int main () {
    int idade[5], opniao[5];
    int i;

    for (i = 0; i < 5; i++) {
    printf("Digite sua idade:");
    scanf ("%d", &idade[i]);
    
    printf("Digite sua opnião: (0 para péssimo, 1 para bom, 2 para regular, 3 para bom e 4 para ótimo):");
    scanf ("%d", &opniao[i]);
    }

int contadorRuim = 0; 
int contadorBom = 0; 
int contadorRegular = 0;

    for (int i = 0; i < 5; i++) {
        if (opniao[i] == 4){
            contadorRuim ++;
        }
        if (opniao[i] == 2) {
            contadorRegular ++;
        }
        if (opniao[i] == 1){
            contadorBom ++;
        }}

printf ("o numero de ruins e: %d ", contadorRuim);

int porcBom = contadorBom*100/5;
int porcRuim = contadorRuim*100/5;
int diferencaPercentual = porcRuim - porcBom;

printf ("A diferença percentual e: %d ", diferencaPercentual);

    return 0;
}