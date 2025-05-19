#include <stdio.h>

void movtorre(){
    
        for(int i=1;i<=5;i++){
            printf("Direita\n");
        }
    }

void movbispo(){
    for(int i =1; i<=5; i++){
        for(int j=1;j<=1;j++){
        printf("Cima esquerda \n");
        }
    }

}

void movrainha(){
    for(int i =1;i<=8;i++){
        printf("Esquerda\n");
    }
}
void movcavalo(){
    for(int i =0;i<2; i++){
        printf("Cima\n");
         for(int j=0;j<1 && i==1;j++){
        printf("Direita\n");
        
    } //o segundo for só vai ser executado quando i for = 1, caso o operador & não estivesse ali, a saída seria: Cima Direita Cima Direita.
        
    }
   
}


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("TORRE: \n");

    movtorre();
    printf("\n");

    printf("BISPO: \n");
    movbispo();
    printf("\n");

    printf("RAINHA: \n");
    movrainha();
    printf("\n");

    printf("CAVALO: \n");
    movcavalo();

 
    









    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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
