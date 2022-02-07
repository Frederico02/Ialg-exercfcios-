#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct{
        float x;
        float y;
    } TipoPonto;
    TipoPonto pontos[5];
    for (int i = 0; i < 5; ++i) {
        cin >> pontos[i].x;
        cin >> pontos[i].y;
    }
    int rota[5];
    for (int i = 0; i < 5; ++i) {
        cin >> rota[i];
    }
    float distancia = 0;
    for (int i = 1; i < 5; i++) {
        distancia += float(sqrt(pow((pontos[rota[i]].x-pontos[rota[i-1]].x),2)+pow((pontos[rota[i]].y-pontos[rota[i-1]].y),2)));
    }
    cout << distancia << endl;
    return 0;
}
