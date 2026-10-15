#include <iostream>

using namespace std;

int main () {

    int numero=1;

    while (numero!=0) {
        cout << "Digite um numero entre 1 e 3 \n";
        cout << "0 (sair do programa) \n";
        cout << "A sua opcao: ";
        cin >> numero;
        switch (numero) {
            case 0:
                break;
            case 1:
                cout << "bom programador";
                break;
            case 2:
                cout << "muito bom programardor ";
                break;
            case 3:
                cout << "excelente programador";
                break;
            default:
                cout << "Nao sei o que me estas a pedir";
                break;

        }
        if (numero ==0) break;
    }

     return 0;

}
