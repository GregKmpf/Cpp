#include <iostream>
#include <list>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // ===== Lista =====
    cout << "=== Lista ===" << endl;
    list<int> lista;

    // Operações com Lista
    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);

    cout << "Lista apos insercoes: ";
    for (int n : lista) cout << n << " ";
    cout << endl;

    // Remover o primeiro elemento
    lista.pop_front();
    cout << "Lista apos remover o primeiro elemento: ";
    for (int n : lista) cout << n << " ";
    cout << endl;

    // ===== Fila (Queue) =====
    cout << "\n=== Fila ===" << endl;
    queue<int> fila;

    // Operações com Fila
    fila.push(1);  // Enqueue
    fila.push(2);
    fila.push(3);

    cout << "Fila apos insercoes: ";
    queue<int> temp_fila = fila;
    while (!temp_fila.empty()) {
        cout << temp_fila.front() << " ";
        temp_fila.pop();
    }
    cout << endl;

    // Remover o primeiro elemento (Dequeue)
    fila.pop();
    cout << "Fila apos remover o primeiro elemento: ";
    temp_fila = fila;
    while (!temp_fila.empty()) {
        cout << temp_fila.front() << " ";
        temp_fila.pop();
    }
    cout << endl;

    // ===== Pilha (Stack) =====
    cout << "\n=== Pilha ===" << endl;
    stack<int> pilha;

    // Operações com Pilha
    pilha.push(100);
    pilha.push(200);
    pilha.push(300);

    cout << "Pilha apos insercoes: ";
    stack<int> temp_pilha = pilha;
    while (!temp_pilha.empty()) {
        cout << temp_pilha.top() << " ";
        temp_pilha.pop();
    }
    cout << endl;

    // Remover o elemento do topo (Pop)
    pilha.pop();
    cout << "Pilha apos remover o topo: ";
    temp_pilha = pilha;
    while (!temp_pilha.empty()) {
        cout << temp_pilha.top() << " ";
        temp_pilha.pop();
    }
   cout << endl;

    return 0;
}
