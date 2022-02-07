#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int codigo;
    int quantidade;
    float preco,valorBruto, precoFinal;
    cin >> codigo >> quantidade;
     if (codigo <= 10){
         preco = 10.0f;
     } else {
         if (codigo <= 20) {
             preco = 15.0f;
         }
         else {
            if (codigo <= 30){
                preco = 20.0f;
            }
            else {
                preco = 30.0f;
            }
        }
    }
    valorBruto = float(quantidade) * preco;
    if (valorBruto < 250.0f) {
        precoFinal = valorBruto * 0.95f;
    } else {
        if (valorBruto <= 500.0f) {
            precoFinal = valorBruto * 0.9f;
        } else {
            precoFinal = valorBruto * 0.85f;
        }
    }
    float desconto = valorBruto - precoFinal;
    cout << preco << endl;
    cout << valorBruto << endl;
    cout << desconto << endl;
    cout << precoFinal << endl;
    return 0;
}
