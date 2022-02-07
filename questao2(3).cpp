#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int quantidade;
    cin >> quantidade;
    int numero;
    int premio = 0;
    bool premiado = false;
    for (int i = 1; ((i <= quantidade) and (i != premio)); ++i){
        cin >> numero;
        if ((i == numero) and (premiado == false)){
            premio = i;
            premiado = true;
        }
    }
    cout << premio << endl;
    return 0;
}
