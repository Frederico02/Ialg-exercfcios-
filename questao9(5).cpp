#include <iostream>
#include <cmath>
using namespace std;
int main () {
    unsigned int numero;
    cin >> numero;
    unsigned int fatorial = 1;
    for (unsigned i = 1; numero > i; --numero){
        fatorial = fatorial * numero;
    }
    cout << fatorial << endl;
    return 0;
}
