#include <iostream>
using namespace std;

int main() 
{
    char CARACTER;

    cout << "Ingrese un caracter: ";
    cin >> CARACTER;

    if ((CARACTER >= 'a' && CARACTER <= 'z') || (CARACTER >= 'A' && CARACTER <= 'Z')) 
    {
        if (CARACTER == 'a' || CARACTER == 'e' || CARACTER == 'i' || CARACTER == 'o' || CARACTER == 'u' ||
            CARACTER == 'A' || CARACTER == 'E' || CARACTER == 'I' || CARACTER == 'O' || CARACTER == 'U') 
        {
            cout << "EL CARACTER INGRESADO ES UNA VOCAL" << endl;
        } 
        else 
        {
            cout <<"EL CARACTER INGRESADO ES UNA CONSONANTE" << endl;
        }
    } 
    else 
    {
        cout << "EL CARACTER INGRESADO NO ES UNA LETRA NI UNA VOCAL" << endl;
    }

    return 0;
}