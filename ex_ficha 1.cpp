#include <iostream>

using namespace std;

int main ()
{
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Numero negativo";
    } else if (numero == 0) {
        cout << "Numero neutro";
    } else if (numero >0 && numero < 100) {
        cout << "Numero positivo pequeno";
    } else {
        cout << "Numero Enorme";
    }


    return 0;
}
