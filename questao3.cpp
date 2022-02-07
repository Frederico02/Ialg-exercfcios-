#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream arquivoA("arquivoA.txt");
    ifstream arquivoB("arquivoB.txt");
    ofstream arquivoC("arquivoC.txt");
    char n[100];
    char m[100];
    while (arquivoA or arquivoB){
        if(arquivoA >> n){
            arquivoC << n << " ";
        }
        if(arquivoB >> m){
            arquivoC << m << " ";
        }
    }
    return 0;
}
