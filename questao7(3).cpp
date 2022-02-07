#include <iostream>
using namespace std;

typedef struct {
    int ouro;
    int prata;
    int bronze;
} Medalhas;

int Pontos(Medalhas* pais, int* pontos){
    int soma = 0;
    soma += (pais->ouro)*pontos[0];
    soma += (pais->prata)*pontos[1];
    soma += (pais->bronze)*pontos[2];
    return soma;
}

int main()
{
    int* pontos = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> pontos[i];
    }
    Medalhas* pais = new Medalhas;
    cin >> pais->ouro;
    cin >> pais->prata;
    cin >> pais->bronze;
    cout << Pontos(pais,pontos) << endl;
    delete pontos;
    delete pais;
    return 0;
}
