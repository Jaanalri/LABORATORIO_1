#include <iostream>
using namespace std;

int main() {
    int CANTIDAD;
    cout << "INGERSE LA CANTIDAD DE DINERO: ";
    cin >> CANTIDAD;

    int DENOMINACIONES[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int CANT_DENOMINACIONES;

    cout << "LA CANTIDAD DE BILLETES Y MONEDAS PARA EL VALOR " << CANTIDAD << " ES:" << endl;

    for (int i = 0; i < 10; i++) {
        CANT_DENOMINACIONES = CANTIDAD / DENOMINACIONES[i];
        cout << DENOMINACIONES[i] << " : " << CANT_DENOMINACIONES << endl;
        CANTIDAD = CANTIDAD% DENOMINACIONES[i];
    }

    if (CANTIDAD > 0) {
        cout << "FALTANTE: " << CANTIDAD << endl;
    }

    return 0;
}