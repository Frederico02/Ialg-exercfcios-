#include <iostream>
#include <cmath>
using namespace std;

float H (float N){
    if(N == 1)
        return 1.0f;
    return (1/N) + H(N-1);
}
float ElementoMatriz (int i, int j, int m) {
    float elemento = (float(m*i + j))+1.0f;
    return H(elemento);
}

int main () {
    int M;
    cin >> M;
    float matriz[M][M];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            matriz[i][j] = ElementoMatriz(i,j,M);
        }
        
    }
    float somatorio2 = 0;
    float somatorio1 = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++){
            if(i == j)
                somatorio1 += matriz[i][j];
            if((M-1)-i == j)
                somatorio2 += matriz[i][j];
        }
    }
    cout << somatorio2 - somatorio1 << endl;
    return 0;
}
