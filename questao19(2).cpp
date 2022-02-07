#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n = 1;
    int a,b,c,d,e;
    int qtdMarcadas = 0;
    string certa, resposta;
    while (n != 0){
        cin >> n;
        for (int i = 1; i <= n; ++i){
            cin >> a >> b >> c >> d >> e;
            if (a <= 127){
                certa = "A\n";
                ++qtdMarcadas;
            }
            if (b <= 127) {
                certa = "B\n";
                ++qtdMarcadas;
            }
            if (c <= 127) {
                certa = "C\n";
                ++qtdMarcadas;
            }
            if (d <= 127) {
                certa = "D\n";
                ++qtdMarcadas;
            }
            if (e <= 127) {
                certa = "E\n";
                ++qtdMarcadas;
            }
            if (qtdMarcadas != 1) {
                resposta += "*\n";
            } else {
                resposta += certa;
            }
            qtdMarcadas = 0;
        }   
    }
    cout << resposta;
    return 0;
}
