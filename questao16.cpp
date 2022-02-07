#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int l, c;
    cin >> l >> c;
    int matriz[l][c];
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> matriz[i][j];
        }
    }
    int matrizR[l][c];
    int soma = 0;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            if((i == 0) or (i == l-1) or (j == 0) or (j == c-1)){
                matrizR[i][j] = matriz[i][j];
            } else {
                for (int a = i-1; a <= i+1; ++a) {
                    for (int b = j-1; b <= j+1; ++b) {
                        soma += matriz[a][b];
                    }
                }
                matrizR[i][j] = soma/9;
            }
            soma = 0;
        }
    }
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << setw(3) << matrizR[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
