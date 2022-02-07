#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int tamanho1;
    cin >> tamanho1;
    int tamanho2;
    cin >> tamanho2;
    int vetor1[tamanho1];
    for (int i = 0; i < tamanho1; ++i) {
        cin >> vetor1[i];
    }
    int vetor2[tamanho2];
    for (int i = 0; i < tamanho2; ++i) {
        cin >> vetor2[i];
    }
    bool algum = false;
    int anterior;
    int posI = 0;
    int posF = 0;
    bool primeiro = false;
    int posTeste = 0;
    while (posTeste < tamanho1){
        for (int i = posF; i < tamanho1; ++i) {
            anterior = vetor1[i-1]; 
            if(vetor1[i] == (anterior+1)){
                if(primeiro == false) {
                    posI = i-1;
                    primeiro = true;
                }
                ++posF;
            } else {
                if(primeiro == true){
                    i = tamanho1;
                    posTeste = posF;
                }
            }
             ++posTeste;
        }
        primeiro = false;
        int u = posI;
        for(int i = 0; i < tamanho2; ++i){
            if(vetor2[i] == vetor1[u]){
                ++u;
            }
        }
        if((posF-posI) == (u-posI)){
            for (int i = posI; i < posF; ++i){
                cout << vetor1[i] << " ";
            }
            cout << endl;
            algum = true;
        }
        ++posF;
    }
    if(algum == false){
        cout << "ERRO" << endl;
    }
    return 0;
}
