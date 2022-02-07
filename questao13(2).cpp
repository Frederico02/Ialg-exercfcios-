#include <iostream>
#include <cmath>
using namespace std;

int BuscaNoVetor(int v[], int n, int elemento){
    if (v[n] == elemento)
        return 1;
    if(n == 0)
        return 0;
    return BuscaNoVetor(v, n-1, elemento);
}
int main () {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int elemento;
    cin >> elemento;
    cout << BuscaNoVetor(v, n, elemento) << endl;
    return 0;
}
