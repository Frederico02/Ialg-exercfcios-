#include <iostream>
#include <cmath>
using namespace std;


bool Primo(int n){
    for (int i = 2; i < n/2; i++) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main () {
    cout << Primo(64);
    return 0;
}
