#include <stdio.h>

int main() {
    // Definição do número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Simulação do movimento da Torre
    // A Torre se move 5 casas para a direita usando um laço for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as saídas

    // Simulação do movimento do Bispo
    // O Bispo se move 5 casas na diagonal para cima e à direita usando um laço while
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Linha em branco para separar as saídas

    // Simulação do movimento da Rainha
    // A Rainha se move 8 casas para a esquerda usando um laço do-while
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
