#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int algarismos;
    if (n == 0) {
        algarismos = 1;
    } else {
        algarismos = int(log10(n) + 1);
    }
    int vetorContra[algarismos];
    for (int i = 0; i < algarismos; i++) {
        vetorContra[i] = n % 10;
        n /= 10;
    }
    //inverter vetor
    int vetor[algarismos];
    int i = 0;
    int u = algarismos - 1;
    for(; u >= 0; --u){
        vetor[i] = vetorContra[u];
        ++i;
    }
    int qtdRemove;
    int cont = 0;
    cin >> qtdRemove;
    bool emenor = false;
    for (int i = 0; i < algarismos; ++i) {
        for(int j = i + 1; j < algarismos; ++j) {
            if((vetor[i] < vetor[j]) and (cont < qtdRemove) and (emenor == false)){
                vetor[i] = -1;
                ++cont;
                emenor = true;
            }
        }
        emenor = false;
    }
    for (int i = 0; i < algarismos; i++) {
        if(vetor[i] != -1) {
            cout << vetor[i];
        }
    }
    return 0;
}
