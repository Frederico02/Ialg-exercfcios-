#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    float maior, segundoMaior;
    if (n1 > n2){
        maior = n1;
    } else {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    if (n4 > maior) {
        maior = n4;
    }
    if (n1 - maior == 0) {
        if (n2 > n3){
            segundoMaior = n2;
        } else {
            segundoMaior = n3;
        }
        if (n4 > segundoMaior) {
            segundoMaior = n4;
        }
    }
    if (n2 - maior == 0) {
        if (n1 > n3){
            segundoMaior = n1;
        } else {
            segundoMaior = n3;
        }
        if (n4 > segundoMaior) {
            segundoMaior = n4;
        }
    }
    if (n3 - maior == 0) {
        if (n2 > n1){
            segundoMaior = n2;
        } else {
            segundoMaior = n1;
        }
        if (n4 > segundoMaior) {
            segundoMaior = n4;
        }
    }
    if (n4 - maior == 0) {
        if (n2 > n3){
            segundoMaior = n2;
        } else {
            segundoMaior = n3;
        }
        if (n1 > segundoMaior) {
            segundoMaior = n1;
        }
    }
            
    cout << maior << endl;
    cout << segundoMaior << endl;
    return 0;
}
