#include <iostream>

using namespace std;

int main ()
{
    float faranheit,celsius;

    cout << " Escreve, a temperatura em celsius: ";
    cin >> celsius;

    faranheit = ( 9.0 * celsius / 5)+ 32;

    cout << "Temperatura em faranheit: " << faranheit << "F"<< endl;

    return 0;
}
