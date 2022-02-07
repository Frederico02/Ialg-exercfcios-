#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float PI = 3.14159265f;
    string letra1;
    string letra2;
    cin >> letra1 >> letra2;
    float valor;
    cin >> valor;
    if ((valor == 90) and (letra1 == "c") and (letra2 == "g")){
        cout << 0 << endl;
    } else {
        if ((valor == 270) and (letra1 == "c") and (letra2 == "g")){
            cout << 0 << endl;
        } else {
            if ((valor == 180) and (letra1 == "s") and (letra2 == "g")){
                cout << 0 << endl;
            } else {
                if (letra1 == "s") {
                        if (letra2 == "g") {
                            cout << sin(valor*PI/180) << endl;
                        }
                        if (letra2 == "r") {
                            cout << sin (valor) << endl;                
                        }
                }
                 if (letra1 == "c") {
                        if (letra2 == "g") {
                            cout << cos (valor*PI/180) << endl;
                        }
                        if (letra2 == "r") {
                            cout << cos (valor) << endl;                
                        }
                }
            }
        }
    }
    return 0;
}
