#include <iostream>
using namespace std;

void ImprimirAoContrario(int n){
    int numero;
    cin >> numero;
    if(n == 1){
        cout << numero << " ";
    } else {
        ImprimirAoContrario(n-1);
        cout << numero << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    ImprimirAoContrario(n);
    return 0;
}
