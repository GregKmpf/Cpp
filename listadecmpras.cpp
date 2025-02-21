#include <iostream>
#include <vector>
using namespace std;

int main() {
    string compras;
    vector<string> lista;

    while (true) {
        cin >> compras;

        if (compras == "FIM") {
            break; // Interrompe o loop se a entrada for "FIM"
        }

        // Verifica se o item já está na lista
        bool encontrado = false;
        for (const auto& item : lista) {
            if (item == compras) {
                encontrado = true;
                break;
            }
        }

        // Adiciona o item à lista se não foi encontrado
        if (!encontrado) {
            lista.push_back(compras);
        }
    }

    // Imprime os itens da lista
    for (const auto& item : lista) {
        cout << item << " ";
    }

    return 0;
}
