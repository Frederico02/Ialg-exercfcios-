#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct {
        char nome[20];
        char esporte[20];
        int idade;
        float altura;
    } TipoAtleta;
    TipoAtleta atletas[5];
    for (int i = 0; i < 5; ++i) {
        cin >> atletas[i].nome;
        cin >> atletas[i].esporte;
        cin >> atletas[i].idade;
        cin >> atletas[i].altura;
    }
    int velho = atletas[0].idade;
    int posVelho;
    float altura = atletas[0].altura;
    int posAlto;
    for (int i = 0; i < 5; ++i) {
        if(atletas[i].idade > velho){
            velho = atletas[i].idade;
            posVelho = i;
        }
        if(atletas[i].altura > altura){
            altura = atletas[i].altura;
            posAlto = i;
        }
    }
    cout << atletas[posAlto].nome << " " << atletas[posAlto].esporte << endl;
    cout << atletas[posVelho].nome << " " << atletas[posVelho].esporte << endl;
    
    
    return 0;
}
