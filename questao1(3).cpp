#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    char vetor[n];
    for (int i = 0; i < n; ++i) {
        cin >> vetor[i];
    }
    char caractere;
    cin >> caractere;
    bool achou = false;
    for (int i = 0; i < n; ++i) {
        if(vetor[i] == caractere){
            cout << i << " ";
            achou = true;
        }
    }
    if(achou == false){
        cout << -1;
    }
    cout << endl;
    return 0;
}
