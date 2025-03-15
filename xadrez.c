#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação d

#include <stdio.h>



#include <stdio.h>

int main() {
    int escolha, casas, direcao;

    while (1) {
        // Menu principal
        printf("Escolha a peça para mover:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        if (escolha < 1 || escolha > 4) {
            printf("Opção inválida! Tente novamente.\n\n");
            continue;
        }

        printf("Digite o número de casas a serem movidas: ");
        scanf("%d", &casas);

        if (casas <= 0) {
            printf("O número de casas deve ser maior que 0! Tente novamente.\n\n");
            continue;
        }

        if (escolha != 4) {
            printf("Escolha a direção:\n");
            printf("1 - Cima\n");
            printf("2 - Baixo\n");
            printf("3 - Esquerda\n");
            printf("4 - Direita\n");
            printf("Digite sua escolha: ");
            scanf("%d", &direcao);

            if (direcao < 1 || direcao > 4) {
                printf("Direção inválida! Tente novamente.\n\n");
                continue;
            }
        }

        // Execução com base na escolha
        switch (escolha) {
            case 1:
                printf("Movimento da Torre:\n");
                for (int i = 0; i < casas; i++) {
                    if (direcao == 1) printf("Cima\n");
                    else if (direcao == 2) printf("Baixo\n");
                    else if (direcao == 3) printf("Esquerda\n");
                    else printf("Direita\n");
                }
                break;

            case 2:
                printf("Movimento do Bispo:\n");
                for (int i = 0; i < casas; i++) {
                    printf("Diagonal\n");
                }
                break;

            case 3:
                printf("Movimento da Rainha:\n");
                for (int i = 0; i < casas; i++) printf("Cima\n");
                for (int i = 0; i < casas; i++) printf("Diagonal\n");
                break;



        return 0;
} 

  


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    

}
  return 0;
}