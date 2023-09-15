#include <iostream>

using namespace std;

unsigned long long calcularFactorial(int numero) {
    if (numero < 0) {
        cout << "El factorial no esta definido para números negativos." << endl;
        return 0; 
    }

    unsigned long long factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int numero;

    cout << "Ingresa un numero entero no negativo: ";
    cin >> numero;

    unsigned long long resultado = calcularFactorial(numero);

    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}
