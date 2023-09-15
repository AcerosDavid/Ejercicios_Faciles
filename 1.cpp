#include <iostream>

using namespace std;

int main() {
    double centimetros, pulgadas;

    cout << "Ingresa la longitud en centimetros: ";
    cin >> centimetros;

    pulgadas = centimetros / 2.54;


    cout << centimetros << " Los centimetros son: " << pulgadas << " en  pulgadas." << endl;

    return 0;
}
