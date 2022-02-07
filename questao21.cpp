#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    cin >> dia1 >> mes1 >> ano1;
    cin >> dia2 >> mes2 >> ano2;
    if (ano1 > ano2) {
        cout << dia1 << " " << mes1 << " " << ano1 << endl;
    }
    if (ano2 > ano1) {
        cout << dia2 << " " << mes2 << " " << ano2 << endl;
    }
    if (ano1 == ano2) {
        if (mes1 > mes2) {
            cout << dia1 << " " << mes1 << " " << ano1 << endl;
        }
        if (mes2 > mes1) {
            cout << dia2 << " " << mes2 << " " << ano2 << endl;
        }
        if (mes1 == mes2) {
            if (dia1 > dia2){
                cout << dia1 << " " << mes1 << " " << ano1 << endl;
            }
            if (dia2 >= dia1){
                cout << dia2 << " " << mes2 << " " << ano2 << endl;
            }
        }
    }
    return 0;
}
