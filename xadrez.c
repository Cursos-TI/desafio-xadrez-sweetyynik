#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para simular o bispo (extra, como o desafio pede)
void moverBispoComLoops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) { // apenas se estiver na diagonal principal
                printf("Cima Direita\n");
            }
        }
    }
}

// Função com loops aninhados complexos para o movimento do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosFeitos = 0;

    // Tentamos simular um tabuleiro 3x3, só para representar a lógica
    for (int linha = 2; linha >= 1; linha--) { // duas casas para cima
        for (int coluna = 1; coluna <= 2; coluna++) {
            if (linha == 1 && coluna == 2) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosFeitos++;
                break; // Após o movimento em L, saímos
            }

            // Skip outras combinações que não fazem parte do "L"
            continue;
        }
        if (movimentosFeitos > 0) break;
    }
}

// Função principal
int main() {
    // -------- TORRE --------
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // -------- BISPO (recursivo) --------
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // -------- BISPO (com loops aninhados) --------
    printf("Movimento do Bispo (Com Loops Aninhados):\n");
    moverBispoComLoops(5, 5);
    printf("\n");

    // -------- RAINHA --------
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // -------- CAVALO --------
    moverCavalo();

    return 0;
}
