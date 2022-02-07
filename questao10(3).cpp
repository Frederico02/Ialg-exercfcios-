#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int vet[7];
    int mult2[7];
    mult2[0] = 0;
    int mult3[7];
    mult3[0] = 0;
    int mult[7];
    mult[0] = 0;
    int a = 0;   //variaveis para controlar em qual posicao sera 
                 //adicionado o multiplo 
    int b = 0;
    int c = 0;
    for(int i = 0; i < 7; ++i){
        cin >> vet[i];
        if(vet[i] % 2 == 0){
            mult2[a] = vet[i];
            ++a;
        }
        if(vet[i] % 3 == 0){
            mult3[b] = vet[i];
            ++b;
        }
        if((vet[i] % 3 == 0) and (vet[i] % 2 == 0)){
            mult[c] = vet[i];
            ++c;
        }
    }
    for(int i = 0; i < a; ++i){
        cout << mult2[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < b; ++i){
        cout << mult3[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < c; ++i){
        cout << mult[i] << " ";
    }
    cout << endl;
    return 0;
}
