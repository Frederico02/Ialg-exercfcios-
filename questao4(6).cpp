#include <iostream>
using namespace std;

int ImprimirNumerosSequencia(int primeiro, int segundo, int nTermos){
    if(nTermos == 0)
        return primeiro;
    if(nTermos == 1)
        return segundo;
    return ImprimirNumerosSequencia(primeiro, segundo, nTermos-1) +
           ImprimirNumerosSequencia(primeiro, segundo, nTermos-2);
}
int main()
{
    int primeiro, segundo;
    cin >> primeiro >> segundo;
    int nTermos;
    cin >> nTermos;
    for (int i = 0; i < nTermos; i++) {
        cout << ImprimirNumerosSequencia (primeiro , segundo , i) << " ";
    }
    cout << endl;
    return 0;
}
