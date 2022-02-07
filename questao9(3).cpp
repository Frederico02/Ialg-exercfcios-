#include <iostream>
using namespace std;
int main () {
    int matriz[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; ++j) {
            cin >> matriz[i][j];
        }
    }
    int qtdPares = 0;
    int qtdImpares = 0;
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; ++j) {
            if(matriz[i][j] % 2 == 0){
                ++qtdPares;
            } else {
                ++qtdImpares;
            }
            soma += float(matriz[i][j]);
        }
    }
    cout << qtdPares << endl;
    cout << qtdImpares << endl;
    cout << soma / float(qtdPares + qtdImpares) << endl;
    return 0;
}
