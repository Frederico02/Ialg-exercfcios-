#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if ((a <= b) and (b <= c) and (c <= d) and (d <= e)){
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
