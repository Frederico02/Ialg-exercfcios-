#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n; ++i){
        cin >> vetor[i];
    }
    int vetorContrario[n];
    int quantidade = n - 1;
    int controle = 0;
    for(; quantidade >= 0; --quantidade){
        vetorContrario[controle] = vetor[quantidade];
        ++controle;
    }
    int igual = 0;
    for (int i = 0; i < n; ++i) {
        if(vetor[i] == vetorContrario[i]){
            ++igual;
        }
    }
    if (igual == n) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
