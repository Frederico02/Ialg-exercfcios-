#include <iostream>
#include <cmath>
using namespace std;
int main () {
    string letra;
    int a, b; 
    a = 0;
    b = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> letra;
        if (letra == "a") {
            ++a;
        } else {
            ++b;
        }
    }
    if (a < b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
