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

    
    // Bispo se move 5 casas na diagonal (Cima Direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < Bispo) {
        printf("Cima Direita\n");
        i++;
    }

    
    // Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < Rainha);

    // Movimento do Cavalo: duas casas para baixo e uma casa para a esquerda
    // Usamos for para o movimento vertical (baixo) e while para o movimento horizontal (esquerda)
    printf("\nMovimento do Cavalo:\n");
    
    // Movimento vertical - duas casas para baixo
    for (int k = 0; k < 2; k++) {
        printf("Baixo\n");
        
        // Dentro de cada passo para baixo, apenas no segundo passo, faz o movimento para a esquerda
        if (k == 1) {
            int l = 0;
            while (l < 1) {
                printf("Esquerda\n");
                l++;
            }
        }
    }

    return 0;
}
