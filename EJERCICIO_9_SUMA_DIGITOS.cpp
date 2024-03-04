#include <iostream>
using namespace std;

int main() {
    int N;
    int SUMA = 0;
    // Solicitar al usuario ingresar un número entero
    cout << "INGRESE UN NUMERO ENTERO: ";
    cin >> N;

    int TEMPORAL = N; // Variable temporal para mantener el valor original de N
    // Calcular la suma de los dígitos elevados a sí mismos
    while (TEMPORAL != 0) {
        int DIGITO = TEMPORAL % 10; // Obtener el último dígito
        int ELEVADO = 1;
        // Calcular el dígito elevado a sí mismo
        for (int i = 0; i < DIGITO; i++) {
            ELEVADO *= DIGITO;
        }
        SUMA += ELEVADO; // Sumar el dígito elevado a sí mismo
        TEMPORAL /= 10; // Eliminar el último dígito
    }
    // Mostrar el resultado de la suma en el formato especificado
    cout << "EL RESULTADO DE LA SUMA ES: " << SUMA << endl;

    return 0;
}












