#include <stdio.h>

int main() {
    // Criando tabuleiro somente com água
    int agua = 0;
    int tabuleiro[10][10]; // Primeiro tabuleiro
    int tabuleiro2[10][10]; // Segundo tabuleiro com navios fixos
    int tabuleiro3[10][10]; // Terceiro tabuleiro com navios via entrada do usuário

    // Inicializa todos os tabuleiros com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = agua;
            tabuleiro2[i][j] = agua;
            tabuleiro3[i][j] = agua;
        }
    }

    printf("Tabuleiro Batalha Naval (Somente Agua)\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------------\n");

    int navio = 3; // Valor que representa navio
    int tamanhoNavio = 3;

    // Tabuleiro 2 - Navios com posição fixa
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;
    int linhaVertical = 5;
    int colunaVertical = 6;

    // Posiciona navio horizontal no tabuleiro2
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro2[linhaHorizontal][colunaHorizontal + i] = navio;
    }

    // Posiciona navio vertical no tabuleiro2
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro2[linhaVertical + i][colunaVertical] = navio;
    }

    printf("Tabuleiro com Navios (Posição Fixa)\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro2[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------------\n");

    // Tabuleiro 3 - Posições escolhidas pelo usuário
    int userLinhaH, userColunaH;
    int userLinhaV, userColunaV;

    printf("Digite a linha inicial do navio horizontal (0 a 9): ");
    scanf("%d", &userLinhaH);
    printf("Digite a coluna inicial do navio horizontal (0 a 7): "); // até 7 para caber o navio
    scanf("%d", &userColunaH);

    printf("Digite a linha inicial do navio vertical (0 a 7): "); // até 7 para caber o navio
    scanf("%d", &userLinhaV);
    printf("Digite a coluna inicial do navio vertical (0 a 9): ");
    scanf("%d", &userColunaV);

    // Posiciona navio horizontal no tabuleiro3
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro3[userLinhaH][userColunaH + i] = navio;
    }

    // Posiciona navio vertical no tabuleiro3
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro3[userLinhaV + i][userColunaV] = navio;
    }

    printf("Tabuleiro com Navios (Escolhido pelo Usuario)\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
