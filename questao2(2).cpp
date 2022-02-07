#include <iostream>
using namespace std;

int Multiplicacao(int n1, int n2){
    if(n2 == 1){
        return n1;
    }
    return n1 + Multiplicacao(n1 , n2-1);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << Multiplicacao(n1 , n2) << endl;
    return 0;
}
