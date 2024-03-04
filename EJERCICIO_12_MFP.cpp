#include <iostream>
using namespace std;

int MFP(int NUM) {
    int FACTOR = 2;
    while (NUM > FACTOR) {
        if (NUM % FACTOR == 0) {
            NUM /= FACTOR;
        } else {
            FACTOR++;
        }
    }
    return NUM;
}

int main() {
    int NUMERO;
    cout << "INGRESE UN NUMERO: ";
    cin >> NUMERO;

    int MAX_FACTOR = MFP(NUMERO);

    cout << "EL MAYOR FACTOR PRIMO DE " << NUMERO << " ES: " << MAX_FACTOR << endl;

    return 0;
}