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
    int listaMain[5] = {10, 22, 45, 23, 4};

    if (testeOrdenado(lista, 5)) {
        cout << " A 1a Está ordenada" << endl;
    } else {
        cout << "A 1a não está ordenada" << endl;
    }
    if (testeOrdenado(lista, 5)) {
        cout << "A listamin está ordenada" << endl;
    } else {
        cout << "A lista main não está ordenada" << endl;
    }
    return 0;
}
