#include <iostream>
using namespace std;

int main() {
    int NUM;
    cout << "INGRESE UN NUMERO IMPAR: ";
    cin >> NUM;

    while (NUM % 2 == 0)  {
        cout << "NUMERO INVALIDO." << endl;
        cout << "INGRESE UN NUMERO IMPAR: ";
        cin >> NUM;
    }
        for (int i = 1; i < NUM; i += 2) {
            cout << string((NUM - i) / 2, ' ') << string(i, '*') << endl;
        }

        for (int i = NUM; i > 0; i -= 2) {
            cout << string((NUM - i) / 2, ' ') << string(i, '*') << endl;
        }
    return 0;
}
