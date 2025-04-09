#include <stdio.h>

int main() {
    // Quantidade de casas para mover cada peça
     int Torre = 5;
     int Bispo = 5;
     int Rainha = 8;

    // Movimentação da Torre usando for
    // Torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < Torre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo usando while
    // Bispo se move 5 casas na diagonal (Cima Direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < Bispo) {
        printf("Cima Direita\n");
        i++;
    }
  // Movimentação da Rainha usando do-while
    // Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < Rainha);

    return 0;
}

