#include <iostream>

using namespace std;

int main ()
{
    int soma =0;
    int n1, n2, aux;

    cout << "\nDiga o 1o numero: ";
    cin >> n1;
    cout << "\nDiga o 2o numero: ";
    cin >> n2;

    if (n2 < n1) {
        aux = n1;
        n1 = n2;
        n2= aux;
    }

    for (int i=n1; i<=n2; i++) {
        soma = soma + i;
    }

    cout << soma;

    return 0;
}
