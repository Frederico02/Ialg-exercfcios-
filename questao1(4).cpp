#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int vetorA[5];
    for(int i = 0; i < 5; ++i){
        cin >> vetorA[i];
    }
    int vetorB[5];
    for(int u = 0; u < 5; ++u){
        cin >> vetorB[u];
    }
    int soma = 0;
    for(int t = 0; t < 5; ++t){
        vetorA[t] = vetorA[t] - vetorB[t];
        soma += vetorA[t];
    }
    cout << soma << endl;
    return 0;
}
