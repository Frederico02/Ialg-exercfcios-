#include <iostream>
using namespace std;

int main()
{
    float horasExtras;
    cin >> horasExtras;
    float horasFaltas;
    cin >> horasFaltas;
    float h;
    h = (horasExtras * 60) -((2/3)*(horasFaltas * 60));
    if (h > 2400) {
        cout << 500 << endl;
    } else {
        if (h > 1800) {
            cout << 400 << endl;
        } else {
            if (h > 1200) {
                cout << 300 << endl;
            } else {
                if (h > 600) {
                    cout << 200 << endl;
                } else {
                    cout << 100 << endl;
                }
            }
        }
    }
                
    return 0;
}
