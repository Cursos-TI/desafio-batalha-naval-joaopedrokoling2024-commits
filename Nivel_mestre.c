#include <stdio.h>

#define N 5  // tamanho fixo para as habilidades

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[N][N] = {0};
    int cruz[N][N] = {0};
    int octaedro[N][N] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < N; j++) cone[2][j] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Cruz
    cruz[0][2] = 1;
    for (int j = 0; j < N; j++) cruz[1][j] = 1;
    cruz[2][2] = 1;

    // Exibir
    printf("Habilidade em Cone:\n");
    imprimirMatriz(cone);

    printf("Habilidade em Octaedro:\n");
    imprimirMatriz(octaedro);

    printf("Habilidade em Cruz:\n");
    imprimirMatriz(cruz);

    return 0;
}
