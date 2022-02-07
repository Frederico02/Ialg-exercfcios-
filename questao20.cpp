#include <iostream>
#include <cmath>
using namespace std;
float Determinante3 (float matriz[3][5]){
    int cont = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 5; ++j) {
            matriz[i][j] = matriz[i][cont];
            ++cont;
        }
        cont = 0;
    }    
    float somatorio = 0.0f;
    float multiplicacao = 1.0f;
    int cons = 0;
    while(cons < 3) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 5; ++j) {
                if((i+cons) == (j)){
                    multiplicacao = multiplicacao * matriz[i][j];
                }
            }
        }
        somatorio += multiplicacao;
        multiplicacao = 1.0f;
        ++cons;
    }
    cons = 4;
    while(cons > 1) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 4; j >= 0; --j) {
                if(i == cons-j){
                    multiplicacao = multiplicacao * matriz[i][j];
                }
            }
        }
        somatorio -= multiplicacao;
        multiplicacao = 1.0f;
        --cons;
    }
    return somatorio;
}
int main () {
    float matriz[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> matriz[i][j];
        }
    }
    float indice;
    int coluna = 0;
    float matrizRed[3][5];
    int a = 0;
    int b = 0;
    float det;
    while (coluna <= 3) {
        for (int i = 1; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if(j != coluna){
                    matrizRed[a][b] = matriz[i][j];
                    ++b;
                }
            }
            ++a;
            b = 0;
        }
        a = 0;
        indice = matriz[0][coluna];
        if(coluna % 2 != 0) {
            indice = -indice;
        }
        det += indice * (Determinante3 (matrizRed));
        ++coluna;
    }
    cout << det << endl;
    return 0;
}
