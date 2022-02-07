#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    double x = sqrt(2);
    double pi = 1;
    for (int i = 1; i <= n; ++i) {
        pi = pi * (x / 2);
        x = sqrt(2 + x);
    }
    cout << 2 / pi << endl;
    return 0;
}
