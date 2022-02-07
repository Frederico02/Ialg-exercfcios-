#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int qtd;
    cin >> qtd;
    int vet[qtd];
    for (int i = 0; i < qtd; ++i) {
        cin >> vet[i];
    }
    int valor;
    cin >> valor;
    int inicio = 0;
    int fim = qtd-1;
    bool igual = false;
    int meio;
    int pos;
    while ((inicio <= fim) and (igual == false)){
        meio = (inicio+fim)/2;
        if(valor > vet[meio]){
            fim = meio - 1;
        } else {
            if(valor < vet[meio]){
                inicio = meio + 1;
            } else {
                igual = true;
                pos = meio;
            }
        }
    }
    if(igual){
        cout << pos;
    } else {
        cout << -1;
    }
    cout << endl;
    return 0;
}
