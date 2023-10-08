//Roberto deseja adicionar mais uma funcionalidade ao seu programa. Ele possui uma lista de 10 IDs de filiais. O algoritmo deve fazer o seguinte: (a) Solicitar ao usuario que insira um ID especifico;(b) Verifcar se o ID inserido esta presente na lista de IDs das filiais;(c) Se o ID estiver na lista, o programa deve informar que o ID pertence a uma filial da lista; (d) Caso contrario, o programa deve informar que o ID digitado nao corresponde a nenhuma filial da lista.

#include <stdio.h>
int main () {
    int vet[3];
    int i, ID;

    for (i = 0; i < 3; i++) {
        printf ("Digite um ID para a posicao %d:", i);
        scanf ("%d", &vet[i]);
    }

        printf ("Digite o ID:"); //para o usuario
        scanf ("%d", &ID);

    for (i = 0; i < 3; i++) {
    if (ID == vet[i]) {
        printf("O ID pertence a uma empresa.\n");
    } 
    else {
        printf("O ID nao pertence a esta empresa.\n");
    }
}
    return 0;
}
