#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {
    int tabuleiro[TAM][TAM] = {0}; 
    int i;

    int linha1 = 1, coluna1 = 2;
    if (coluna1 + NAVIO <= TAM) {
        for (i = 0; i < NAVIO; i++) {
            tabuleiro[linha1][coluna1 + i] = 3;
        }
    }

    int linha2 = 4, coluna2 = 6;
    if (linha2 + NAVIO <= TAM) {
        for (i = 0; i < NAVIO; i++) {
            if (tabuleiro[linha2 + i][coluna2] == 0) {
                tabuleiro[linha2 + i][coluna2] = 3;
            }
        }
    }

    int linha3 = 0, coluna3 = 0;
    if (linha3 + NAVIO <= TAM && coluna3 + NAVIO <= TAM) {
        for (i = 0; i < NAVIO; i++) {
            if (tabuleiro[linha3 + i][coluna3 + i] == 0) {
                tabuleiro[linha3 + i][coluna3 + i] = 3;
            }
        }
    }


    int linha4 = 0, coluna4 = 9;
    if (linha4 + NAVIO <= TAM && coluna4 - (NAVIO - 1) >= 0) {
        for (i = 0; i < NAVIO; i++) {
            if (tabuleiro[linha4 + i][coluna4 - i] == 0) {
                tabuleiro[linha4 + i][coluna4 - i] = 3;
            }
        }
    }


    printf("\nTabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");
    for (int l = 0; l < TAM; l++) {
        for (int c = 0; c < TAM; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }

    return 0;
}