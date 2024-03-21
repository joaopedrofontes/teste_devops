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
    
    if (testeOrdenado(lista, 5)) {
        cout << "Está ordenado" << endl;
    } else {
        cout << "Não está ordenado" << endl;
    }
    
    return 0;
}
