#include <iostream>
using namespace std;

int main() {
    int N;
    // SOLICITAR INGRESAAR UN NUMERO
    cout << "INGRESE UN NUMERO: ";
    cin >> N;

    int CONTADOR = 0;
    int NUMERO = 2;
    int N_PRIMO = 0;

    while (CONTADOR < N) {
        bool ES_PRIMO = true;

        for (int i = 2; i * i <= NUMERO; i++) {
            if (NUMERO % i == 0) {
                ES_PRIMO = false;
                break;
            }
        }
        if (ES_PRIMO) {
            CONTADOR++;
            N_PRIMO = NUMERO;
        }
        NUMERO++;
    }
    cout << "EL PRIMO NUMERO " << N << " ES: " << N_PRIMO << endl;

    return 0;
}