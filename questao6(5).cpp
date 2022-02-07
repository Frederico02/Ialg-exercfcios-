#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct{
        float x;
        float y;
    } TipoPosicao;
    typedef struct{
        float x;
        float y;
    } TipoVelocidade;
    typedef struct{
        TipoPosicao posicao;
        TipoVelocidade velocidade;
    } TipoCarro;
    TipoCarro carro;
    float tempo;
    cin >> carro.posicao.x;
    cin >> carro.posicao.y;
    cin >> carro.velocidade.x;
    cin >> carro.velocidade.y;
    cin >> tempo;
    carro.posicao.x += carro.velocidade.x * tempo;
    carro.posicao.y += carro.velocidade.y * tempo; 
    cout << carro.posicao.x << " " << carro.posicao.y << endl;
    return 0;
}
