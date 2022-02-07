#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct{
        int x;
        int y;
    } TipoPonto;
    typedef struct{
        TipoPonto v1;
        TipoPonto v2;
    } TipoRetangulo;
    TipoPonto p;
    cin >> p.x >> p.y;
    int num;
    cin >> num;
    TipoRetangulo retangulos[num];
    for (int i = 0; i < num; ++i) {
        cin >> retangulos[i].v1.x;
        cin >> retangulos[i].v1.y;
        cin >> retangulos[i].v2.x;
        cin >> retangulos[i].v2.y;
    }
    int qtd = 0;
    for (int i = 0; i < num; ++i) {
        if((p.x >= retangulos[i].v1.x) and (p.x <= retangulos[i].v2.x) and (p.y >= retangulos[i].v1.y) and (p.y <= retangulos[i].v2.y)){
            ++qtd;
        }
    }
    cout << qtd << endl;
    return 0;
}
