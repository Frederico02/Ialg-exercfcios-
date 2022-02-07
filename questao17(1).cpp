#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
    float raio;
    cin >> raio;
    int quantidade;
    cin >> quantidade;
    float x, y;
    float variado = 0;
    float variacao = 2 * float(M_PI) / float(quantidade);
    for (int i = 1; i <= quantidade; ++i) {
        if (i == 1) {
            cout << fixed << setprecision(2) << raio << " " << y << endl;
        } else {
            variado = variado + variacao;
            x = ((cos(variado)) * raio);
            y = ((sin(variado)) * raio);
            cout << fixed << setprecision(2) << x << " " << y << endl; 
        }
    }
    return 0;
}
