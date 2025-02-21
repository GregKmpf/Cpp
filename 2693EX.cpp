#include <iostream>
#include <vector>
#include <algorithm> 


using namespace std;

//rota
//ordenar pela distancia(menor para maior) pela região (em ordem alfabética) e por último pelo nome. 
//custo(menor para maior)



struct Rota{
    string nomerota;
    string regiao;
    int distancia;
    double custo;

};

bool compararRotas(const Rota& r1, const Rota& r2) {
    if (r1.distancia != r2.distancia) {
        return r1.distancia < r2.distancia;
    } else if (r1.regiao != r2.regiao) {
        return r1.regiao < r2.regiao;
    } else if (r1.nomerota != r2.nomerota) {
        return r1.nomerota < r2.nomerota;
    } else {
        return r1.custo < r2.custo;
    }
}

int main(){
    vector<Rota> rotas;  
    string nome;
    char continuar;

    do{
        Rota rota;
        cout << "Informe o nome da rota: ";
        cin >> rota.nomerota;
        cout << "Informe a região da rota: ";
        cin >> rota.regiao;
        cout << "Informe a distância da rota: ";
        cin >> rota.distancia;
        cout << "Informe o custo da rota: ";
        cin >> rota.custo;

        rotas.push_back(rota);  // Adiciona a rota ao vetor de rotas

        cout << "Deseja adicionar outra rota? (s ou n): ";
        cin >> continuar;


    }while(continuar == 'S' || continuar == 's');

   sort(rotas.begin(), rotas.end(), compararRotas);

    // Exibe as rotas ordenadas
    cout << "\nRotas em ordem:\n";
    for (const auto& rota : rotas) {
        cout << "Nome: " << rota.nomerota
             << ", Região: " << rota.regiao
             << ", Distância: " << rota.distancia
             << ", Custo: " << rota.custo << endl;

             
    }

    return 0;
}
