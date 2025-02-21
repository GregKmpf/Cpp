#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Estrutura para armazenar os dados de cada aluno
struct Aluno {
    string nome;
    string regiao;
    int distancia;
    double custo;
};

// Função de comparação para ordenar os alunos
bool compararAlunos(const Aluno& a1, const Aluno& a2) {
    if (a1.distancia != a2.distancia) {
        return a1.distancia < a2.distancia;
    } else if (a1.regiao != a2.regiao) {
        return a1.regiao < a2.regiao;
    } else {
        return a1.nome < a2.nome;
    }
}

int main() {
    vector<Aluno> alunos;
    int Q;

    // Lê a quantidade de alunos
    cin >> Q;

    // Lê os dados de cada aluno
    for (int i = 0; i < Q; ++i) {
        Aluno aluno;
        cin >> aluno.nome >> aluno.regiao >> aluno.distancia >> aluno.custo;
        alunos.push_back(aluno);
        
    }
    
    // Ordena o vetor de alunos usando a função de comparação
    sort(alunos.begin(), alunos.end(), compararAlunos);

    // Exibe apenas os nomes dos alunos na ordem de entrega
    for (const auto& aluno : alunos) {
        cout << aluno.nome << endl;
    }

    return 0;
}
