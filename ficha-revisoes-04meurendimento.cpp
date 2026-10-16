#include <iostream>

using namespace std;

int main ()
{
    float valorHora, HoraMes, salarioMes, salarioAno;

    cout << "Quanto ganhas por hora (euros)? ";
    cin >> valorHora;

    cout << "Quantas horas trabalhas por mes? ";
    cin >> HoraMes;

    salarioMes = valorHora * HoraMes;
    salarioAno = salarioMes * 12;

    cout << "Salario mensal" << salarioMes << "euros" << endl;
    cout << "Salario anual" << salarioAno << "euros" << endl;

    return 0;
}
