#include <iostream>
using namespace std;

int Fat(int num){
    int fat = 1;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

void ObterVetor(float* vet, int n){
    for (int i = 0; i < n; i++) {
        vet[i] = (2.0f*float(Fat(i))+float(i))/(float(i*i)+1.75f);
    }
}

int main()
{
    int n;
    cin >> n;
    float* vet = new float[n];
    ObterVetor(vet, n);
    int m;
    cin >> m;
    for (int i = m; i < n; i++) {
        cout << vet[i] << endl;
    }
    delete[] vet;
    return 0;
}
