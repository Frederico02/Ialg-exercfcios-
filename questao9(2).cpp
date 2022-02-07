#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float vet[10];
    int quantidadeNeg = 0;
    float soma = 0.0f;
    for(int i = 0; i < 10; ++i){
        cin >> vet[i];
        if (vet[i] < 0){
            ++quantidadeNeg;
        } else {
            soma += vet[i];
        }
    }
    cout << quantidadeNeg << endl << soma << endl;
    return 0;
}
