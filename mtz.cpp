#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicializa a semente do gerador de números aleatórios
    const int tamanho = 5;
    int matriz[tamanho][tamanho];

    // Preenchendo a matriz com números aleatórios de 1 a 100
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = std::rand() % 100 + 1;
        }
    }

    // Exibindo a matriz
    std::cout << "Matriz 5x5 gerada aleatoriamente:\n";
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
