#include <iostream>
using namespace std;

int COLLATZ(long N) {
    int CONTADOR = 1;
    while (N > 1) {
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = 3 * N + 1;
        }
        CONTADOR++;
    }
    return CONTADOR;
}

int main() {
    long K;
    cout << "INGRESE UN NUMERO: ";
    cin >> K;

    long SEMILLA = 1;
    int MAX_TERMINOS = 0;

    for (long i = 1; i < K; i++) {
        int TERMINOS = COLLATZ(i);
        if (TERMINOS > MAX_TERMINOS) {
            MAX_TERMINOS = TERMINOS;
            SEMILLA = i;
        }
    }

    cout << "LA SERIE MAS LARGA ES CON LA SEMILLA: " << SEMILLA << endl;
    cout << "TIENE " << MAX_TERMINOS << " TERMINOS." << endl;

    //IMPRIMIR SERIE 
    cout << "LA SERIE ES: ";
    while (SEMILLA > 1) {
        cout << SEMILLA << ", ";
        if (SEMILLA % 2 == 0) {
            SEMILLA /= 2;
        } else {
            SEMILLA = 3 * SEMILLA + 1;
        }
    }
    cout << "1" << endl;

    return 0;
}
