#include <iostream>
using namespace std;

int main()
{
    int qtd1;
    cin >> qtd1;
    int qtd2;
    cin >> qtd2;
    float vetor1[qtd1];
    for (int i = 0; i < qtd1; ++i){
        cin >> vetor1[i];
    }
    float vetor2[qtd2];
    for (int i = 0; i < qtd2; i++){
        cin >> vetor2[i];
    }
    int existe = 0;
    for (int i = 0; i < qtd1; ++ i){
        for (int u = 0; u < qtd2; ++ u){
            if (vetor1[i] == vetor2[u]){
                cout << vetor1[i] << endl;
                ++existe;
            }
        }
    }
    if (existe == 0) {
        cout << -1 << endl;
    }
    return 0;
}
