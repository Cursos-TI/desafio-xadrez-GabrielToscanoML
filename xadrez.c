#include <stdio.h>

// Declaração das funções
void moverTorre(int i);
void moverBispo(int i);
void moverRainha(int i);
void moverCavalo(int i);

int main() {
    const int torre = 5;
    const int bispo = 5;
    const int rainha = 8;

    // Chama as funções que simulam as peças se movendo para a direção pré definida
    printf("Movendo a Torre\n");
    moverTorre(torre);

    printf("Movendo o Bispo\n");
    moverBispo(bispo);

    printf("Movendo a Rainha\n");
    moverRainha(rainha);

    printf("Movendo o Cavalo\n");
    moverCavalo(0);

    return 0;
}

// Função para simular a Torre se movendo
void moverTorre(int i) {
    if(i < 1) {
        return;
    }
    printf("Direita\n");
    return moverTorre(i - 1);
}

// Função para simular o Bispo se movendo
void moverBispo(int i) {
    if(i < 1) {
        return;
    }
    printf("Cima, Direita\n");
    return moverBispo(i - 1);
}

// Função para simular a Rainha se movendo
void moverRainha(int i) {
    if(i < 1) {
        return;
    }
    printf("Esquerda\n");
    return moverRainha(i - 1);
}

void moverCavalo(int i) {
    do {
        for(i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        i++;
    } while(i < 1);
}