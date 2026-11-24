#include <stdio.h>
#include <iostream>
using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio (string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro [LINHAS] [COLUNAS];
    int quemJoga=1; // 1-Xº jogar // 2-0 -2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0] [1] = "s";
    mostraTabuleiro(tabuleiro);
     mostraTabuleiro(tabuleiro);*/

    return 0;
}
/*cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";
cout << "|"<< "|" << "|" << "|" << "|" << "|" << "|" << "|" << "\n";*/

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
    for (int i=0; i<LINHAS; i++){
        for (int j=0; j<COLUNAS; j++) {
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {
    /*cout << "Linha 1: Coluna 2: -" << arr[0] [1] << "-";
    arr[0][1] = "a";*/
}
int pedePecaJogador() {
    int col;
    cout << "Em que coluna quer jogar : ";
    cin >> col;
    return 0;
}
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio (string arr[LINHAS][COLUNAS]) {
    return false;
}
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
