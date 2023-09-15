#include <iostream>

using namespace std;

bool esPrimo(int numero) {

    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int numero;

    cout << "Ingresa un nrmero entero: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es  primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }

    return 0;
}
