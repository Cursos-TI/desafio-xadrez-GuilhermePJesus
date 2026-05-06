#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverTorre(int torre){
    if (torre > 0){
        printf("Direita.\n");
        moverTorre(torre - 1);
    }
}

void moverBispo(int bispo){
    if (bispo > 0){
        printf("Cima, Direita.\n");
        moverBispo(bispo - 1);
    }
}

void moverRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda.\n");
        moverRainha(rainha - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, j, torre = 5, bispo = 5, rainha = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n=== BISPO ===\n");
    moverBispo(bispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n=== TORRE ===\n");
    moverTorre(torre);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n=== RAINHA ===\n");
    moverRainha(rainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n=== CAVALO ===\n");
    for (i = 0; i < 2; i++) {
        printf("Cima.\n");
        for (j = 0; j < 1; j++) {
            printf("Direita.\n");
        }
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
