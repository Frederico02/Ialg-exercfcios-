#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int tipo;
    float valorInicial;
    cin >> tipo;
    cin >> valorInicial;
    float valorFinal;
    if (tipo == 1) {
        valorFinal = valorInicial * 1.005f ;
        cout << valorFinal << endl;
    }
    else {
        valorFinal = valorInicial * 1.03f - 30.0f;
        cout << valorFinal << endl;
    }
    return 0;
}
