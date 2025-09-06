#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio horizontal na linha 0
    for (int j = 0; j < 4; j++) {
        tabuleiro[0][j] = 3;
    }

    // Navio vertical na coluna 9
    for (int i = 2; i < 6; i++) {
        tabuleiro[i][9] = 3;
    }

    // Navio diagonal principal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Outro navio diagonal inversa
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibir tabuleiro
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
