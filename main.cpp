#include <iostream>
#include <string>
#include <fstream>
#include "abb.h"
#include "lista.h"

using namespace std;

int main(){
    fstream arquivo;
    arquivo.open("Funcionarios.txt");
    ArvoreBinariaDeBusca abb;
    Funcionario func;
    if (arquivo.is_open()) {
        while (!arquivo.eof()) {
            arquivo >> func.id;
            arquivo >> func.nome;
            abb.inserir(func.id,func.nome);
            abb.pegaPenalidade(func.id);
        }
    }
    arquivo.close();
    abb.imprime();
    arquivo.open("penalidades.txt", ios::app);
    int opcao;
    cout<<"opcao: ";
    cin>>opcao;
    while(opcao != -1){
        cin>>func.id;
        cin>>func.data;
        cin>>func.horario;
        if(func.horario > 9.00){
            cout<<abb.aplicaPenalidade(func.id,func.data,func.horario)<<endl;
            arquivo<<func.id<<' '<<func.data<<' '<<func.horario<<endl;
        }
        cout<<"opcao"<<endl;
        cin>>opcao;
    }
    arquivo.close();
    remove("penalidades.txt");
/*    arquivo.open("penalidades.txt");
    int dado;
    cout<<"dado"<<endl;
    cin>>dado;
    if (arquivo.is_open()) {
        cout<<"abriu\n";
        while (!arquivo.eof()){
            arquivo >> func.id;
            arquivo >> func.data;
            arquivo >> func.horario;
            if(dado == func.id ){
                cout<<"entrei\n";
                cout<<func.id<<" ";
                cout<<func.data<<" ";
                cout<<func.horario<<endl;
            }
        }
    }
    arquivo.close();*/
    return 0;
}



