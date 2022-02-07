#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int divisor;
    cin >> divisor;
    int numero;
    cin >> numero;
    while (numero % divisor != 2) {
        cin >> numero;
    }
    cout << numero / divisor << endl;
    return 0;
}
