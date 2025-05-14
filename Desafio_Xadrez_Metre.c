#include <stdio.h>

// Função recursiva para simular o movimento da Torre para a direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para simular o movimento da Rainha para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para simular o movimento do Bispo com apoio de loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    // Loop externo: movimento vertical
    for (int i = 0; i < vertical; i++) {
        // Loop interno: movimento horizontal
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva reduzindo uma unidade em cada direção
    moverBispo(vertical - 1, horizontal - 1);
}

// Movimento do Cavalo: duas casas para cima e uma para a direita, com controle de fluxo
void moverCavalo() {
    const int movimentosVerticais = 2;
    const int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) continue; // Exemplo de controle de fluxo: pula a iteração 1
        printf("Cima\n");
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (j > 0) break; // Garante que só imprime uma vez a direita
            printf("Direita\n");
        }
    }

    printf("\n");
}

int main() {
    // Quantidade de casas para cada peça
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispoVertical = 1;
    const int casasBispoHorizontal = 5;

    // Movimento da Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo com recursão e loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // Movimento da Rainha com recursão
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();
