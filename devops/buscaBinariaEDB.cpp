#include <iostream>

int busca_binaria(int k, int colecao[], int tamanho){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(k < colecao[meio]){
            fim = meio - 1;
        }
        else if(k > colecao[meio]){
            inicio = meio + 1;
        }
        else{
            return meio;
        }
    }
    return -1;
}

int main(){

    int tamanho = 7;

    int lista[tamanho] = {2, 4, 35, 77, 102, 300, 301};

    int listaMain[tamanho] = {3, 4, 32, 71, 101, 305, 3000};

    int valor = 301;

    int posicao = busca_binaria(valor, lista, tamanho);

    std::cout << "O valor está na posição " << posicao + 1<< std::endl;

    return 0;

}