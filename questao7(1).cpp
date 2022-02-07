#include <iostream>
using namespace std;

int main()
{
    int vet[10];
    for (int i = 0; i < 10; ++i){
        vet[i] = 0;
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i){
        cin >> vet[i];
    }
    int novo;
    cin >> novo;
    int p;
    cin >> p;
    for (int i = 9; i > p; --i){
        vet[i] = vet[i - 1];
    }
    vet[p] = novo;
    for (int i = 0; i < 10; ++i){
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
