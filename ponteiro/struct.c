#include <stdio.h>



/* ####################### EXERCÍCIO 2 ####################### */
typedef struct{
    int num;
    char descr[25];
    double valor;
    int qtdes[12];} TProd;
TProd vProd;

int main(){

    // A
    vProd.num = 1453;
    strcpy(vProd.descr, "Pino de aco 8mm");
    vProd.valor = 5.32;
    vProd.qtdes[0] = 120;
    vProd.qtdes[1] = 89;
    vProd.qtdes[2] = 72;
    vProd.qtdes[3] = 15;
    vProd.qtdes[4] = 32;
    vProd.qtdes[5] = 33;
    vProd.qtdes[6] = 44;
    vProd.qtdes[7] = 566;
    vProd.qtdes[8] = 281;
    vProd.qtdes[9] = 32;
    vProd.qtdes[10] = 10;
    vProd.qtdes[11] = 29;

    // B
    for(int i = 0; i < 11; i++){
        vProd.qtdes[i] = 0;
    }

    // C
    strcpy(vProd.descr, strupr(vProd.descr));

    //D
    int soma = 0, menor = vProd.qtdes[0], maior = vProd.qtdes[0];
    
    for(int i = 0; i < 11; i++){
        soma += vProd.qtdes[i];
        
        if (menor < vProd.qtdes[i]){
            menor = vProd.qtdes[i];
        }

        if (maior > vProd.qtdes[i]){
            maior = vProd.qtdes[i];
        }
    }

    // E

    vProd.num = 0;
    vProd.descr[0] = '\0';
    vProd.valor = 0.0;
    for(int i = 0; i < 11; i++){
        vProd.qtdes[i] = 0;
    }
}