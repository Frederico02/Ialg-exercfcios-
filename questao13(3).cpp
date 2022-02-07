#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n1, n2;
    cin >> n1 >> n2;
    int maior, menor, intermediaria;
    if (n1 > n2){
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }
    while (menor > 0){
        intermediaria = menor;
        menor = (maior % menor);
        maior = intermediaria;
    }
    cout << maior << endl;
    return 0;
}
