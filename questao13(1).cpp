#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float vetor[n];
    for(int i = 0; i < n; ++ i){
        cin >> vetor[i];
    }
    float maior = vetor[0];
    float menor = vetor[0];
    int posMaior = 0;
    int posMenor = 0;
    for(int i = 0; i < n; ++i){
        if (vetor[i] > maior){
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor){
            menor = vetor[i];
            posMenor = i;
        }
    }
    int posMeio = -1;
    if (n % 2 != 0){
        posMeio = n / 2;
    }
    cout << maior << endl;
    cout << menor << endl;
    if (posMeio != -1){
        cout << vetor[posMeio] << endl;
    } else {
        cout << -1 << endl;
    }
    cout << posMaior << endl;
    cout << posMenor << endl;
    cout << posMeio << endl;
    return 0;
}
