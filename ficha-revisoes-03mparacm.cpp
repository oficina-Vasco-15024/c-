#include <iostream>

using namespace std;

int main ()
{
    float metros, milimetros;

    cout << "Escreva o valor em metros: ";
    cin >> metros;

    milimetros = metros * 1000;

    cout << "Valor em milimetros: " << milimetros << "mm" << endl;

    return 0;
}
