//Por fim, Roberto deseja que o programa, ao ler o faturamento de 8 filiais, realize as seguintes tarefas:
//(a) Armazene os faturamentos em um unico vetor;
//(b) Calcule a soma de todos os elementos desse vetor;
//(c) Conte quantos deles representam lucro (valores positivos).
#include <stdio.h>
int main () {
    float vet[4], soma;
    int i, contador = 0;

for (i = 0; i < 4; i++) { 
    printf ("Digite o faturamento da filial %d:\n", i);
    scanf ("%f", &vet[i]);  

soma += vet[i];
}
for (i = 0; i < 4; i++) 
if (vet[i] > 0) {
    contador ++;
}
printf ("os faturamentos são %.2f, a soma deles é %.2f e %d empresas estao dando lucro \n", vet[i], soma, contador);

return 0;
}