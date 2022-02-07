#include <iostream>
#include <cmath>
using namespace std;
int main () {
    typedef struct{
        char nome[30];
        int horaE[7];
        int horaS[7];
    } TipoGnomo;
    int n;
    cin >> n;
    TipoGnomo gnomos[n];
    for (int i = 0; i < n; ++i) {
        cin >> gnomos[i].nome;
        for (int j = 0; j < 7; ++j) {
            cin >> gnomos[i].horaE[j];
            cin >> gnomos[i].horaS[j];
        }
    }
    int horasT = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 7; ++j) {
            horasT += gnomos[i].horaS[j] - gnomos[i].horaE[j];
        }
        if(horasT < 70) {
            cout << gnomos[i].nome << " " << horasT << endl;
        }
        horasT = 0;
    }
    return 0;
}
