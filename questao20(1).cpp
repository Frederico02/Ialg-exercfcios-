#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    int primeiro = n;
    int algarismos;
    int somatorio = 0;
    bool feliz = true;
    if(n == 1){
        cout << "sim" << endl;
    } else {
        while(n != 1){
            if(n == 0){
                algarismos = 1;
            } else {
                algarismos = int(log10(n) + 1);
            }
            int t = algarismos - 1;
            int vetor[algarismos];
            for (;t >= 0; --t) {
                vetor[t] = n % 10;
                n /= 10;
            }
            for (int i = 0; i < algarismos; i++) {
                somatorio += int(pow(vetor[i],2));
            }            
            cout << somatorio << " ";
            n = somatorio;
            if(n == primeiro){
                feliz = false;
                n = 1;
            }
            somatorio = 0;
        }
        if(feliz){
            cout << "\nsim" << endl;
        } else {
            cout << "\nnao" << endl;
        }
    }
    return 0;
}
