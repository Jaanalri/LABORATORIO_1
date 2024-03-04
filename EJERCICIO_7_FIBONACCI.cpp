#include <iostream>
using namespace std;

int main() {
    int NUM;
    int A = 1, B = 1, C;
    int TOTAL = 0;

    cout << "INGRESE UN NUMERO: ";
    cin >> NUM;
    // CALCULAR LA SUMA DE LOS NUMEROS PARES EN LA SERIE
    while (B < NUM) {
        C = A + B;
        A = B;
        B = C;
        if (B % 2 == 0) {
            TOTAL += B;
        }
    }
    // RESULTADO
    cout << "EL RESULTADO DE LA SUMA ES: " << TOTAL << endl;
    return 0;
}