#include <stdio.h>


Retangulo(int n){

    if(n == 0){
        return 0;
    }else{

    }


}

int main(){
    
    int n, i, ci, vi, aux;

    scanf("%d", &n);

    while(n){
    
        aux = 0;

        for(i = 0; i < n; i++){
        
            scanf("%d %d", &ci, &vi);
            aux += vi / 2;
        }

        aux = aux / 2;

        printf("%d\n", aux);

        scanf("%d", &n);     

    }
}