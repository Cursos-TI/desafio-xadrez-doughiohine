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


    return 0;

}