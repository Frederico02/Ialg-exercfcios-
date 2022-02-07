#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, numero;
    cin >> n;
    double somatorio = 1;
    double fatorial = 1;
    for (int i = 1; i <= n; ++i){
        numero = i;
        for ( ; numero > 0; --numero){
            fatorial = fatorial * double(numero);
        }
        somatorio += (1 / fatorial);
        fatorial = 1;
    }
    cout << somatorio << endl;
    return 0;
}
