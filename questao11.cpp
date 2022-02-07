#include <iostream>
#include <cmath>
using namespace std;

bool ElementoNoOutroVetor(char busca, char vet[], int tam){
    for (int i = 0; i < tam; i++) {
        if(busca == vet[i]){
            return true;
        }
    }
    return false;
}

int main () {
    int n1;
    cin >> n1;
    char* vet1 = new char[n1];
    for (int i = 0; i < n1; i++) {
        cin >> vet1[i];
    }
    int n2;
    cin >> n2;
    char* vet2 = new char[n2];
    for (int i = 0; i < n2; i++) {
        cin >> vet2[i];
    }
    char* vetorR = new char[n1];
    int u = 0;
    for (int i = 0; i < n1; i++) {
        if(!ElementoNoOutroVetor(vet1[i],vet2,n1)){
            vetorR[u] = vet1[i];
            ++u;
        }
    }
    for (int i = 0; i < u; i++) {
        cout << vetorR[i] << " ";
    }
    cout << endl;
    delete[] vet1;
    delete[] vet2;
    delete[] vetorR;
    return 0;
}
