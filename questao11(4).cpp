#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float razao;
    cin >> razao;
    int numeros;
    cin >> numeros;
    float PG = 1;
    for (int i= 1; i <= numeros; ++i) {
        cout << PG << endl;
        PG = PG * razao;
    }
    return 0;
}
