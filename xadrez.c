#include <stdio.h>
#include <stdlib.h>

// Declaração de funções para cada peça
void menu();
void moverTorre(int casas, char direcao);
void moverBispo(int x, int y, int casas);
void moverRainha(int casas, char direcao);
void moverCavalo(int limite);

// Função principal
int main() {
    menu();
    return 0;
}

// Função para exibir o menu interativo
void menu() {
    int escolha, casas, limite;
    char direcao;

    while (1) { // Loop para permitir múltiplas interações do usuário
        printf("\n=== Simulador de Movimentos de Xadrez ===\n");
        printf("Escolha uma peça para simular o movimento:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nDigite o número de casas para a Torre: ");
                scanf("%d", &casas);
                printf("Digite a direção (C = Cima, B = Baixo, E = Esquerda, D = Direita): ");
                scanf(" %c", &direcao);
                moverTorre(casas, direcao);
                break;
            case 2:
                printf("\nDigite o número de casas para o Bispo (diagonal): ");
                scanf("%d", &casas);
                moverBispo(0, 0, casas);
                break;
            case 3:
                printf("\nDigite o número de casas para a Rainha: ");
                scanf("%d", &casas);
                printf("Digite a direção (C = Cima, B = Baixo, E = Esquerda, D = Direita, DI = Diagonal): ");
                scanf(" %c", &direcao);
                moverRainha(casas, direcao);
                break;
            case 4:
                printf("\nDigite o número de passos permitidos para o Cavalo: ");
                scanf("%d", &limite);
                moverCavalo(limite);
                break;
            case 5:
                printf("\nSaindo do programa...\n");
                exit(0);
            default:
                printf("\nEscolha inválida. Tente novamente.\n");
        }
    }
}

// Função recursiva para movimentar a Torre
void moverTorre(int casas, char direcao) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("Torre movendo para: ");
    if (direcao == 'C') {
        printf("Cima\n");
    } else if (direcao == 'B') {
        printf("Baixo\n");
    } else if (direcao == 'E') {
        printf("Esquerda\n");
    } else if (direcao == 'D') {
        printf("Direita\n");
    }
    moverTorre(casas - 1, direcao); // Chamada recursiva para próxima casa
}

// Função recursiva para movimentar o Bispo
void moverBispo(int x, int y, int casas) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("Bispo movendo para: Diagonal (x=%d, y=%d)\n", x + 1, y + 1);
    moverBispo(x + 1, y + 1, casas - 1); // Movimento diagonal recursivo
}

// Função para movimentar a Rainha (combinação de Torre e Bispo)
void moverRainha(int casas, char direcao) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("Rainha movendo para: ");
    if (direcao == 'C') {
        printf("Cima\n");
    } else if (direcao == 'B') {
        printf("Baixo\n");
    } else if (direcao == 'E') {
        printf("Esquerda\n");
    } else if (direcao == 'D') {
        printf("Direita\n");
    } else if (direcao == 'I') { // Movimento diagonal
        printf("Diagonal\n");
    }
    moverRainha(casas - 1, direcao); // Chamada recursiva para próxima casa
}

// Função para movimentar o Cavalo usando loops aninhados
void moverCavalo(int limite) {
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= limite; i++) { // Loop para simular passos
        for (int j = 1; j <= limite; j++) { // Loop aninhado para cada posição
            if ((i == 2 && j == 1) || (i == 1 && j == 2)) { // Movimento "L"
                printf("Cavalo movendo para (x+%d, y+%d)\n", i, j);
            }
        }
    }

    return 0;
}
