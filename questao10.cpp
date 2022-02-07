#include <iostream>
#include <cstring>
using namespace std;
int main () {
    typedef struct{
        char nome[20];
        char presente[20];
    } TipoCartinha;
    typedef struct{
        char nome[20];
        int qtd;
        int qtdPedida;
    } TipoBrinquedo;
    int qtdCartinhas;
    cin >> qtdCartinhas;
    TipoCartinha cartinhas[qtdCartinhas];
    for (int i = 0; i < qtdCartinhas; ++i){
        cin >> cartinhas[i].nome;
        cin >> cartinhas[i].presente;
    }
    int qtdBrinquedos;
    cin >> qtdBrinquedos;
    TipoBrinquedo brinquedos[qtdBrinquedos];
    for (int i = 0; i < qtdBrinquedos; ++i) {
        cin >> brinquedos[i].nome;
        cin >> brinquedos[i].qtdPedida;
    }
    for (int i = 0; i < qtdBrinquedos; i++) {
        brinquedos[i].qtd = brinquedos[i].qtdPedida;
    }
    for (int i = 0; i < qtdCartinhas; ++i){
        for (int j = 0; j < qtdBrinquedos; ++j) {
            //cout << cartinhas[i].presente << " " << brinquedos[j].nome << endl;
            if(strcmp(cartinhas[i].presente, brinquedos[j].nome) == 0){
                --brinquedos[j].qtd;
            }
        }
    }
    for (int i = 0; i < qtdBrinquedos; ++i) {
        //cout << brinquedos[i].nome << " " << brinquedos[i].qtd << endl;
        if(brinquedos[i].qtd < 0){
            cout << brinquedos[i].nome << " ";
        }
    }
    cout << endl;
    
    return 0;
}
