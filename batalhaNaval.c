#include <stdio.h>  // Para printf
#include <string.h> // Para memset

// Função auxiliar para exibir o tabuleiro 10x10
void exibirMatriz(int linhas, int colunas, int matriz[][10]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10];
    
    // Inicializa o tabuleiro com 0 (posições vazias)
    memset(tabuleiro, 0, sizeof(tabuleiro));
    
    // Posicionamento dos quatro navios
    // Navio 1: Vertical (coluna 3, linhas 0 a 2)
    tabuleiro[0][3] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[2][3] = 3;
    
    // Navio 2: Horizontal (linha 5, colunas 1 a 3)
    tabuleiro[5][1] = 3;
    tabuleiro[5][2] = 3;
    tabuleiro[5][3] = 3;
    
    // Navio 3: Diagonal (de (2,2) a (4,4))
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;
    
    // Navio 4: Diagonal (de (6,6) a (8,4))
    tabuleiro[6][6] = 3;
    tabuleiro[7][5] = 3;
    tabuleiro[8][4] = 3;
    
    // Exibição do tabuleiro
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    exibirMatriz(10, 10, tabuleiro);
    
    return 0;
}