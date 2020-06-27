#include <stdio.h>

int Somatoria(int values[10], int pos){
    if(pos == 0){
        return values[0];
    }else{
        return values[pos] + Somatoria(values, pos - 1);
    }
}

int main(){
    int values[10], i;

    for(i = 0; i < 10; i++){
        printf("%do valor: ", i + 1);
        scanf("%d", &values[i]);
    }
    
    printf("%d", Somatoria(values, 9));
}