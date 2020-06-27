#include <stdio.h>
#include <string.h>

void substring(char *stringEntrada, char *stringSaida, int inicio, int fim){
    int i, j = 0;
    
    for(i = inicio; i <= fim; i++){
        *(stringSaida+j) = *(stringEntrada+i);
        j++;
    }
    *(stringSaida+j) = '\0';
}

int main(){
    char stringEntrada[100];
    char stringSaida[100];
    int inicio, fim;

    // stringEntrada
    printf("Digite a string: ");
    fgets(stringEntrada, sizeof(stringEntrada), stdin);

    printf("Digite a posicao inicial: ");
    scanf("%d", &inicio);

    printf("Digite a posicao final: ");
    scanf("%d", &fim);

    substring(stringEntrada, stringSaida, inicio, fim);

    printf("\nSubstring: %s", stringSaida);
    
    return 0;
}