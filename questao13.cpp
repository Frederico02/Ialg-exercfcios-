#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    float maior;
    if (n1 > n2) {
        maior = n1;
    } else {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    cout << maior << endl;
    return 0;
}
