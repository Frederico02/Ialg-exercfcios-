#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int Maior (int t1, int t2){
    if(t1 > t2)
        return t1;
    else 
        return t2;
}
int main () {
    string vetor1;
    cin >> vetor1;
    string vetor2;
    cin >> vetor2;
    int tamanho1 = int(vetor1.size());
    int tamanho2 = int(vetor2.size());
    int maior = Maior (tamanho1, tamanho2);
    int soma = 0;
    int vai1 = 0;
    char vetorSoma [maior+1];
    for (int i = 0; i <= maior; i++){
        vetorSoma[i] = '0';
    }
    
    for (int i = maior-1; i >= 0; --i) {
        soma = ((vetor1.at(i) - '0') + (vetor2.at(i) - '0'));
        if (soma >= 10){
            vai1 = 1;
            soma -= 10;
        }
        vetorSoma[i] = char(((vetorSoma[i] - '0') + soma) + '0');
        vetorSoma[i-1] = char(vai1 + '0');
        if((i == 0) and (vai1 == 1)){
            cout << '1';
        }
        vai1 = 0;
    }
    for (int i = 0; i < maior; ++i) {
        cout << vetorSoma[i];
    }
    cout << endl;
    
    
    return 0;
}
