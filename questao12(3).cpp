#include <iostream>
using namespace std;

void Trocar(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}

void BubbleSort(int vet[], int tam){
    for (int i = tam-1; i >= 0 ; --i) {
        for (int j = 0; j <= i; ++j) {
            if(vet[j] > vet[j+1]){
                Trocar(vet[j],vet[j+1]);
            }
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    BubbleSort(vet, n);
    for (int i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
