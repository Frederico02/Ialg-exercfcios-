#include <iostream>
using namespace std;

typedef struct{
    int cod;
    float saldo;
} TipoCliente;

void InsertionSort(TipoCliente clientes[], int tamanho){
    for (int t = 1; t < tamanho; t++) {
        float aux = clientes[t].saldo;
        int aux2 = clientes[t].cod;
        int j = t-1;
        while((j >= 0) and (clientes[j].saldo > aux)){
            clientes[j+1].saldo = clientes[j].saldo;
            clientes[j+1].cod = clientes[j].cod;
            --j;
        }
        clientes[j+1].saldo = aux;
        clientes[j+1].cod = aux2;
    }
}

int main() {
    TipoCliente clientes[100];
    int i = 0;
    cin >> clientes[0].cod;
    while(clientes[i].cod != -1){
        cin >> clientes[i].saldo;
        ++i;
        cin >> clientes[i].cod;
    }
    
    InsertionSort(clientes, i);
    float imovel;
    cin >> imovel;
    int maior = -1;
    int j = 0;
    while ((j < i) and (maior == -1)) {
        if(clientes[j].saldo > imovel){
            maior = j;
        }
        ++j;
    }
    if(maior != -1){
        for (int l = maior; l < i; ++l) {
            cout << clientes[l].cod << " " << clientes[l].saldo << endl;
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}
