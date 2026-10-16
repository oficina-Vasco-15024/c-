#include <iostream>

using namespace std;

int main ()
{
    int idade;
    string nome, localidade, genero;
    string mensagem="";

    cout << "Qual e o teu nome? ";
    cin >> nome;
    cout << "Qual e a tua idade? ";
    cin >> idade;
    cout << "Qual e a tua localidade? ";
    cin >> localidade;
    cout << "Qual e o teu genero M/F? ";
    cin >> genero;

    if (genero == "M" ) {
        cout << "Caro Sr.";
    }

    if (genero == "F" ) {
        cout << "Cara Sra.";
    }

    return 0;
}
