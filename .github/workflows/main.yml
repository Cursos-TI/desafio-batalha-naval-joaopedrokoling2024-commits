#include <stdio.h>
#define TAM 10 // tamanho do tabuleiro (10x10)

int main() {
    // Tabuleiro inicializado com zeros
    int tabuleiro[TAM][TAM] = {0};

    // NAVIO 1 (vertical, tamanho 3)
    int x1 = 2, y1 = 4; // coordenada inicial (linha, coluna)
    int tamanho1 = 3;

    for (int i = 0; i < tamanho1; i++) {
        tabuleiro[x1 + i][y1] = 1; // marca navio no tabuleiro
    }

    // NAVIO 2 (horizontal, tamanho 4)
    int x2 = 6, y2 = 2; // coordenada inicial
    int tamanho2 = 4;

    for (int i = 0; i < tamanho2; i++) {
        tabuleiro[x2][y2 + i] = 2; // marca navio no tabuleiro
    }

    // EXIBIÇÃO DAS COORDENADAS
    printf("Coordenadas dos Navios:\n");

    // Navio 1 (vertical)
    printf("\nNavio 1 (Vertical, tamanho %d):\n", tamanho1);
    for (int i = 0; i < tamanho1; i++) {
        printf("(%d, %d)\n", x1 + i, y1);
    }

    // Navio 2 (horizontal)
    printf("\nNavio 2 (Horizontal, tamanho %d):\n", tamanho2);
    for (int i = 0; i < tamanho2; i++) {
        printf("(%d, %d)\n", x2, y2 + i);
    }

    // OPCIONAL: mostrar tabuleiro inteiro
    printf("\nTabuleiro (0 = vazio, 1 = navio 1, 2 = navio 2):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
