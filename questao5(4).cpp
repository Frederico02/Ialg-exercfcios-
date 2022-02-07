#include <iostream>
using namespace std;

unsigned int F(unsigned int n);

unsigned int MIN(unsigned int n1, unsigned int n2, unsigned int n3){
    unsigned int menor = n1 < n2 ? n1 : n2;
    return n3 < menor ? n3 : menor;
}
unsigned int F (unsigned int n){
    if(n==1 or n==2 or n==3)
        return n;
    return MIN(F(n-1), F(n-2), F(n-3))+1;
}
int main()
{
    unsigned int n;
    cin >> n;
    cout << F(n) << endl;
    return 0;
}
