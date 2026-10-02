#include <iostream>

using namespace std;

int main ()
{
    // i++ === i = i+1 === i += 1
    // i-- === i = i-1 === i -= 1
    cout << "Numero entre 1 e 10\n";
    for (int i=1; i<=10; i++) {
        cout << i << endl;
    }

    cout << "\nNumeros impares entre 1 a 5\n";
    for (int i=1; i<=10; i+=2) {
        //if (i > 5) break;
        cout << i << endl;
        if (i >= 5) break;
    }

    return 0;
}
