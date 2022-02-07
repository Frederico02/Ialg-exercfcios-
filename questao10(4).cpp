#include <iostream>
#include <cmath>
using namespace std;

int Sucessor(int x){
    return ++x;
}
int Antecessor(int x){
    return --x;
}

int Soma(int x, int y){
    if(y == 0)
        return x;
    if(y > 0)
        return Soma(Sucessor(x),Antecessor(y));
    return Soma(Antecessor(x), Sucessor(y));
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << Soma (x,y) << endl;
    return 0;
}
