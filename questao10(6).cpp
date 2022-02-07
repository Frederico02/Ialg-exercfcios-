#include <iostream>
using namespace std;

void Trocar(float& a, float& b){
    float aux = a;
    a = b;
    b = aux;
}

void SelectionSort(float vet[], int tamanho){
    for (int i = 0; i < tamanho; ++i) {
        int menor = i;
        for (int j = i; j < tamanho; ++j) {
            if(vet[j] < vet[menor]){
                menor = j;
            }
        }
        Trocar(vet[menor], vet[i]);
    }
}

int main()
{
    float vet[100];
    cin >> vet[0];
    int cont = 0;
    while(vet[cont] >= 0){
        ++cont;
        cin >> vet[cont];
    }
    SelectionSort(vet, cont);
    if((cont-1) % 2 != 0){
        int meio = (cont-1)/2;
        cout << (vet[meio] + vet[meio+1]) / 2.0f;
    } else {
        int meio = cont / 2;
        cout << vet[meio];
    }
    cout << endl;
    return 0;
}
