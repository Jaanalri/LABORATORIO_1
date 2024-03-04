#include <iostream>
using namespace std;

int CONTA_DIVISORES(int NUM) {
    int CONTADOR = 0;
    for (int i = 1; i*i <= NUM; i++) {
        if (NUM % i == 0) {
            CONTADOR += (i * i == NUM) ? 1 : 2;
        }
    }
    return CONTADOR;
}
int main() {
    int K;
    cout << "INGRESE UN NUMERO: ";
    cin >> K;

    int N = 1;
    int TRIANGULAR = 1;
    while (CONTA_DIVISORES(TRIANGULAR) <= K) {
        N++;
        TRIANGULAR += N;
    }

    cout << "EL NUMERO ES: " << TRIANGULAR << endl;
    cout << "QUE TIENE " << CONTA_DIVISORES(TRIANGULAR) << " DIVISORES." << endl;

    return 0;
}

