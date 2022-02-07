#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int dimensao;
    cin >> dimensao;
    int matriz[dimensao][dimensao];
    for (int i = 0; i < dimensao; ++i) {
        for (int j = 0; j < dimensao; ++j) {
            cin >> matriz[i][j];
        }
    }
    int soma = 0;
    int qtd = 0;
    for (int i = 0; i < dimensao; ++i) {
        for (int j = 0; j < dimensao; ++j) {
            if(i == j){
                soma += matriz[i][j];
                ++qtd;
            }
        }
    }
    cout << soma / qtd << endl;
    return 0;
}
