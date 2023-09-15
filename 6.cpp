#include <iostream>
#include <vector>

using namespace std;

int contarOvejasPresentes(const vector<bool>& ovejas) {
    int contador = 0;

    for (bool presente : ovejas) {
        if (presente) {
            contador++;
        }
    }

    return contador;
}

int main() {

    vector<bool> ovejas = {
        true, false, true, false,
        true, false, true, false,
        true, false, true, false,
        true, false, true, false,
        true, false, true, false,
        true, false, true, false
    };

    int cantidadDeOvejas = contarOvejasPresentes(ovejas);

    cout << "El numero de ovejas presentes es: " << cantidadDeOvejas << endl;

    return 0;
}
