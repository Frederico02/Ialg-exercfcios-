#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int qtd;
    cin >> qtd;
    typedef struct{
        float salario;
        int idade;
        int nFilhos;
    } TipoPessoa;
    TipoPessoa pessoas[qtd];
    for (int i = 0; i < qtd; ++i) {
        cin >> pessoas[i].salario;
        cin >> pessoas[i].idade;
        cin >> pessoas[i].nFilhos;
    }
    int qtdMais1000 = 0;
    float somaSalario = 0;
    float maior = pessoas[0].salario;
    int somaFilhos = 0;
    for (int i = 0; i < qtd; ++i) {
        somaSalario += pessoas[i].salario;
        if(pessoas[i].salario > maior){
            maior = pessoas[i].salario;
        }
        if(pessoas[i].salario > 1000.0f) {
            ++qtdMais1000;
        }
        somaFilhos += pessoas[i].nFilhos; 
    }
    cout << somaSalario / float(qtd) << endl;
    cout << float(somaFilhos) / float(qtd) << endl;
    cout << maior << endl;
    cout << qtdMais1000*100/qtd << "%" << endl;
    return 0;
}
