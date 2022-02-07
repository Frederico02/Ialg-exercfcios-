#include <iostream>
using namespace std;

void ImprimirNumerosAte(int n){
    if(n == 0){
        cout << 0 << " ";
    }
    else {
        ImprimirNumerosAte(n-1);
        cout << n << " ";
    }
} 

int main()
{
    int n;
    cin >> n;
    ImprimirNumerosAte (n);
    cout << endl;
    return 0;
}
