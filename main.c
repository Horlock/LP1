#include <stdio.h>

/*
5) Faca um programa que (usando notacao ponteiro):  
a. leia 7 valores inteiros e os armazene em um vetor. Listar o vetor com as referidas posicoes de armazenamento de cada valor.

b. faca uma funcao de pesquisa onde dado um valor inteiro qualquer de entrada retornar a posicao (indice) deste valor 
dentro do vetor, e caso este valor nao esteja presente no vetor retornar -1.  

c. faca uma funcao que troque os valores contidos no vetor pelo seguinte criterio: 
cada elemento i dentro do vetor ser substituido pela soma de todos os (i-1) elementos mais o elemento i. 
Por exemplo, dado um vetor [1; 2; 3; 4; 5; 6; 7] apos a aplicacao da funcao teriamos esse 
vetor preenchido com os seguintes valores [1; 3; 6; 10; 15 ....].  

*/

int main()
{
    int vet[6], i, *pont, valor;
    pont = vet;
	printf("Digite os valores: \n");
    for(i=0;i<7;i++){
      scanf("%d",&vet[i]);
    }  
    for (i=0;i<7;i++)
    {
        printf("valor: %d -- endereco: %p\n",*(pont+i),pont+i);
    }
    
    printf("Digite um valor para pesquisar: \n");  
    scanf("%d",&valor);
    printf("valor: %d esta no endereco: %p\n",valor, pesquisa(valor, pont));
    
   
   return 0;
}

int pesquisa(int a, int *pVetor){
	int i;
	for(i=0;i<7;i++){
		if(*(pVetor + i) == a){
			return(pVetor+i);
			break;
		}
	}
    return -1;
}
