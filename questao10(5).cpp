#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int tamanho;
    cin >> tamanho;
    int distancia;
    cin >> distancia;
    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }
    int meio = tamanho / 2;
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if((i == (meio - distancia)) and (j >= (meio-distancia)) and (j <= (meio+distancia))){
                soma += matriz[i][j];
            }
            if((i == (meio + distancia)) and (j >= (meio-distancia)) and (j <= (meio+distancia))){
                soma += matriz[i][j];
            }
            if((j == (meio - distancia)) and (i >= (meio - distancia)) and (i <= (meio + distancia))){
                soma += matriz[i][j];
            }
            if((j == (meio + distancia)) and (i >= (meio - distancia)) and (i <= (meio + distancia))){
                soma += matriz[i][j];
            }
        }
    }
    soma -= matriz[meio-distancia][meio-distancia];
    soma -= matriz[meio-distancia][meio+distancia];
    soma -= matriz[meio+distancia][meio-distancia];
    soma -= matriz[meio+distancia][meio+distancia];
    cout << soma << endl;
    return 0;
}
