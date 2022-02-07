#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
    int C;
    int H;
} Hidrocarboneto;
int main () {
    Hidrocarboneto* ptHC = NULL;
    ptHC = new Hidrocarboneto;
    cin >> ptHC->C;
    cin >> ptHC->H;
    cout << 12*ptHC->C+ptHC->H << endl;
    delete ptHC;
    return 0;
}
