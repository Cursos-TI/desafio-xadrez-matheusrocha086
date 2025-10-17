#include <stdio.h>

int main() {
    printf("=== MOVIMENTAÇÃO DAS PEÇAS DE XADREZ ===\n\n");

    // 1. Movimento da TORRE direita (FOR)
    
    printf("Movimento da TORRE (para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita \n", i);
    }
    printf("A Torre se moveu 5 casas para a direita!\n\n");

   
    // 2. Movimento do BISPO diagonal (WHILE)
 
    printf("Movimento do BISPO (para a diagonal):\n");
    int i = 1;
    while (i <= 5) {
        printf("Casa %d: Diagonal \n", i);
        i++;
    }
    printf("O Bispo se moveu 5 casas na diagonal!\n\n");

   
    // 3. Movimento da RAINHA esquerda (DO-WHILE)

    printf("Movimento da RAINHA (para a esquerda):\n");
    int j = 1; //Coloquei a variável int diferente para dar uma diversificada
    do {
        printf("Casa %d: Esquerda \n", j);
        j++;
    } while (j <= 8);
    printf("A Rainha se moveu 8 casas para a esquerda!\n\n");


    return 0;
}
