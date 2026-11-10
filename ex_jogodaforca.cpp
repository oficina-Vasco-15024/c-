#include <iostream>

using namespace std;

#define NLetras 10

int numTentativas =5;

void mostrarGrelha(char pl [NLETRAS]) {
    cout << "\n";
    for (int i=0; i<NLETRAS; i++) {
        if (pl[i] != '') {
            cout << "_ " << " ";
        }
    }
}

int main () {

    bool ganhou = false;
    char letra;
    char palavra[NLETRAS] = {'C','A','S','A',' ',' ',' ',' ',' '};

    while (numTentativas>0) {
        mostrarGrelha(palavra);

        cout << "\nRestam " << numTentativas << " tentativas";
        cout << "Dia a letra que queres verificar : ";
        cin >> letra;
        numTentativas--;
    }

    cout << "\n\n---------------------------------";
    if (ganhou) {
        cout << "\nParabens .. ganahste.";
    } else {
        cout << "n\nEs um nabo a portugues. Perdeste.";
    }

    return 0;
}
