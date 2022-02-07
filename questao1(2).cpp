#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int qtd;
    cin >> qtd;
    typedef struct{
        char nome[20];
        int ano;
        int preco;
    } TipoCarro;
    TipoCarro carros[qtd];
    for (int i = 0; i < qtd; i++) {
        cin >> carros[i].nome;
        cin >> carros[i].ano;
        cin >> carros[i].preco;
    }
    int precoRef;
    cin >> precoRef;
    for (int i = 0; i < qtd; i++) {
        if(carros[i].preco < precoRef){
            cout << carros[i].nome << "  " << carros[i].ano << "  " << carros[i].preco << endl;
        }
    }
    return 0;
}
