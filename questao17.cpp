#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char caracteres[10];
    for (int i = 0; i < 10; i++) {
        cin >> caracteres[i];
    }
    char consoantes[10];
    int u = 0;
    for (int i = 0; i < 10; i++) {
        if((caracteres[i] != 'a') and (caracteres[i] != 'e') and (caracteres[i] != 'i') and (caracteres[i] != 'o') and (caracteres[i] != 'u')) {
            consoantes[u] = caracteres[i];
            ++u;
        }
    }
    int i = 0;
    while(consoantes[i] != 0){
        cout << consoantes[i];
        ++i;
    }
    cout << endl;
    return 0;
}
