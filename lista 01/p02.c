//Pedro e João gostam de jogar "Caça ao tesouro". João escolhe uma posição na matriz para ser o tesouro e Pedro tenta adivinhar onde está o tesouro fazendo tentativas. Se Pedro errar, João diz quantas linhas e colunas a tentativa está de distancia do tesouro e mostra um mapa atualizado na matriz 5x5, com 0 nos locais ainda não tentados e 1 nos locais já tentados. Se Pedro acertar, João avisa e diz quantas tentativas foram necessárias. 
//João no entretanto está ficando cansado de fazer tudo manualmente e assim Pedro pediu para você fazer um codigo que faça o trabalho de João, de forma que João precise somente entrar com a linha e coluna de onde está o tesouro. 
#include <stdio.h>

int main() {
    int mat[5][5] = {0};
    int i, j;
    int linTesouro, colTesouro;
    int tentLin, tentCol;
    int contador = 0;  // Inicializa o contador com 0
    int distanciaLinhas, distanciaColunas;

    printf("Digite onde esta o tesouro (lin col): ");
    scanf("%d %d", &linTesouro, &colTesouro);

    while (1) {
        printf("Digite a sua tentativa (lin col): ");
        scanf("%d %d", &tentLin, &tentCol);

        if (tentLin == linTesouro && tentCol == colTesouro) {
            printf("Voce acertou!\n");
            break; 
        } else {
            printf("Voce errou!\n");
            contador++;
            distanciaLinhas = linTesouro - tentLin;
            distanciaColunas = colTesouro - tentCol;
            printf("O tesouro esta a %d linhas e %d colunas do seu palpite.\n", 
                   distanciaLinhas, distanciaColunas);
            mat[tentLin][tentCol] = 1;  
            

            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
        }
    }

    printf("Foram necessárias %d tentativas.\n", contador);

    return 0;
}
