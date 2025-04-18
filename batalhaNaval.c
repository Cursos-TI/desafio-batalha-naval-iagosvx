#include <stdio.h>

int main() {
   
    int tabuleiro[10][10] = {0}; 
    int navio_horizontal[3] = {3, 3, 3}; 
    int navio_vertical[3] = {3, 3, 3};

  
    int linha_horizontal = 1;
    int coluna_horizontal = 2;

    int linha_vertical = 4;
    int coluna_vertical = 6;

    int i;


    if (coluna_horizontal + 3 <= 10) {
        int sobreposicao = 0;

        for (i = 0; i < 3; i++) {
            if (tabuleiro[linha_horizontal][coluna_horizontal + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
            }
        } else {
            printf("Erro: Sobreposição detectada no navio horizontal.\n");
        }
    } else {
        printf("Erro: Navio horizontal ultrapassa os limites do tabuleiro.\n");
    }


    if (linha_vertical + 3 <= 10) {
        int sobreposicao = 0;

        for (i = 0; i < 3; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
                sobreposicao = 1;
                break;
            }
        }

        if (!sobreposicao) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
            }
        } else {
            printf("Erro: Sobreposição detectada no navio vertical.\n");
        }
    } else {
        printf("Erro: Navio vertical ultrapassa os limites do tabuleiro.\n");
    }

    
    printf("\nTabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
