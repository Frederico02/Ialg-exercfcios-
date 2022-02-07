#include <iostream>
#include <cmath>
using namespace std;
int main () {
    unsigned int numero, a, b, c, d, e;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    cin >> numero;
    if (numero < 100000){
        if(numero >= 10000){
            a = (numero / 10000);
            b = (numero % 10000) / 1000;
            c = ((numero % 10000) % 1000) / 100;
            d = (((numero % 10000) % 1000) % 100) / 10;
            e = (((numero % 10000) % 1000) % 100) % 10;
        } else {
            if(numero >= 1000){
                b = (numero / 1000);
                c = (numero % 1000) / 100;
                d = ((numero % 1000) % 100) / 10;
                e = ((numero % 1000) % 100) % 10;
            } else {
                if(numero >= 100) {
                    c = numero / 100;
                    d = (numero % 100) / 10;
                    e = (numero % 100) % 10;
                } else {
                    if(numero >= 10) {
                        d = (numero / 10);
                        e = (numero % 10);
                    } else {
                        e = numero;
                    }
                }
            }
        }
        cout << a << "..."<< b << "..."<< c << "..."<< d << "..."<< e << endl;
    } else {
        cout << "invalido" << endl;
    }
    return 0;
}
