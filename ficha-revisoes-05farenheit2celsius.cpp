#include <iostream>

using namespace std;

int main ()
{
    float faranheit,celsius;

    cout << " Escreve, a temperatura em Faranheit: ";
    cin >> faranheit;

    celsius = 5 * (faranheit - 32)/9;

    cout << "Temperatura em Celsius: " << celsius << "C"<< endl;

    return 0;
}
