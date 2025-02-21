#include <iostream>
#include <queue> 

using namespace std;
 


struct livro{
    string namelivro;
    string autor;
    int anopub;
    int pag;

 };


int main(){
    queue<livro> livros;

    char leitura;
    int opcao;
    livro leituras;

    cout << "=== Sistema de Gerenciamento de Biblioteca ===\n";
    cout << " 1. Adicionar Livro\n 2. Listar Livros\n 3. Buscar Livro\n 4. Sair\n"; 
    cin >> opcao;
    do{
        if(opcao==1){
            cout << "Nome do livro: ";
            cin >> leituras.namelivro; 
            livros.push(leituras.namelivro);
            cout << "Autor do livro: ";
            cin >> leituras.autor;
            cout << "Ano de publicacao: ";
            cin >> leituras.anopub;
            cout << "Total de paginas: ";
            cin >> leituras.pag;
        }
    }while(leitura == 'S' || leitura == 's');
    
    while(!livros.empty()){
        livros.front();
        livros.pop();
    }
    
    return 0;
}