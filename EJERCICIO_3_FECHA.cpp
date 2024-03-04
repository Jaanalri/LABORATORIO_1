#include <iostream>
using namespace std;

int main() {
    int MES, DIA;
    cout << "INGRESE UN MES (1-12): ";    cin >> MES;
    cout << "INGRESE UN DIA (1-31): ";    cin >> DIA;

    if ((MES < 1 || MES > 12) || (DIA < 1) || (DIA > 31)) {
        cout << DIA << "/" << MES << " MES O DIA INVALIDO." << endl;
    } else if ((MES == 4 || MES == 6 || MES == 9 || MES == 11) && DIA > 30) {
        cout << DIA << "/" << MES << " ES UNA FECHA INVALIDA." << endl;
        } else if (MES == 2 && DIA == 29) {
            cout << DIA << "/" << MES << " ES VALIDO PARA AÑO BISIESTO." << endl;
            }
    else {
        cout << DIA << "/" << MES << " ES UNA FECHA VALIDA." << endl;
    }
    return 0;
}
