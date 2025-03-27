#include <stdio.h>

// Declaração das funções
void moverTorre(int i);
void moverBispo(int i);
void moverRainha(int i);
void moverCavalo(int i);

int main() {
    int i = 0;
    // const int torre = 5;
    // const int bispo = 5;
    // const int rainha = 8;

    // Chama as funções que simulam as peças se movendo para a direção pré definida
    moverTorre(i);
    moverBispo(i);
    moverRainha(i);
    moverCavalo(i);

    return 0;
}

// Função para simular a Torre se movendo
void moverTorre(int i) {
    printf("Movendo a Torre\n");
    while(i < 5) {
        printf("Esquerda\n");
        i++;
    }
}

// Função para simular o Bispo se movendo
void moverBispo(int i) {
    printf("Movendo o Bispo\n");
    do {
        printf("Cima, Direita\n");
        i++;
    } while(i < 5);
}

// Função para simular a Rainha se movendo
void moverRainha(int i) {
    printf("Movendo a Rainha\n");
    for(i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }
}

void moverCavalo(int i) {
    printf("Movendo o Cavalo\n");
    do {
        for(i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        i++;
    } while(i < 1);
}