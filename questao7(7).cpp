#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float lado1, lado2, lado3;
    cin >> lado1 >> lado2 >> lado3;
    if ((lado1 == lado2) and (lado2==lado3)){
        cout << 1 << endl;
    } else {
        if ((lado1 == lado2) or (lado1==lado3) or (lado2==lado3)){
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}
