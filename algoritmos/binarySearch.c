#include <stdio.h>

typedef struct{
 
 int nrmatricula;
 char nome[100];
 float salario;

} funcionario;

void insertion(int tam, funcionario arr[]){
    int i, j, indice;
    funcionario aux;

    for(i = 1; i < tam; i++){
        aux = arr[i];

        for(j = i - 1; j >= 0 && arr[j].nrmatricula >= aux.nrmatricula; j--){
            arr[j+1] = arr[j];
        }

        arr[j+1] = aux;
    }
}


int binarySearch(funcionario *vetor, int inicio, int fim, int valor){
    int meio;

    if(inicio > fim){
        return -1;
    }

    meio = (inicio + fim) / 2;

    if(valor > vetor[meio].nrmatricula){
        return binarySearch(vetor, meio + 1, fim, valor);
    }

    if(valor < vetor[meio].nrmatricula){
        return binarySearch(vetor, inicio, meio - 1, valor);
    }

    return meio;

}


int main(){
    int i, n, buscarMatricula, in = 0, out = 1;

    // Quantidades de funcionarios/entradas
    printf("[In. %d] Digite a quantidade de funcionarios: ", in);
    scanf("%d", &n);
    printf("\n");

    // Define um vetor de tamanho n para armazenar dados dos funcionarios
    funcionario vetorFuncionario[n];
    in++;

    // Inserir dados de funcionarios
    for(i = 0; i < n; i++){
        printf("[In. %d] Digite a matricula: ", in);
        scanf("%d", &vetorFuncionario[i].nrmatricula);
        

        printf("[In. %d] Digite o nome: ", in);
        scanf("%s", vetorFuncionario[i].nome);

        printf("[In. %d] Digite o salario: ", in);
        scanf("%f", &vetorFuncionario[i].salario);

        printf("\n");
        in++;
    }

    // Ordena os dados do Vetor
    insertion(n, vetorFuncionario);

    // Exibe os dados ordenados
    for(i = 0; i < n; i++){
        printf("\n[Out. %d] >> Matricula: %d", out, vetorFuncionario[i].nrmatricula);
        printf("\n[Out. %d] >> Nome: %s", out, vetorFuncionario[i].nome);
        printf("\n[Out. %d] >> Salario: R$ %.2f", out, vetorFuncionario[i].salario);
        printf("\n");

        out++;
    }

    // Inicio da busca binaria, solicitando o valor a procurar
    printf("\n\n\n");
    printf("[In. %d] Digite uma matricula a ser procurada: ", in);
    scanf("%d", &buscarMatricula);
    in++;

    // Armazenando o resultado da funcao - retorna o indice do valor ou -1 (nao achou)
    int resultado = binarySearch(vetorFuncionario, 0, n, buscarMatricula);

    // Exibe o resultado da busca binaria
    if(resultado == -1){
        printf("\n[Out. %d - Falha] >> Funcionario nao encontrado", out);
        out++;
    }else{
        printf("\n[Funcionario encontrado]");
        printf("\n[Out. %d] >> Matricula: %d", out, vetorFuncionario[resultado].nrmatricula);
        printf("\n[Out. %d] >> Nome: %s", out, vetorFuncionario[resultado].nome);
        printf("\n[Out. %d] >> Salario: R$ %.2f", out, vetorFuncionario[resultado].salario);
        out++;
    }

}