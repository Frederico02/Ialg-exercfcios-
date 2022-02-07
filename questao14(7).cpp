#include <iostream>
#include <cstring>
using namespace std;
int main () {
    typedef struct {
        char cristal[20];
        char cor[20];
    }TipoSabre;
    typedef struct{
        char nome[20];
        char posicao[20];
        TipoSabre sabre;
    }TipoJedi;
    int qtd;
    cin >> qtd;
    TipoJedi jedis[qtd];
    for (int i = 0; i < qtd; i++) {
        cin >> jedis[i].nome;
        cin >> jedis[i].posicao;
        cin >> jedis[i].sabre.cristal;
        cin >> jedis[i].sabre.cor;
    }
    typedef struct{
        char nome[20];
        int qtd;
    } TipoHierarquia;
    
    char buscaCor[20];
    cin >> buscaCor;
    bool existe = false;
    TipoHierarquia hierarquia[qtd];
    int b = 0;
    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < qtd; ++j) {
            if(strcmp(jedis[i].posicao, hierarquia[j].nome) == 0){
                existe = true;
            }
        }
        if(existe == false){
            strcpy(hierarquia[b].nome, jedis[i].posicao);
            ++b;
        }
    }
    for (int i = 0; i < b; i++) {
        hierarquia[i].qtd = 0;
    }
    
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < qtd; j++) {
            if(strcmp(jedis[j].posicao, hierarquia[i].nome) == 0){
                if(strcmp(buscaCor, jedis[j].sabre.cor) == 0){
                    ++hierarquia[i].qtd;
                }
            }
        }
    }
    for (int i = 0; i < b; i++) {
        cout << hierarquia[i].nome << " " << hierarquia[i].qtd << endl;
    }
    
    
    
    return 0;
}
