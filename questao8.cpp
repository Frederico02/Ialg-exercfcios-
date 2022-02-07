#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int N;
    cin >> N;
    int resultado = 0;
    for (int i = 1; i<= N; ++i){
        if (i < N){
            if(N % i == 0){
                resultado += i;
                cout << i << "+";
            }
        } else {
            resultado += i;
            cout << i << "=" << resultado << endl;
        }
    }
    return 0;
}
