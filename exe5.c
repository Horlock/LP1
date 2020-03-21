#include <stdio.h>

int main(){
    int vet[7], *pVet, i, buscar;
    pVet = vet;

    for(i = 0; i < 7; i++){
        scanf("%d", pVet + i);
    }

    for(i = 0; i < 7; i++){
        printf("%d %X\n", *(pVet + i), pVet + i);
    }
    
    printf("Digite o valor para busca: ");
    scanf("%d", &buscar);
    pesquisa(buscar, pVet);

	return 0;
}

int pesquisa(int buscar, int *pVet){
	int i;
	for(i = 0; i < 7; i++){
		if(*(pVet + i) == buscar){
			return printf("%X", pVet + i);
			break;
		}
	}
	return -1;
}
