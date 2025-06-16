#   include <stdio.h>

// função recursiva para movimentar  a Torre (verticalmente para cima)
void moverTorre(int passos) {
    if (passos == 0) {
        printf("Cima\n");
        moverTorre(passos - 1);
    }
}

// função recursiva para movimentar o Bispo (diagonal para a direita)
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
    }
// bispo com loops aninhados para movimento diagonal: baixo esquerda.
void moverBispoLoop(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
                printf("Baixo\n");
                printf("Esquerda\n");
            }
        }
       
    }
// função recursiva para movimentar a Rainha (horizontalmente para a direita e verticalmente para cima)
void moverRainha(int passosHorizontal, int passosVertical) {
    if (passosHorizontal > 0) {
        printf("Direita\n");
        moverRainha(passosHorizontal - 1, passosVertical);
    } else if (passosVertical > 0) {
        printf("Cima\n");
        moverRainha(0, passosVertical - 1);
    }
}
// Movimento complexo do Cavalo: duas para cima, uma para a direita (em "L")
void moverCavalo() {
    int movCima = 2;
    int movDireita = 1;

    for (int i = 0; i < movCima; i++) {
        if (i == 1) continue; // só imprime em 2 movimentos de cima
        printf("Cima\n");

        int j = 0;
        while (j < movDireita) {
            printf("Direita\n");
            break; // cavalo só se move 1 para direita depois de 2 cima
        }
    }
}

// Função principal
int main() {
    int passosTorre = 3;
    int passosBispo = 2;
    int linhasBispo = 2;
    int colunasBispo = 1;
    int passosRainhaH = 2;
    int passosRainhaV = 2;

    // MOVIMENTO DA TORRE
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    // Espaço em branco
    printf("\n");

    // MOVIMENTO DO BISPO (RECURSIVO)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(passosBispo);

    // Espaço em branco
    printf("\n");

    // MOVIMENTO DO BISPO (LOOPS ANINHADOS)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(linhasBispo, colunasBispo);

    // Espaço em branco
    printf("\n");

    // MOVIMENTO DA RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainhaH, passosRainhaV);

    // Espaço em branco
    printf("\n");

    // MOVIMENTO DO CAVALO
    printf("Movimento do Cavalo (Cima-Cima-Direita):\n");
    moverCavalo();

    return 0;
}