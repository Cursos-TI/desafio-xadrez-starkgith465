#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
     int torrelinha , torrecoluna;
     int bispolinha , bispocoluna;
     int rainhalinha ,rainhacoluna;
     int i , j;
     
     // MOVIMENTO DA RAINHA
         printf(" movimento da torre \n");
        torrelinha = 4; //posicao de inicio da torre
        torrecoluna =4; //posicao de inicio da torre
        printf("posicao da torre \n");
       //MOVIMENTOS VERTICAIS
        for (i = 1;i <=8; i++){
             if (i != torrelinha){
             
                printf("%d ,%d\n", i,torrecoluna);
            }
             
        }
        // MOVIMENTOS HORIZONTAIS
        for (j = 1;j <= 8; i++){
             if (j != torrecoluna){
             
             printf("%d, %d\n", torrelinha, j);
             }
             
        }
        // MOVIMENTOS DO BISPO 
         while (i >= 1 && j >= 1){
         
            printf("%d,%d\n",i ,j);
            i--;
            j--;
         }
         i = bispolinha +1;
         j= bispocoluna +1;

          // DIAGONAL INFERIOR DIREITA 
            do{
              if (i <=8 && j <=8){
                 printf("%d,%d\n", i,j);
              }
              i++;
              j++;     
            
            } while (i <= 8 && j <=8){
               printf("%d,%d\n", i,j); j++; i++;

            }
              // DIAGONAL INFERIO ESQUERDA 

              i
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

    return 0;
}
