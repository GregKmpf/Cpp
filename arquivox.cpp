/*
#include <iostream>
#include <vector>
#include <cfloat> // Para FLT_MAX e FLT_MIN
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<float> vetor;
    int consumobaixo = 0;
    int consumomoderado = 0;
    int consumoalto = 0;

    float menorconsumo = FLT_MAX; // Inicialização com o maior valor possível
    float maiorconsumo = FLT_MIN; // Inicialização com o menor valor possível
    float consumos = 0.0;

    for (int i = 0; i < N; i++) {
        float volts;
        cin >> volts;

        consumos += volts;

        // Contagem de consumo
        if (volts <= 1.0) {
            consumobaixo++;
        } else if (volts <= 2.5) {
            consumomoderado++;
        } else if (volts > 2.5) {
            consumoalto++;
        }

        // Atualização do menor e maior consumo
        if (volts < menorconsumo) {
            menorconsumo = volts;
        }
        if (volts > maiorconsumo) {
            maiorconsumo = volts;
        }

        
    }
    float mediaconsumo = consumos / N;

    // Exibição dos resultados
    cout << "Horas de consumo baixo: " << consumobaixo << endl;
    cout << "Horas de consumo moderado: " << consumomoderado << endl;
    cout << "Horas de consumo alto: " << consumoalto << endl;
    cout << "Menor consumo: " << menorconsumo << endl;
    cout << "Maior consumo: " << maiorconsumo << endl;
    cout << "Media dos consumos: " << fixed <<setprecision(2) << mediaconsumo << endl;

    return 0;
}
*/


    FILA, PILHA, Lista
    /*
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

    
    */


    vectors
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    // Adicionando elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Elementos após push_back:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Removendo o último elemento
    numeros.pop_back();

    cout << "Elementos após pop_back:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}




#include <iostream>
#include <vector>
#include <algorithm> // Para sort()

using namespace std;

