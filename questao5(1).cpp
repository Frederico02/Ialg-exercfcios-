#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char vet1[100];
    int t = 0;
    cin.get(vet1[t]);
    while(vet1[t] != '\n') {
        ++t;
        cin.get(vet1[t]);
    }
    char vet2[100];
    int u = 0;
    cin.get(vet2[u]);
    while(vet2[u] != '\n') {
        ++u;
        cin.get(vet2[u]);
    }
    int tam1 = strlen(vet1);
    int tam2 = strlen(vet2);
    char* vetRes[tam1+tam2] = NULL;
    vetRes = new char;
    int t = 0;
    int u = 0;
    for (int i = 0; i < (tam1+tam2); i++) {
        if (i < tam1) {
            vetRes[i] = vet1[t];
            ++t;
        } else {
            vetRes[i] = vet2[u];
            ++u;
        }
    }
    }
    
    return 0;
}
