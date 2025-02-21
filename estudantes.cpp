#include <iostream>
#include <vector>
#include <string>  // Para usar string

using namespace std;

struct dados {
    int id;
    string nome;
    int idade;
};

// Função para adicionar estudante
void addEstudante(vector<dados>& estudantes, int id, const string& nome, int idade) {
    dados novoEstudante = {id, nome, idade};
    estudantes.push_back(novoEstudante);  // Adiciona o estudante ao vetor
    cout << "Estudante " << nome << " adicionado com sucesso!" << endl;
}

int main() {
    cout << "--SISTEMA DE MONITORAMENTO DE ALUNOS--\n";
    cout << endl;

    vector<dados> estudantes;  // Vetor para armazenar os estudantes
    int opcao;
    dados dado;

    do {
        // Menu de opções
        cout << "\nSistema de Cadastro de Estudantes" << endl;
        cout << "1. Adicionar Estudante" << endl;
        cout << "2. Remover Estudante" << endl;
        cout << "3. Buscar Estudante" << endl;
        cout << "4. Listar Estudantes" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Adicionar Estudante\n";
                cout << "Digite: Id, Nome, Idade:\n";
                cin >> dado.id >> dado.nome >> dado.idade;
                cin.ignore(); // Limpa o buffer antes de ler o nome
                cout << "Lendo idade\n";
                cin >> dado.idade;

                addEstudante(estudantes, dado.id, dado.nome, dado.idade);  // Chama a função para adicionar o estudante
                break;

            case 2:
                cout << "Remover Estudante\n";
                // A implementação de remoção de estudante pode ser feita aqui
                break;

            case 3:
                cout << "Buscar Estudante\n";
                // A implementação de busca de estudante pode ser feita aqui
                break;

            case 4:
                cout << "Listar Estudantes\n";
                // A implementação de listagem de estudantes pode ser feita aqui
                break;

            case 5:
                cout << "Saindo...\n";
                break;

            default:
                cout << "Opção inválida!\n";
        }
    } while(opcao != 5);

    return 0;
}
 