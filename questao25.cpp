#include <iostream>
using namespace std;

int main()
{
    int idade;
    cin >> idade;
    if (idade < 5) {
        cout << "Nao registrado" << endl;
    } else {
        if (idade <= 7 ) {
            cout << "Infantil" << endl;
        } else {
            if (idade <= 10) {
                cout << "Juvenil" << endl;
            } else 
                if (idade <= 15) {
                    cout << "Adolescente" << endl;
                } else {
                    if(idade <= 30) {
                        cout << "Adulto" << endl;
                    } else {
                        cout << "Senior" << endl;
                    }
                }
            }
        }
    return 0;
}
