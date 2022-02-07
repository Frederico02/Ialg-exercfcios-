#include <iostream>
using namespace std;

typedef struct {
    int num[6];
} Dezenas;

Dezenas* MaiorSoma(Dezenas* vet, int tam){
    int soma = 0;
    int maior = 0;
    Dezenas* res;
    for (int i = 0; i < tam; ++i) {
        soma = 0;
        for (int j = 0; j < 6; ++j) {
            soma += vet[i].num[j];
        }
        if(soma > maior){
            maior = soma;
            res = vet + i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    Dezenas* vet = new Dezenas[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; ++j) {
            cin >> vet[i].num[j];
        }
    }
    Dezenas* maior = MaiorSoma(vet,n);
    for (int i = 0; i < 6; i++) {
        cout << maior->num[i] << " ";
    }
    cout << endl;
    delete[] vet;
    return 0;
}
