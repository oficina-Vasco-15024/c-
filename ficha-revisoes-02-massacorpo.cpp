#include <iostream>

using namespace std;

int main ()
{
   float peso, gravidade, massa;

    cout << "Escreve o peso: ";
    cin >> peso;

    cout << "Escreve a aceleracao da gravidade: ";
    cin >> gravidade;

    massa = peso/gravidade;

    cout << "Massa do corpo e: " << massa << endl;

    return 0;
}
