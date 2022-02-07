#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int v1[10];
    for(int i = 0; i < 10; ++i) {
        cin >> v1[i];
    }
    int v2[5];
    for (int i = 0; i < 5; ++i) {
        cin >> v2[i];
    }
    int divisores = 0;
    int u;
    for (int i = 0; i < 10; ++i){
        for (u = 0; u < 5; ++u){
            if (v1[i] % v2[u] == 0){
                ++divisores;
            }
        }
        cout << v1[i] << " " << divisores << endl;
        divisores = 0;
        u = 0;
    }
    return 0;
}
