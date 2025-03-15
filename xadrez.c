#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    int main (){
        int linha,coluna,opcao; // variaves para a posicao inicial

         // SOLICITA AO USUARIO A ESCOLHA DA PECA
           printf9("informe a posicao inicial linha de 0 a 7");
           scanf("%d %d" ,&linha,&coluna); // le a entrada do usuario para linha e coluna 

         // SOLICITA AO USUARIO A ESCOLHA DA PECA 
         printf("escolha a peca (1-torre,2-bispo,3-rainha)");
         scanf("%d",&opcao); // le a entrada do usuario para as pecas escolhidas
         
         // verifica se a posicao inicial e fornecida e valida entre 0 e 7
            if (linha < 0 || linha >= 8 || coluna < 0 || coluna >= 8){   
                printf(" posicao invalida \n"); // mostra uma messagem de erro 
                return 1; // encerra o programa com um codigo de erro 
            }
            
printf(" movimentos possives \n "); indica que os movimentos 

 // bloco de codigo para os movimentos da torre 
  if(opcao ==1){
     printf("movimentos da torre \n"); //

      //movimentos verticais mesma colun linha varia 

      for (int i = 0; i < 8; i++){
          if(i != linha)
            printf("linha %d coluna %d \n", i , coluna);
      }
      
// movimentos horizontaes mesma linha coluna varia 
 for (int j = 0; i < 8; j++){
     if (j != coluna)
       printf(" linha %d coluna %d\n", linha, j);
    }
 
  // bloco de godigo do movimento do  bispo
      for (int i = 1; i < 8; i++){
          if (linha + 1<8 && coluna + < 8) // diagonal para baixo a direita
           printf("linha %d coluna %d\n", linha + i , coluna + i);

           if(linha -i >= 0 && coluna - i >=0) // diagonal para cima esquerda
            printf("linha %d coluna %d\n",linha-i,coluna-i);

            if (linha + i < 8 && coluna - i >=0)// diagonal para baixo a esquerda
              printf("linha %d, coluna %d \n", linha + i, coluna - i);

            if(linha - i < 8 && coluna - i >= 0) //diagonal para cima a direita
               printf("linha %d, coluna %d \n", linha -i, coluna + i);

      }
      
 
 {
    /* code */
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

    return 0;
}
