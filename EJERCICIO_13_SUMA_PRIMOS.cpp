#include <iostream>
using namespace std;

bool ES_PRIMO(int NUM) {
    if (NUM <= 1) {
        return false;
    }
    for (int i = 2; i * i <= NUM; i++) {
        if (NUM % i == 0) {
            return false;
        }
    }
    return true;
}
int SUMA_PRIMOS(int NUM) {
    int SUMA = 0;
    for (int i = 2; i < NUM; i++) {
        if (ES_PRIMO(i)) {
            SUMA += i;
        }
    }
    return SUMA;
}
int main() {
    int NUMERO;
    cout << "INGRESE UN NUMERO: ";
    cin >> NUMERO;

    int RESULTADO = SUMA_PRIMOS(NUMERO);

    cout << "EL RESULTADO DE LA SUMA ES: " << RESULTADO << endl;

    return 0;
}
