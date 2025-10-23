#include <stdio.h>

// Função recursiva para o movimento da TORRE
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Direita\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do BISPO
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Diagonal (direita + cima)\n", casas);
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da RAINHA
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Esquerda\n", casas);
    moverRainha(casas - 1);
}

int main() {
    printf("=== MOVIMENTAÇÃO DAS PEÇAS DE XADREZ ===\n\n");

    // 1. TORRE (Recursividade)
    printf("Movimento da TORRE (para a direita):\n");
    moverTorre(5);
    printf("A Torre se moveu 5 casas para a direita!\n\n");

    // 2. BISPO (Recursividade)
    printf("Movimento do BISPO (na diagonal direita + cima):\n");
    moverBispo(5);
    printf("O Bispo se moveu 5 casas na diagonal!\n\n");

    // 3. RAINHA (Recursividade)
    printf("Movimento da RAINHA (para a esquerda):\n");
    moverRainha(8);
    printf("A Rainha se moveu 8 casas para a esquerda!\n\n");

    // 4. CAVALO (Loop Aninhado)
    printf("Movimento do CAVALO (em L - duas para cima e uma para a direita):\n");
    for (int linha = 1; linha <= 2; linha++) { // Movimento para cima
        printf("Movimento %d: Cima\n", linha);

        if (linha == 2) { // Move para a direita após subir 2
            for (int coluna = 1; coluna <= 1; coluna++) {
                printf("   Movimento %d: Direita\n", coluna);
            }
        }
    }
    printf("O Cavalo se moveu em L (2 casas para cima e 1 casa para a direita)!\n\n");

    return 0;
}
