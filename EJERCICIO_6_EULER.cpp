#include <iostream>
using namespace std;

int main() {
    int ELEMENTOS;
    double EULER = 0;
    double FACTORIAL = 1;

    cout << "INGRESE EL NUMERO DE ELEMENTOS: ";
    cin >> ELEMENTOS;

    for (int i = 0; i < ELEMENTOS; i++) {
        if (i == 0) {
            FACTORIAL = 1;
        } else {
            FACTORIAL *= i;
        }
        EULER += 1.0 / FACTORIAL;
    }
    cout << "E, ES APROXIMADAMENTE: " << EULER << endl;
    return 0;
}