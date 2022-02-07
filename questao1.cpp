#include <iostream>
#include <cmath>
using namespace std;

bool Capicua (int num){
    int algarismos;
    if(num == 0)
        algarismos = 1;
    else
        algarismos = int(log10(num)) + 1;
    int vetor[algarismos];
    int ultimo = algarismos-1;
    for (int i = ultimo; i >= 0; --i) {
        vetor[i] = num % 10;
        num /= 10;
    }
    bool capicua = true;
    for (int i = 0; i < algarismos; ++i) {
        if(vetor[i] != vetor[ultimo-i]){
            capicua = false;
        }
    }
    return capicua;
}

int Maior (int n, int maior){
    if(n > maior){
        return n;
    }
    return maior;
}

int Menor (int n, int menor){
    if(n < menor){
        return n;
    }
    return menor;
}

int main()
{
    int qtd;
    cin >> qtd;
    int vetor[qtd];
    for (int i = 0; i < qtd; ++i) {
        cin >> vetor[i];
    }
    bool capicua;
    int maior;
    int menor;
    bool primeiro = false;
    for (int i = 0; i < qtd; ++i) {
        capicua = Capicua(vetor[i]);
        if(capicua == false){
            cout << vetor[i] << endl;
        } else {
            if(primeiro == false){
                maior = vetor[i];
                menor = vetor[i];
                primeiro = true;
            }
            maior = Maior(vetor[i],maior);
            menor = Menor (vetor[i],menor);
        }
    }
    cout << menor << endl;
    cout << maior << endl;
    return 0;
}
