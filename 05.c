//Roberto precisa adicionar mais uma funcionalidade ao seu programa. Ele possui outra empresa com 10 filiais e necessita de um algoritmo que, tendo um vetor com os valores reais representando lucro (valores positivos) ou prejuzo (valores negativos) das 10 fiais, informe quantas delas estao dando prejuzo.

#include <stdio.h> 
int main () {
    int i, contador = 0;
    float vet[10];
    
    for (i = 0; i < 10; i++) {
    printf ("Digite os valores da filial %d \n", i);
    scanf ("%f", &vet[i]);
    }
    for (i = 0; i < 10; i++); 
        if (vet[i] < 0) {
        contador ++;
    }
    printf ("%d empresas esta(ao) dando prejuizo", contador);

    return 0;
}
