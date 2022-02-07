#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float n1, n2    ;
    string operador;
    cin >> n1 >> operador >> n2;
    if (operador == "+") {
        cout << n1 + n2 << endl;
    } else {
        if (operador == "-") {
            cout << n1 - n2 << endl;
        } else {
            if (operador == "*") {
                cout << n1 * n2 << endl;
            } else {
                if(n2 == 0) {
                    cout << "erro" << endl;
                } else {
                    cout << n1 / n2 << endl;
                }
            }
        }
    }
    return 0;
}
