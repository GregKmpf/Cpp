#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Estrutura para armazenar informações de estudantes
struct estudantes {
    int id;
    string nome;
    int idade;
};

// Função para buscar estudante por ID
void buscarPorId(const vector<estudantes>& alunos, int id) {
    bool encontrado = false;
    for (const auto& estudante : alunos) {
        if (estudante.id == id) {
            cout << "Estudante encontrado:\n";
            cout << "ID: " << estudante.id
                 << ", Nome: " << estudante.nome
                 << ", Idade: " << estudante.idade << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Estudante com ID " << id << " não encontrado.\n";
    }
}

// Função para buscar estudante por nome
void buscarPorNome(const vector<estudantes>& alunos, const string& nome) {
    bool encontrado = false;
    for (const auto& estudante : alunos) {
        if (estudante.nome == nome) {
            cout << "Estudante encontrado:\n";
            cout << "ID: " << estudante.id
                 << ", Nome: " << estudante.nome
                 << ", Idade: " << estudante.idade << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Estudante com nome \"" << nome << "\" não encontrado.\n";
    }
}


// Função para adicionar um estudante ao vetor
void adicionaestudante(vector<estudantes>& dados, int id, const string& nome, int idade) {
    estudantes novoestudante = {id, nome, idade};
    dados.push_back(novoestudante);
}
int lerEntradaNumerica() {
    int numero;
    while (!(cin >> numero)) {
        cout << "Entrada invalida. Por favor, insira um numero: ";
        cin.clear(); // Limpa o estado de erro do `cin`
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora até o próximo caractere de nova linha
    }
    return numero;
}
 
int main() {
    cout << "--SISTEMA DE MONITORAMENTO DE ALUNOS--\n";
    

    vector<estudantes> alunos; // Vetor para armazenar estudantes
    int entrada;

    do {
        cout << "\nSistema de Cadastro de Estudantes" << endl;
        cout << "1. Adicionar Estudante" << endl;
        cout << "2. Remover Estudante" << endl;
        cout << "3. Buscar Estudante" << endl;
        cout << "4. Listar Estudantes" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opcao: ";
        entrada = lerEntradaNumerica();

        if (entrada == 1) {
            estudantes dadosalun;
            cout << "Digite o ID do estudante: ";
             dadosalun.id = lerEntradaNumerica();
        

            cin.ignore(); // Ignora o caractere de nova linha que ficou no buffer
            cout << "Digite o nome do estudante: ";
            getline(cin, dadosalun.nome); // Lê o nome, incluindo espaços

            cout << "Digite a idade do estudante: ";
             dadosalun.idade = lerEntradaNumerica();

            adicionaestudante(alunos, dadosalun.id, dadosalun.nome, dadosalun.idade);
            cout << "Estudante adicionado com sucesso!" << endl;
        } 

        else if (entrada == 2) {
            cin.ignore(); // Limpa o buffer do cin
            string nomeParaRemover;
            cout << "Digite o nome completo do estudante que deseja remover: ";
            getline(cin, nomeParaRemover); // Lê o nome com espaços

            bool encontrado = false;
            for (int i = 0; i < alunos.size(); i++) {
                if (alunos[i].nome == nomeParaRemover) {
                    alunos.erase(alunos.begin() + i); // Remove o estudante
                    cout << "Estudante \"" << nomeParaRemover << "\" removido com sucesso!\n";
                    encontrado = true;
                    break; // Para evitar problemas com índices após remoção
                }
            }
        }

        else if (entrada == 3) {
            cout << "Deseja buscar o estudante por nome ou ID? (nome/id): ";
            string opcao3;
            cin >> opcao3;

            if (opcao3 == "nome") {
                cin.ignore();
                cout << "Digite o nome do estudante: ";
                string nome;
                getline(cin, nome);
                buscarPorNome(alunos, nome);

            } else if (opcao3 == "id") {
                cout << "Digite o ID do estudante: ";
                int id = lerEntradaNumerica();
                buscarPorId(alunos, id);

            } else {
                cout << "Opção inválida.\n";
            }
            }
        



        else if (entrada == 4) {
            cout << "\nLista de Estudantes:\n";
            for (const auto& estudante : alunos) {
                cout << "ID: " << estudante.id
                     << ", Nome: " << estudante.nome
                     << ", Idade: " << estudante.idade << endl;
            }
        }
    } while (entrada != 5);

    cout << "Encerrando o sistema..." << endl;

    return 0;
}
