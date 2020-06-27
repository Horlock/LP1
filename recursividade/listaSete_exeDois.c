#include <stdio.h>

int Multiplica(int a, int b){
    if (a == 1){
        return b;
    }else{
        return b + Multiplica(a - 1, b);
    }
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", Multiplica(a,b));
}