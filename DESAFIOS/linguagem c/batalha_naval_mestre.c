#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOARD_SIZE 10




typedef struct {
    char name[20];
    int size;
} Ship;

typedef struct {
    char board[BOARD_SIZE][BOARD_SIZE];
} Player;

void initializeBoard(Player *player) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            player->board[i][j] = ' ';
        }
    }
}

void exibir_campo_batalha(Player *player) {
    printf("   ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d   ", i + 1);
    }
    printf("\n");

    printf("  ┌");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("───┬");
    }
    printf("\n");

    char letras[] = "ABCDEFGHIJ";
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%c │", letras[i]);

        for (int j = 0; j < BOARD_SIZE; j++) {
            if (player->board[j][i] == 'O') {
                printf("███");
            } else if (player->board[j][i] == 'X') {
                printf(" X ");
            } else if (player->board[j][i] == '-') {
                printf(" - ");
            } else {
                printf("   ");
            }
            printf("│");
        }
        printf("\n");

        if (i < BOARD_SIZE - 1) {
            printf("  ├");
            for (int j = 0; j < BOARD_SIZE; j++) {
                printf("───┼");
            }
            printf("\n");
        }
    }

    printf("  └");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("───┴");
    }
    printf("\n");
}

bool checkWinCondition(Player *player) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (player->board[i][j] == 'O') {
                return false;
            }
        }
    }
    return true;
}

void showAttackedPositions(Player *player) {
    printf("Posições já atacadas pelo adversário:\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (player->board[i][j] == 'X') {
                printf("(%d, %d) ", i + 1, j + 1);
            }
        }
    }
    printf("\n");
}

void playerTurn(Player *attacker, Player *defender, int playerNumber) {
    printf("Jogador %d, turno:\n", playerNumber);
    if (playerNumber == 1) {
        printf("Campo de batalha do jogador 1:\n");
        exibir_campo_batalha(attacker);
        printf("Campo de batalha do jogador 2:\n");
        exibir_campo_batalha(defender);
    } else {
        printf("Campo de batalha do jogador 1:\n");
        exibir_campo_batalha(defender);
        printf("Campo de batalha do jogador 2:\n");
        exibir_campo_batalha(attacker);
    }

    printf("Digite a posição de ataque (x y): ");
    int x, y;
    scanf("%d %d", &x, &y);
    x--; // Convert to 0-based index
    y--; // Convert to 0-based index

    if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
        printf("Posição inválida. Tente novamente.\n");
        playerTurn(attacker, defender, playerNumber);
        return;
    }

    if (defender->board[x][y] == 'O') {
        printf("Acertou um navio!\n");
        defender->board[x][y] = 'X';
    } else {
        printf("Água!\n");
        defender->board[x][y] = '-';
    }
}

bool isValidPosition(int x, int y) {
    return x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE;
}

bool isOverlap(Player *player, int x, int y, int shipSize, int isVertical) {
    if (isVertical) {
        if (x + shipSize > BOARD_SIZE) {
            return true;
        }

        for (int i = 0; i < shipSize; i++) {
            if (!isValidPosition(x + i, y) || player->board[x + i][y] == 'O') {
                return true;
            }
        }
    } else {
        if (y + shipSize > BOARD_SIZE) {
            return true;
        }

        for (int i = 0; i < shipSize; i++) {
            if (!isValidPosition(x, y + i) || player->board[x][y + i] == 'O') {
                return true;
            }
        }
    }

    return false;
}

void allocateShipsForPlayer(Player *player, int playerNumber) {
    Ship ships[] = {
        {"Porta-aviões", 4},
        {"Navio-tanque", 3},
        {"Contratorpedeiros", 2},
        {"Submarinos", 1}
    };

    printf("Alocar navios para o Jogador %d:\n", playerNumber);
    for (int i = 0; i < 4; i++) {
        int shipSize = ships[i].size;
        printf("Digite a posição (x y) para o navio %s de tamanho %d: ", ships[i].name, shipSize);
        
        while (true) {
            printf("Digite a posição (x y) para o navio de tamanho %d: ", shipSize);
            int x, y;
            scanf("%d %d", &x, &y);
            x--; // Convert to 0-based index
            y--; // Convert to 0-based index

            if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
                printf("Posição inválida. Tente novamente.\n");
                continue;
            }

            int isVertical = 0;
            if (shipSize != 1) {
                printf("O navio será vertical? (0 - Não, 1 - Sim): ");
                scanf("%d", &isVertical);

                if (isVertical != 0 && isVertical != 1) {
                    printf("Opção inválida. Tente novamente.\n");
                    continue;
                }
            }

            if (isVertical) {
                if (isOverlap(player, x, y, shipSize, 1)) {
                    printf("Sobreposição de navios. Tente novamente.\n");
                    continue;
                }

                for (int i = 0; i < shipSize; i++) {
                    player->board[x + i][y] = 'O';
                }
            } else {
                if (isOverlap(player, x, y, shipSize, 0)) {
                    printf("Sobreposição de navios. Tente novamente.\n");
                    continue;
                }

                for (int i = 0; i < shipSize; i++) {
                    player->board[x][y + i] = 'O';
                }
            }

            exibir_campo_batalha(player);
            break;
        }
    }
}


void startGame(Player *player1, Player *player2) {
    bool player1Turn = true;

    printf("Campo de batalha do jogador 1:\n");
    exibir_campo_batalha(player1);
    printf("Campo de batalha do jogador 2:\n");
    exibir_campo_batalha(player2);

    while (true) {
        if (player1Turn) {
            playerTurn(player1, player2, 1);
            showAttackedPositions(player1);

            if (checkWinCondition(player2)) {
                printf("Jogador 1 venceu!\n");
                break;
            }
        } else {
            playerTurn(player2, player1, 2);
            showAttackedPositions(player2);

            if (checkWinCondition(player1)) {
                printf("Jogador 2 venceu!\n");
                break;
            }
        }

        player1Turn = !player1Turn;
    }
}


int main() {
    int choice;
    Player player1, player2;
    bool shipsAllocated = false;

    do {
        printf("\nMenu:\n");
        printf("1 - Alocar navios\n");
        printf("2 - Iniciar jogo\n");
        printf("3 - Sair do jogo\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        while (getchar() != '\n'); // Limpa o buffer de entrada

        switch (choice) {
            case 1:
                printf("\nAlocar navios:\n");
                printf("Jogador 1:\n");
                allocateShipsForPlayer(&player1, 1);
                printf("Jogador 2:\n");
                allocateShipsForPlayer(&player2, 2);
                shipsAllocated = true;
                break;

            case 2:
                printf("\nIniciar jogo:\n");
                if (shipsAllocated) {
                    startGame(&player1, &player2);
                } else {
                    printf("Por favor, aloque os navios antes de iniciar o jogo.\n");
                }
                break;

            case 3:
                printf("\nSair do jogo.\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
        }

    } while (choice != 3);

    return 0;
}