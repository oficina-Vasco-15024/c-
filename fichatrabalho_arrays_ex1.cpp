#include <iostream>

using namespace std;

int main ()
{
    int numeros, soma = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º numeros inteiro: ";
        cin >> numeros;
        soma += numeros * numeros;
    }

        cout << "\nA soma dos quadrados dos dez numeros e: " << soma << endl;

    return 0;
}
