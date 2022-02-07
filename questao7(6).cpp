#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int linhas, colunas;
    cin >> linhas >> colunas;
    int matriz[linhas][colunas];
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz[i][j];
        }
    }
    int a = 0;
    int b = 0;
    int matrizT[colunas][linhas];
    for (int j = 0; j < linhas; ++j) {
        for (int i = 0; i < colunas; ++i) {
            matrizT[i][j] = matriz[a][b];
            ++b;
        }
        ++a;
        b = 0;
    }
    for (int i = 0; i < colunas; ++i) {
        for (int j = 0; j < linhas; ++j) {
            cout << matrizT[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
