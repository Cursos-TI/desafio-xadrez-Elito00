#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}
// Função recursiva para mover o Bispo com loops aninhados
void moverBispo(int passos, int linha) {
    if (linha == passos) return;

    for (int coluna = 0; coluna < passos; coluna++) {
        if (linha == coluna) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos, linha + 1);
}

// Função para mover o Cavalo com loops aninhados e lógica de "L"
void moverCavalo() {
    int movimentos = 1;  // Quantas vezes queremos fazer o movimento "L"
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                int k = 0;
                while (k < 1) {
                    printf("Direita\n");
                    k++;

                    // Condição extra: se quiser parar cedo por algum motivo
                    if (k == 1) break;
                }
            } else {
                printf("Cima\n");

                // Continue pula o resto do loop atual (evita execução do próximo bloco até j == 1)
                continue;
            }
        }
    }
}

int main() {
    // Quantidade de casas para mover cada peça
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursão e loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, 0);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com lógica aprimorada
    moverCavalo();

    return 0;
}

