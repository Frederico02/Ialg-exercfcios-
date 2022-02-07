#include <iostream>
using namespace std;

int NumeroMinimo(int n) {
    if(n==1)
        return 1;
    return 2 * NumeroMinimo(n-1) + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << NumeroMinimo(n) << endl;
    return 0;
}
