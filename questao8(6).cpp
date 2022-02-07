#include <iostream>
using namespace std;

typedef struct{
    int matri;
    int n1;
    int n2;
} Aluno;

void OrdenarColuna(Aluno*** coluna, int n, int c){
    for (int i = 1; i < n; i++){
        int j = i-1;
        Aluno aux;
        aux.matri = coluna[i][c]->matri;
        aux.n1 = coluna[i][c]->n1;
        aux.n2 = coluna[i][c]->n2;
        int soma = aux.n1+aux.n2;
        while((j >= 0) and ((coluna[j][c]->n1)+(coluna[j][c]->n2)) > soma){
            coluna[j+1][c]->matri = coluna[j][c]->matri;
            coluna[j+1][c]->n1 = coluna[j][c]->n1;
            coluna[j+1][c]->n2 = coluna[j][c]->n2;
            --j;
        }
        ++j;
        coluna[j][c]->matri = aux.matri;
        coluna[j][c]->n1 = aux.n1;
        coluna[j][c]->n2 = aux.n2;
    }
}
    

void OrdenarMatrizPorColuna(Aluno*** matriz, int n){
    for (int i = 0; i < n; i++) {
        OrdenarColuna(matriz, n,i);
    }
}

int main()
{
    int n;
    cin >> n;
    Aluno*** matriz = new Aluno**[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new Aluno*[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            matriz[i][j] = new Aluno;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j]->matri;
            cin >> matriz[i][j]->n1;
            cin >> matriz[i][j]->n2;
        }
    }
    OrdenarMatrizPorColuna(matriz,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j]->matri << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            delete matriz[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        delete matriz[i];
    }
    delete[] matriz;
    return 0;
}
