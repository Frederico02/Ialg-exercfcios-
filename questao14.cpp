#include <iostream>
#include <cmath>
using namespace std;

int Menor (int n1, int n2){
    return n1 < n2 ? n1 : n2;
}

int MenorDoVetor(int vet[], int n){
    if(n == 0)
        return vet[0];
    return Menor(MenorDoVetor(vet, n-1), vet[n]);
}

int main () {
    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    cout << MenorDoVetor(vet, n-1) << endl;
    return 0;
}
