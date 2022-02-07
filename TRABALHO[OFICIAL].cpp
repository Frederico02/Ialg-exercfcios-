#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std ;
//  ESTRUTURA DOS DADOS      //
struct AnimaisExoticos
{
    char nome[30] ;
    char classe[30] ;
    char pais[30] ;
    char habitat[30] ;
};
//          FUNCOES             //
//FUNCAO PARA CALCULAR REGISTROS//
int CalculoRegistros( fstream &arquivoR )
{
    if ( !arquivoR )
        arquivoR.open("trabalho.bin") ;
    arquivoR.seekg ( 0 , arquivoR.end ) ;                                //POSICIONA A CABECA DE ESCRITA NO FIM DO ARQUIVO
    int qtdRegistros = (arquivoR.tellg());                               //RETORNA QTS BYTES TEM NO ARQUIVO
    qtdRegistros = (int)(qtdRegistros / sizeof(AnimaisExoticos));       //QUANTOS REGISTROS TEM NO ARQUIVO
    arquivoR.seekg ( 0 , arquivoR.beg ) ;                                //POSICIONA A CABECA DE ESCRITA NO INICIO DO ARQUIVO

    return qtdRegistros ;                                               //UM INTEIRO QUE É A QTD DE REGISTROS      
    arquivoR.close();                                                    //FECHAMENTO DO ARQUIVO
}
//    FUNCAO PARA ORDENAR      //
void Ordena (AnimaisExoticos vetor[] , fstream &arquivoR )            
{
    if ( !arquivoR )
        arquivoR.open("trabalho.bin") ;
    int i = 0 , indice ;                                                //CONTADOR E INDICE PARA CONTROLE DA REPETICAO
    indice = CalculoRegistros( arquivoR ) ;                             //RECEBE A QTD DE REGISTROS QUE HA NO ARQUIVO       
    bool trocou = true ;                                               //BOOLEANA PARA CONTROLE DA REPETICAO
    AnimaisExoticos aux ;                                               //ESTRUTURA AUXILIAR PARA EFETUAR A TROCA  
    while ((trocou) and (i < indice ))
    {
        trocou = false ;
        for ( int j = 0 ; j < (indice-1) ; j++ )
        {
            if (strcmp( vetor[j].nome , vetor[j+1].nome ) > 0)          //PRIMEIRO CARACTERE
            {                                                           // !=  É MAIOR EM J
                aux = vetor[j];
                vetor[j] = vetor[j+1];                                  //TROCA DE J POR J+1
                vetor[j+1] = aux;
                trocou = true;
            }
        }
        i++;
    }
}
//    FUNCAO PARA ATUALIZAR    //
int Atualizar( AnimaisExoticos* ptrAntigo, AnimaisExoticos* ptrNovo , fstream &arquivoAtt )
{
    AnimaisExoticos* ptrAux = new AnimaisExoticos;
    bool achou = false ;
    int i = 0 , posicao = 0 , indice ;
    indice = CalculoRegistros( arquivoAtt );
    while ( !achou and i < indice )
	{
        arquivoAtt.read( ( char * ) (ptrAux) , sizeof(AnimaisExoticos) );
        if ( strcmp ( ptrAntigo->nome , ptrAux->nome ) == 0 )
        {
            cout << "\n[ANIMAL] ENCONTRADO\n" ;
            cout << "\nDigite um novo [NOME DO ANIMAL] :\n" ;
            cin.getline( ptrNovo->nome , 30 ) ;
            cout << "\nDigite uma nova [CLASSE DO ANIMAL] :\n" ;
            cin.getline( ptrNovo->classe , 30 ) ;
            cout << "\nDigite um novo [PAIS DO ANIMAL] :\n" ;
            cin.getline( ptrNovo->pais , 30 ) ;
            cout << "\nDigite um novo [HABITAT DO ANIMAL] :\n" ;
            cin.getline( ptrNovo->habitat , 30 ) ;
            posicao = i ;
            achou = true ;
        }
        i++;
    }
    if ( !achou )   posicao = -1;
    return posicao ;
    delete ptrAux;
}
//    FUNCAO PARA BUSCAR       //
int Buscar( char nomeBuscado[30] , fstream &arquivoR , AnimaisExoticos* ptrBuscar)
{
    int qtdRegistros = CalculoRegistros(arquivoR);                        //RECEBE A QTD DE REGISTROS NO ARQUIVO
    AnimaisExoticos vetor[qtdRegistros];                                  //DECLARA VETOR PARA ORDENALO
    ptrBuscar = &vetor[0] ;                                               //PONTEIRO APONTA PRA PRIMEIRA POSICAO DO VETOR
    arquivoR.read (reinterpret_cast<char*> (ptrBuscar) ,                //LE DO ARQUIVO PARA O PONTEIRO QUE APONTA PARA
    (qtdRegistros*sizeof(AnimaisExoticos))) ;                             //O VETOR
    bool achou = false ;
    int i = 0 , posicao = 0 ;
    while ( (!achou) and (i < qtdRegistros ) )
	{
        arquivoR.read( ( char * ) (ptrBuscar) , sizeof(AnimaisExoticos) );
        if ( strcmp ( nomeBuscado  , ptrBuscar->nome ) == 0 )            //COMPARA SE O NOME BUSCADO É IGUAL AO DO ARQUIVO
        {
            posicao = i ;
            achou = true ;
        }
        i++;
    }
    if ( achou )                                                         //SE ENCONTRADO IMPRIME O CADASTRO BUSCADO
    {
        cout << "\n Seu [ANIMAL] foi encontrado :\n " ;
        cout << "[NOME DO ANIMAL   ] : " << vetor[posicao].nome    << endl ;
        cout << "[CLASSE DO ANIMAL ] : " << vetor[posicao].classe  << endl ;
        cout << "[PAIS DO ANIMAL   ] : " << vetor[posicao].pais    << endl ;
        cout << "[HABITAT DO ANIMAL] : " << vetor[posicao].habitat << endl ;
    }
    else
        cout << "[ANIMAL] NAO ENCONTRADO" << endl ;

    return posicao;
}
//FUNCAO PARA IMPRIMIR O MENU  //
void Menu()
{
    cout << "\n| [CADASTRO DE ANIMAIS EXOTICOS] |\n" ;
    cout << "\n|      Selecione uma opcao :     |\n"  << endl ;
    cout <<   "|  [1] = Inserir dados           |"    << endl ;
    cout <<   "|  [2] = Atualizar dados         |"    << endl ;
    cout <<   "|  [3] = Buscar dados            |"    << endl ;
    cout <<   "|  [4] = Listar dados            |"    << endl ;
    cout <<   "|  [5] = Encerrar o programa     |"    << endl ;
    cout <<   "----------------------------------"    << endl ;
}
//     FUNCAO PARA LISTAR      //
void Listar( fstream &arquivoR , int qtdRegistros , AnimaisExoticos vetor[] )
{
    arquivoR.read (reinterpret_cast<char*> (vetor) ,
    (qtdRegistros*sizeof(AnimaisExoticos))) ;                          //LER DO ARQUIVO PARA O PONTEIRO

    Ordena( vetor , arquivoR ) ;                                        //ORDENACAO DO VETOR POR NOME

    cout << endl << "Listagem ordenada por [NOME DO ANIMAL] :\n"<<endl ;
    for (int i = 0; i < qtdRegistros ; i++)                            //IMPRESSAO DOS DADOS NA TELA 
    {
        cout << "[NOME DO ANIMAL   ] : " << vetor[i].nome    << endl ;
        cout << "[CLASSE DO ANIMAL ] : " << vetor[i].classe  << endl ;
        cout << "[PAIS DO ANIMAL   ] : " << vetor[i].pais    << endl ;
        cout << "[HABITAT DO ANIMAL] : " << vetor[i].habitat << endl ;
        cout << endl;
    }
}
//     FUNCAO PARA INSERIR     //
void Inserir ( AnimaisExoticos* novoCadastro )
{
    cin.ignore();
    cout << "Insira o [NOME DO ANIMAL] : "   << endl ;
    cin.getline( novoCadastro->nome , 30 ) ;
    cout << "Insira a [CLASSE DO ANIMAL] : " << endl ;
    cin.getline( novoCadastro->classe , 30 ) ;
    cout << "Insira o [PAIS DO ANIMAL] : "   << endl ;
    cin.getline ( novoCadastro->pais , 30 ) ;
    cout << "Insira o [HABITAT DO ANIMAL] : "<< endl ;
    cin.getline( novoCadastro->habitat , 30 ) ;
}
//    FUNCAO PRINCIPAL         //
int main ()
{
    int opcao ;
    do
    {
        Menu() ;
        cin >> opcao ;
                // INSERIR DADOS //
        if ( opcao == 1 )
        {
            system ("clear") ;
            fstream arquivoW ("trabalho.bin" , ios::out | ios::app ) ;
            AnimaisExoticos *novoCadastro = new AnimaisExoticos ;       //ALOCACAO DE UM PONTEIRO PARA INSERCAO
            Inserir( novoCadastro ) ;
            arquivoW.write( (const char*) (novoCadastro),              //ESCRITA DO PONTEIRO NO CADASTRO
            sizeof( AnimaisExoticos ) );
            arquivoW.close();
            delete novoCadastro ;                                      //DESALOCACAO DO PONTEIRO
        }
        else   // ATUALIZAR DADOS //
        if ( opcao == 2 )
        {
            cin.ignore() ;
            system("clear") ;
            fstream arquivoAtt ("trabalho.bin" , ios::in ) ;
            AnimaisExoticos* ptrAntigo = new AnimaisExoticos ;        //ALOCACAO DOS PONTEIROS 
            AnimaisExoticos* ptrNovo = new AnimaisExoticos ;			
            cout << "\nDigite o [NOME DO ANIMAL] que deseja atualizar :\n" ;
            cin.getline( ptrAntigo->nome , 30 ) ;
            int posicaoAtt = -1 ;
            posicaoAtt = Atualizar( ptrAntigo , ptrNovo , arquivoAtt ) ;
            delete ptrAntigo ;
            arquivoAtt.close() ;
            fstream arquivoNew ( "trabalho.bin" , ios::out | ios::in ) ;
            if ( posicaoAtt != -1 )
            {								//POSICIONA A CABECA DE ESCRITA NA POSICAO ENCONTRADA	
                arquivoNew.seekp( (posicaoAtt * sizeof(AnimaisExoticos)) , arquivoNew.beg ) ; 
                arquivoNew.write( (const char*) (ptrNovo) , sizeof(AnimaisExoticos) ) ;
                arquivoNew.seekp(0) ;
                arquivoNew.close() ;
            }
            delete ptrNovo ;
        }
        else   // BUSCAR DADOS //
        if ( opcao == 3 )
        {
            AnimaisExoticos *ptrBuscar = new AnimaisExoticos ;
            cin.ignore() ;
            system ("clear") ;
            fstream arquivoR ( "trabalho.bin ", ios::in ) ;
            cout << "\nInsira um [NOME DO ANIMAL] a ser buscado :\n" ;
            char nomeBuscado[30] ;
            cin.getline( nomeBuscado , 30 ) ;
            Buscar( nomeBuscado , arquivoR , ptrBuscar ) ;
            arquivoR.close() ;
            delete ptrBuscar ;
        }
        else   // LISTAR DADOS //
        if ( opcao == 4 )
        {
            fstream arquivoR ( "trabalho.bin" , ios::in ) ;
            int qtdRegistros = CalculoRegistros(arquivoR) ;
            AnimaisExoticos vetor[qtdRegistros] ;
            system("clear") ;
            Listar( arquivoR , qtdRegistros , vetor ) ;
            arquivoR.close() ;
        }
    }while( opcao == 1 or opcao == 2 or opcao == 3 or opcao == 4 ) ;
    
    return 0;
}


