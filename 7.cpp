#include <iostream>

using namespace std;

double elevarAPotencia(double numero, int potencia) {
    if (potencia == 0) {
        return 1.0; 
    }

    double resultado = 1.0;

    for (int i = 1; i <= abs(potencia); i++) {
        resultado *= numero;
    }

    if (potencia < 0) {
        resultado = 1.0 / resultado;
    }

    return resultado;
}

int main() {
    double numero;
    int potencia;

    cout << "Ingresa un numero: ";
    cin >> numero;
    cout << "Ingresa la potencia a la que deseas elevarlo: ";
    cin >> potencia;

    double resultado = elevarAPotencia(numero, potencia);

    cout << numero << " elevado a la potencia " << potencia << " es igual a: " << resultado << endl;

    return 0;
}
