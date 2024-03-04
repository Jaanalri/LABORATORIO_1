#include <iostream>
using namespace std;

bool PALINDROMO(int NUM) {
    int ORIGINAL = NUM;
    int REVERSO = 0;
    while (NUM > 0) {
        REVERSO = REVERSO * 10 + NUM % 10;
        NUM /= 10;
    }
    return ORIGINAL == REVERSO;
}
int main() {
    int PALINDROMO_MAYOR = 0;
    int FACTOR_1 = 0;
    int FACTOR_2 = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int PRODUCTO = i * j;
            if (PRODUCTO <= PALINDROMO_MAYOR) {
                break;
            }
            if (PALINDROMO(PRODUCTO)) {
                PALINDROMO_MAYOR = PRODUCTO;
                FACTOR_1 = i;
                FACTOR_2 = j;
            }
        }
    }
    cout << FACTOR_1 << " * " << FACTOR_2 << " = " << PALINDROMO_MAYOR << endl;
    return 0;
}