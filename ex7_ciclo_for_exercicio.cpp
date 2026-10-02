#include <iostream>

using namespace std;

int main ()
{

  /*
        quero imprimir o "a" 2x
        quero imprimir o "B" 2x
        quero imprimir o "C" 2x
        para ficar assim na apresentacao ao user:
        "abccba"
    */
    int na, nb,nc;
    string la,lb,lc;

    na = 2;
    nb = 2;
    nc = 2;

    la = "a";
    lb = "b";
    lc = "c";

    /* cout << "abccba"; */

    cout << "\n";
    /*** **/
    for (int i=1; i <= (na/2); i++) {
        cout << la;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << lb;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << lc;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << lc;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << lb;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << la;
    }

    /*** **/

    return 0;
}
