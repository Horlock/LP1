#include <stdio.h>

void insertion(int tam, int *arr){
    int i, j, aux;

    for(i = 1; i < tam; i++){
        aux = arr[i];

        for(j = i - 1; j >= 0 && arr[j] >= aux; j--){
            arr[j+1] = arr[j];

        }

        arr[j+1] = aux;
    
    }
}


int main(){
    int n, value, i;

    scanf("%d", &n);
    int num, par[n], impar[n], cpar = 0, cimpar = 0;
    
    for(i = 0; i < n; i++){
           scanf("%d", &num);
           if (num % 2 == 0){
               par[cpar] = num;
               cpar++;
           }else{
               impar[cimpar] = num;
               cimpar++;
           }
    }

    insertion(cpar, par);
    insertion(cimpar, impar);
    for(i = 0; i < cpar; i++){
        printf("%d\n", par[i]);
    }
    for(i = cimpar - 1; i >= 0; i--){
        printf("%d\n", impar[i]);
    }

}