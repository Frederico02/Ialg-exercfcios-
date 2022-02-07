#include <iostream>
#include <cmath>
using namespace std;
int main () {
    float salario, salarioNovo;
    float aumento = 0.0f;
    cin >> salario;
    salarioNovo = salario;
    if (salario < 300.0f) {
        salarioNovo = salario * 1.15f;
        aumento = salarioNovo - salario;
    } 
    if ((salario >= 300) and (salario <= 600.0f)) {
        salarioNovo = salario * 1.1f;
        aumento = salarioNovo - salario;
    }
    if ((salario > 600) and(salario <= 900.0f)) {
        salarioNovo = salario * 1.05f;
        aumento = salarioNovo - salario;
    }
    cout << aumento << endl;
    cout << salarioNovo << endl;
    return 0;
}
