#include <iostream>
using namespace std;

int main() {
    int CANTIDAD;
    cout << "INGRESE LA CANTIDAD DE DINERO:" ;
    cin >> CANTIDAD;

    int BILLETE_50000 = ((CANTIDAD-CANTIDAD%50000)/50000);
    CANTIDAD = CANTIDAD%50000; 
    int BILLETE_20000 = ((CANTIDAD-CANTIDAD%20000)/20000);
    CANTIDAD = CANTIDAD%20000;
    int BILLETE_10000 = ((CANTIDAD-CANTIDAD%10000)/10000);
    CANTIDAD = CANTIDAD%10000;
    int BILLETE_5000 = ((CANTIDAD-CANTIDAD%5000)/5000);
    CANTIDAD = CANTIDAD%5000; 
    int BILLETE_2000 = ((CANTIDAD-CANTIDAD%2000)/2000);
    CANTIDAD = CANTIDAD%2000;
    int BILLETE_1000 = ((CANTIDAD-CANTIDAD%1000)/1000);
    CANTIDAD = CANTIDAD%1000;
    int MONEDA_500 = ((CANTIDAD-CANTIDAD%500)/500);
    CANTIDAD = CANTIDAD%500;
    int MONEDA_200 = ((CANTIDAD-CANTIDAD%200)/200);
    CANTIDAD = CANTIDAD%200;
    int MONEDA_100 = ((CANTIDAD-CANTIDAD%100)/100);
    CANTIDAD = CANTIDAD%100;
    int MONEDA_50 = ((CANTIDAD-CANTIDAD%50)/50);
    CANTIDAD = CANTIDAD%50;
    int FALTANTE = ((CANTIDAD-CANTIDAD%1)/1);

    cout << "BILLETES DE 50.000....." << BILLETE_50000 <<endl;
    cout << "BILLETES DE 20.000....." << BILLETE_20000 <<endl;
    cout << "BILLETES DE 10.000....." << BILLETE_10000 <<endl;
    cout << "BILLETES DE 5.000......" << BILLETE_5000  <<endl;
    cout << "BILLETES DE 2.000......" << BILLETE_2000  <<endl;
    cout << "BILLETES DE 1.000......" << BILLETE_1000  <<endl;
    cout << "MONEDAS DE 500........." << MONEDA_500    <<endl;
    cout << "MONEDAS DE 200........." << MONEDA_200    <<endl;
    cout << "MONEDAS DE 100........." << MONEDA_100    <<endl;
    cout << "MONEDAS DE 50.........." << MONEDA_50     <<endl;
    cout << "EL FALTANTE ES........." << FALTANTE      <<endl;

    return 0;
}