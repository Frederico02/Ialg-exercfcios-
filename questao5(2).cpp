#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int qtd;
    cin >> qtd;
    typedef struct {
        char sexo;
        int idade;
        char resposta;
    } TipoPessoa;
    TipoPessoa pessoas[qtd];
    for (int i = 0; i < qtd; ++i) {
        cin >> pessoas[i].sexo;
        cin >> pessoas[i].idade;
        cin >> pessoas[i].resposta;
    }
    int qtdS = 0;
    int qtdN = 0;
    int maior18S = 0;
    int menor18N = 0;
    int maior18FN = 0;
    int menor18MS = 0;
    for (int i = 0; i < qtd; ++i) {
        if(pessoas[i].resposta == 'S'){
            ++qtdS;
            if(pessoas[i].idade > 18){
                ++maior18S;
            } else {
                if(pessoas[i].sexo == 'M'){
                    ++menor18MS;
                }
            }
        } else {
            ++qtdN;
            if(pessoas[i].idade < 18){
                ++menor18N;
            } else {
                if(pessoas[i].sexo == 'F'){
                    ++maior18FN;
                }
            }
        }
        
    }
    cout << qtdS << endl;
    cout << qtdN << endl;
    cout << maior18S << endl;
    cout << menor18N << endl;
    cout << maior18FN << endl;
    cout << menor18MS << endl;
    
    return 0;
}
