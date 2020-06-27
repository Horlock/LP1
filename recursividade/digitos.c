#include <stdio.h>



int Digitos(int N){
    if(N > 9){
        return Digitos(N / 10) + 1;
    }
    return 1;
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\nDigitos: %d", Digitos(num));
}