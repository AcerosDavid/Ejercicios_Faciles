#include <iostream>

using namespace std;

int main() {
    cout << "Multiplos de 3 entre 1 y 20:" << endl;

    for (int i = 1; i <= 20; i++) {

        if (i % 3 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
