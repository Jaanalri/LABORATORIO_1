#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    int SUMA_A = 0, SUMA_B = 0, TOTAL = 0;
    // SOLICITAR INGRESAR LOS VALORES
    cout << "INGRESE EL VALOR DE A: ";    cin >> A;
    cout << "INGRESE EL VALOR DE B: ";    cin >> B;
    cout << "INGRESE EL VALOR DE C: ";    cin >> C;
    //SACAR LOS MULTIPLOS DE A
    for (int i = A; i < C; i += A) {
        SUMA_A += i;
        cout << i << "+";
    }//SACAR LOS MULTIPLOS DE B 
    for (int i = B; i < C; i += B) {
        cout << i << "+";
        SUMA_B += i;
    } // SUMATORIA Y TOTAL
    TOTAL = SUMA_A + SUMA_B;
    cout << "= " << TOTAL << endl;

    return 0;
}
















