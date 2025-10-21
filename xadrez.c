#include <stdio.h>

// Torre: move para a direita
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1); // proximo movimento
}

// Rainha: move para a esquerda
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1); // proximo movimento
}

// Bispo: move diagonal a cima e a direita
void mover_bispo(int casas) {
int i;
int j;

    if (casas <= 0) return;

    // Loop externo: simula o movimento vertical (Cima)
    for (i = 0; i < 1; i++) {
        // Loop interno: simula o movimento horizontal (Direita)
        for (j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chama o próximo movimento
    mover_bispo(casas - 1); // proximo movimento
}

// Cavalo: move duas casas para cima e uma para a direita
void mover_cavalo(int movimentos) {
    int i;
    int j;
    int m;

    printf("Movimento do Cavalo:\n");

    for (m = 0; m < movimentos; m++) {
        // Duas casas para cima
        for (i = 0; i < 2; i++) {
            printf("Cima\n");
        }

        // Uma casa para a direita
        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}


int main() {
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    const int movimentos_cavalo = 2;

    // Torre
    printf("Movimento da Torre:\n");
    mover_torre(casas_torre);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    mover_bispo(casas_bispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    mover_rainha(casas_rainha);

    // Cavalo
    printf("\n");
    mover_cavalo(movimentos_cavalo);

    return 0;
}
