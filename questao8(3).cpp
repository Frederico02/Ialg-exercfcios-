#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct{
        unsigned int tipo;
        float preco;
        int qtd;
        char nomeD[10];
    } TipoProduto;
    TipoProduto produto[60];
    int i = 0;
    produto[0].tipo = 1;
    while (produto[i].tipo != 0){
        cin >> produto[i].tipo;
        if(produto[i].tipo != 0){
            cin >> produto[i].preco;
            cin >> produto[i].qtd;
            cin >> produto[i].nomeD;
            ++i;
        }
    }
    unsigned int codigo = 1;
    bool erro = false;
    while ((codigo != 0) and (erro == false)){
        cin >> codigo;
        if(codigo != 0){
            for (int j = 0; j < i; ++j) {
                if(codigo == produto[j].tipo){
                    if(produto[j].qtd-1 < 0){
                        erro = true;
                    } else {
                        --produto[j].qtd;
                    }
                }
            }
        }
    }
    if(erro) {
        cout << "erro 3221" << endl;
    } else {
        int menor = produto[0].qtd;
        int posMenor = 0;
        for (int j = 0; j < i; ++j) {
            if(produto[j].qtd < menor){
                menor = produto[j].qtd;
                posMenor = j;
            }
        }
        cout << produto[posMenor].tipo << " "
             << produto[posMenor].qtd << " "
             << produto[posMenor].nomeD << endl;        
    }
    return 0;
}
