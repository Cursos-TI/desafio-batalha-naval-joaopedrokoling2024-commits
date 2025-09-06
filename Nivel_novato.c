#include <stdio.h>

int main() {
    // Tabuleiro 5x5 só para exemplo
    int tabuleiro[5][5] = {0};

    // Navio 1 (vertical) nas posições (0,0) até (2,0)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][0] = 1;
    }

    // Navio 2 (horizontal) nas posições (4,1) até (4,3)
    for (int j = 1; j < 4; j++) {
        tabuleiro[4][j] = 1;
    }

    // Exibir coordenadas ocupadas
    printf("Coordenadas ocupadas pelos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}
