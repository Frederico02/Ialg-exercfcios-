#include <iostream>
using namespace std;

int main()
{
    float salario;
    cin >> salario;
    int tempoServico;
    cin >> tempoServico;
    float salarioLiquido, imposto;
    if (salario < 200.0f) {
        salarioLiquido = salario;
        imposto = 0;
    } else {
        if ((salario >= 200.0f) and (salario <= 450.0f)) {
            salarioLiquido = salario * 0.97f;
            imposto = salario - salarioLiquido;
        } else {
            if (salario < 700.0f) {
                salarioLiquido = salario * 0.92f;
                imposto = salario - salarioLiquido;
            } else {
                salarioLiquido = salario * 0.88f;
                imposto = salario - salarioLiquido;
            }
        }
    }
    float gratificacao;
    if (salario > 500.0f) {
        if (tempoServico <= 3) {
            salarioLiquido = salarioLiquido + (salario * 0.2f);
            gratificacao = salario * 0.2f;
        } else {
            salarioLiquido = salarioLiquido + (salario * 0.3f);
            gratificacao = salario * 0.3f;
        }
    } else {
        if (tempoServico <= 3) {
            salarioLiquido = salarioLiquido + (salario * 0.23f);
            gratificacao = salario * 0.23f;
        } else {
            if (tempoServico < 6) {
                salarioLiquido = salarioLiquido + (salario * 0.35f);
                gratificacao = salario * 0.35f;
            } else {
                salarioLiquido = salarioLiquido + (salario * 0.33f);
                gratificacao = salario * 0.33f;
            }
        }
    }
    string categoria;
    if (salarioLiquido < 350.0f) {
        categoria = "A";
    } else {
        if (salarioLiquido <= 600.0f){
            categoria = "B";
        } else {
            categoria = "C";
        }
    }
    cout << imposto << endl;
    cout << gratificacao << endl;
    cout << salarioLiquido << endl;
    cout << categoria << endl;
    return 0;
}