int main() {
    vector<int> numeros = {5, 1, 4, 2, 3};

    // Ordenando o vetor em ordem crescente
    sort(numeros.begin(), numeros.end());

    cout << "Elementos ordenados em ordem crescente:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Ordenando o vetor em ordem decrescente
    sort(numeros.begin(), numeros.end(), greater<int>());

    cout << "Elementos ordenados em ordem decrescente:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

*/
exemplo de sort
/*
#include <iostream>
#include <vector>
#include <algorithm> // Para sort()

using namespace std;

int main() {
    vector<int> numeros = {5, 2, 9, 1, 5, 6};

    // Ordenação crescente
    sort(numeros.begin(), numeros.end());
    cout << "Ordenação crescente:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Ordenação decrescente
    sort(numeros.begin(), numeros.end(), greater<int>());
    cout << "Ordenação decrescente:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

*/

emulador calc

/*
#include <iostream>
#include <stack>


using namespace std;

int main(){
    stack<int> emulador; 
    string comando;//adicao(a),subtracao(s),multiplicacao(m),p(remove e exibe os valores na pilha)
    int number,number1;
    int ad, sub, mult;
    
    while(true){
    cin >> comando;

    if(comando=="a" || comando =="A"){
        cin >> number >> number1;
        ad = number + number1;
        emulador.push(ad);
        cout << ad << endl;

       
    }
    else if(comando=="s" || comando=="S"){
        cin >> number >> number1;
        sub = number - number1;
        emulador.push(sub);
        cout << sub << endl;
        
        

    }
    else if(comando=="m" || comando=="M"){
        cin >> number >> number1;
        mult = number * number1;
        emulador.push(mult);
        cout << mult << endl;
  
     }
    else if(comando=="p" || comando=="P"){
       cout << emulador.top() << endl;
       emulador.pop();
    } 

    else if(comando=="q" || comando=="Q"){
        break;
    }

    }

     while (!emulador.empty()) {
            cout << emulador.top() << " ";
            emulador.pop();
            
        }

    return 0;
}

*/



nodos

/*
#include <iostream>
#include <string>

struct Node {
    std::string value;
    Node* next;

    Node(const std::string& val) : value(val), next(nullptr) {}
};

class Lista {
private:
    Node* head;

public:
    Lista() : head(nullptr) {}

    ~Lista() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Adiciona ao final da lista
    void append(const std::string& val) {
        if (!head) {
            head = new Node(val);
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new Node(val);
    }

    // Exibe os elementos da lista
    void print() const {
        Node* current = head;
        while (current) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Protótipo da função que vamos implementar
    void insere_apos(const std::string& s1, const std::string& s2);
};


void Lista::insere_apos(const std::string& s1, const std::string& s2) {
    if (!head) {
        // Lista está vazia; apenas insira s1 no início.
        head = new Node(s1);
        return;
    }

    Node* current = head;
    while (current) {
        if (current->value == s2) {
            // Encontrou o nodo com s2, insira s1 após ele.
            Node* newNode = new Node(s1);
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }

    // Se chegamos aqui, s2 não foi encontrado. Insira s1 no final.
    append(s1);
}




*/


 PONTEIROS

 /*
 #include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x; // Ponteiro p armazena o endereço de x

    cout << "Valor de x: " << x << endl;
    cout << "Endereço de x (&x): " << &x << endl;
    cout << "Valor armazenado no ponteiro p: " << p << endl;
    cout << "Valor apontado por p (*p): " << *p << endl;

    // Modificando x usando o ponteiro
    *p = 99;
    cout << "Novo valor de x: " << x << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr; // Um array é implicitamente um ponteiro para seu primeiro elemento

    cout << "Primeiro elemento (arr[0]): " << *p << endl;

    // Percorrendo o array usando ponteiros
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << *(p + i) << endl;
    }

    return 0;
}


ponteiro nulo

#include <iostream>
using namespace std;

int main() {
    int* p = nullptr; // Ponteiro nulo

    if (p == nullptr) {
        cout << "O ponteiro não aponta para nenhum endereço válido." << endl;
    }

    int x = 10;
    p = &x; // Agora aponta para x

    if (p != nullptr) {
        cout << "O ponteiro agora aponta para o valor: " << *p << endl;
    }

    return 0;
}


ponteiro para ponteiro
#include <iostream>
using namespace std;

int main() {
    int x = 50;
    int* p = &x;
    int** pp = &p; // Ponteiro para ponteiro

    cout << "Valor de x: " << x << endl;
    cout << "Valor usando p: " << *p << endl;
    cout << "Valor usando pp: " << **pp << endl;

    return 0;
}

 */

 FUNCOES
 /*
 #include <iostream>
using namespace std;

// Função que retorna o dobro de um número
int dobro(int numero) {
    return numero * 2;
}

int main() {
    int num = 5;
    cout << "Dobro de " << num << " é " << dobro(num) << endl;
    return 0;
}

 
exemplo funcao void
#include <iostream>
using namespace std;

// Função que exibe uma mensagem
void exibirMensagem() {
    cout << "Olá, bem-vindo à programação em C++!" << endl;
}

int main() {
    exibirMensagem();
    return 0;
}







#include <iostream>
using namespace std;

// Passagem por valor (não altera o original)
void dobrarValor(int numero) {
    numero *= 2;
    cout << "Dentro da função (por valor): " << numero << endl;
}

// Passagem por referência (altera o original)
void dobrarReferencia(int& numero) {
    numero *= 2;
    cout << "Dentro da função (por referência): " << numero << endl;
}

int main() {
    int num = 10;

    dobrarValor(num);
    cout << "Fora da função (após valor): " << num << endl;

    dobrarReferencia(num);
    cout << "Fora da função (após referência): " << num << endl;

    return 0;
}



#include <iostream>
using namespace std;

// Definição da struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    // Declaração e inicialização
    Pessoa pessoa1;
    pessoa1.nome = "Ana";
    pessoa1.idade = 25;
    pessoa1.altura = 1.65;

    // Acesso aos membros da struct
    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << " anos" << endl;
    cout << "Altura: " << pessoa1.altura << " metros" << endl;

    return 0;
}

*/



lista dupl enc
/*


#include <iostream>
using namespace std;

// Estrutura para o nó da lista
struct Node {
    int data;
    Node* prev; // Ponteiro para o nó anterior
    Node* next; // Ponteiro para o próximo nó

    // Construtor para facilitar a criação de nós
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// Classe da lista duplamente encadeada
class DoublyLinkedList {
private:
    Node* head; // Ponteiro para o primeiro nó
    Node* tail; // Ponteiro para o último nó

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Método para adicionar um elemento no final
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) { // Lista vazia
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Método para imprimir a lista para frente
    void printForward() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Método para imprimir a lista para trás
    void printBackward() {
        Node* current = tail;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    // Método para remover um nó específico
    void remove(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                if (current->prev != nullptr) { // Não é o primeiro nó
                    current->prev->next = current->next;
                } else { // Primeiro nó
                    head = current->next;
                }

                if (current->next != nullptr) { // Não é o último nó
                    current->next->prev = current->prev;
                } else { // Último nó
                    tail = current->prev;
                }

                delete current; // Libera a memória
                return;
            }
            current = current->next;
        }
    }

    // Destrutor para liberar memória
    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList list;

    // Adicionando elementos
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "Lista para frente: ";
    list.printForward();

    cout << "Lista para trás: ";
    list.printBackward();

    // Removendo um elemento
    cout << "Removendo 20..." << endl;
    list.remove(20);

    cout << "Lista após remoção: ";
    list.printForward();

    return 0;
}





 */

 switch Case 
 /*
 #include <iostream>
using namespace std;

int main() {
    int opcao;

    cout << "Escolha uma opção (1-3): ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Você escolheu a opção 1." << endl;
            break;
        case 2:
            cout << "Você escolheu a opção 2." << endl;
            break;
        case 3:
            cout << "Você escolheu a opção 3." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}




 
 */