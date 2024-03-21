#include <iostream>

using namespace std;

bool testeOrdenado(int lista[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (lista[i + 1] < lista[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    int lista[5] = {2, 40, 41, 54, 50};
    int segundaLista[5] = {3, 8, 1, 10 ,40};
    int terceiraLista[5] = {1, 5, 79, 90, 101};

    if (testeOrdenado(lista, 5)) {
        cout << "A primeira lista está ordenada" << endl;
    } else {
        cout << "A primeira lista não está ordenada" << endl;
    }
    if (testeOrdenado(segundaLista, 5)) {
        cout << "A segunda lista está ordenada" << endl;
    }
    else {
        cout << "A segunda lista não está ordenada" << endl;
    }
    if (testeOrdenado(terceiraLista, 5)) {
        cout << "A terceira lista está ordenada" << endl;
    }
    else {
        cout << "A terceira lista não está ordenada" << endl;
    }
    return 0;
}
