#include <iostream>
using namespace std;

int CALCULAR_MCM(int NUM) {
    if (NUM == 1) {
        return 1;
    }
    return NUM;
}

int main() {
    int NUMERO;
    cout << "INGRESE UN NUMERO: ";
    cin >> NUMERO;

    int RESULTADO = CALCULAR_MCM(NUMERO);

    cout << "EL MINIMO COMUN MULTIPLO ENTRE 1 Y " << NUMERO << " ES: " << RESULTADO << endl;

    return 0;
}