#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float matriz[3][5];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matriz[i][j];
        }
    }
    int cont = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 5; ++j) {
            matriz[i][j] = matriz[i][cont];
            ++cont;
        }
        cont = 0;
    }    
    float somatorio = 0;
    float multiplicacao = 1;
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
        multiplicacao = 1;
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
        multiplicacao = 1;
        --cons;
    }
    cout << somatorio << endl;
    return 0;
}
