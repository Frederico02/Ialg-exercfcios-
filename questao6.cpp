#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float temperaturas[12];
    for (int i = 0; i < 12; ++i){
        cin >> temperaturas[i];
    }
    float maior = temperaturas[0];
    int posMaior;
    float menor = temperaturas[0];
    int posMenor;
    for (int i = 0; i < 12; ++i){
        if(temperaturas[i] > maior){
            maior = temperaturas[i];
            posMaior = i;
        }
        if(temperaturas[i] < menor){
            menor = temperaturas[i];
            posMenor = i;
        }
    }
    char meses[12][10] = {"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
    cout << meses[posMaior] << endl;
    cout << meses[posMenor] << endl;
    return 0;
}
