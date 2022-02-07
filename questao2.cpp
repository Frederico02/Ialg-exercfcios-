#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char texto1[255];
    cin >> texto1;
    char texto2[255];
    cin >> texto2;
    int ultimo = int (strlen(texto2));
    int i = 0;
    int u = 0;
    int posI;
    bool igual = false;
    bool primeiro = false;
    bool acabou = false;
    while((texto1[i] != 0) and (acabou == false)){
        if(texto1[i] == texto2[u]){
            if(primeiro == false){
                posI = i;
                primeiro = true;
            }
            ++u;
            igual = true;
        } else {
            if(primeiro){
                if(u != ultimo){
                    primeiro = false;
                    u = 0;
                    igual = false;
                    i = posI;
                } else {
                    acabou = true;                }
            }
        }
        ++i;
    }
    if(igual){
        cout << posI << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
