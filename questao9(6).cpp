#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int x, y, z;
    cin >> x >> y >> z;
    bool triangulo = true;
    if (x >= y + z){
        triangulo = false;
    }
    if (y >= x + z){
        triangulo = false;
    }
    if (z >= x + y){
        triangulo = false;
    }
    if (triangulo) {
        if ((x == y) and (y==z)){
            cout << "equilatero" << endl;
        } else {
            if ((x == y) or (x==z) or (y==z)){
                cout << "isoceles" << endl;
            } else {
                cout << "escaleno" << endl;
            }
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}
