#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<string> estacionamento; // Usando string para armazenar placas completas
    string option;
    string placa;  // Usando string para a placa do carro

    cout << "Escolha uma opcao: \n";
    cout << "e - Entrar com placa de carro\n";
    cout << "s - Sair do programa\n";

    while(true) {
        cin >> option;

        if(option == "e" || option == "E") {
            cout << "Qual a placa do carro?\n";
            cin >> placa;
            estacionamento.push_back(placa); // Agora é possível inserir placas completas
        }
        else if(option == "s" || option == "S") {
            cout << "Saindo...\n";
            break;
        }
        else {
            cout << "Opcao invalida. Tente novamente.\n";
        }

        cout << "Escolha uma opcao: \n";
    }

    // Imprimir todos os carros que saíram do estacionamento
    cout << "\nSaindo com os carros:\n";
    while(!estacionamento.empty()) {
        cout << "Carro com placa: " << estacionamento.back() << endl;
        estacionamento.pop_back();
    }

    return 0;
}
