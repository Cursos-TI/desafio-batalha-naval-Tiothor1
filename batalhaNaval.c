#include <stdio.h>

int main() {

    // Criando tabuleiro 5x5 (tudo inicializando como 0)
    int tabuleiro[5][5];
    
    // Preenchendo de água o tabuleiro (0)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }

    // Posicionando um navio verticalente na coluna 2
    for (int i = 1; i <= 3; i++) { // Ocupa 3 casas na mesma coluna
        tabuleiro[i][2] = 1; // 1 representa um navio
    }

    // Posicionando um navio horizontalmente na linha 4
    for (int j = 0; j <= 2; j++) { // Oculpa 3 casas na mesma linha
        tabuleiro[4][j] = 1;
    }

    // Exibindo o tabuleiro na tela

    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", tabuleiro[i][j]); // Mostra o valor do tabuleiro
        }
        printf("\n"); // Quebra de linha para organizar a visualização
    }

    return 0;
}
