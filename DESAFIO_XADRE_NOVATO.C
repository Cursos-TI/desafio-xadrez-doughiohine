#include <stdio.h>

int main(){
// Movimento da Torre (linha reta para a direita)
 printf("Movimento da Torre\n");
 

int casasTorre = 5;
for (int i = 1; i <= casasTorre; i++){
    printf("Direita\n");
}
printf("\n");

//Movimento do Bispo (diagonal para a direita)
printf("Movimento do Bispo\n");

int casasBispo = 5;
int contadorBispo = 1;
while (contadorBispo <= casasBispo){
    printf("Cima Direita\n");
    contadorBispo++;
}

printf("\n");

//Movimento da Rainha
printf("Movimento da Rainha\n");

int casasRainha = 8;
int contadorRainha = 1;
do {
    printf("Esquerda\n");
    contadorRainha++;
    }while (contadorRainha <= casasRainha);
printf("\n");

// Movimento do Cavalo
printf("Movimento do Cavalo\n");
int passosBaixo = 2; // duas casas para baixo
int passosEsquerda = 1; // uma casa para a esquerda

for(int i = 1; i <= passosBaixo; i++) {
    printf("Baixo\n");
    // dentro do loop for, usamos o while para simular a parte final do L
    if (i == passosBaixo){
        int j = 1;
        while(j<= passosEsquerda) {
            printf("Esquerda\n");
            j++;
        }
    }
}
    return 0;


}