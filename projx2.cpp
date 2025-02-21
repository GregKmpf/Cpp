#include <iostream>
#include <string> // para manipular strings
#include <climits>

namespace UPF {

struct node {
    std::string value; // Armazena o valor do nó
    node* previous; // Ponteiro para o nó anterior
    node* next; // Ponteiro para o próximo nó
};

struct list {
    node* first = nullptr; // Ponteiro para o primeiro nó da lista
    node* last = nullptr; // Ponteiro para o último nó da lista
    int num_nodes = 0; // Contador do número de nós na lista

    // Retorna o número de nós na lista
    int size() {
        return num_nodes;
    }

    // Adiciona um elemento no início da lista
    void push_front(const std::string& s) {
        num_nodes++; // Incrementa o contador de nós
        node* p = new node; // Cria um novo nó
        p->value = s; // Atribui o valor ao nó
        p->previous = nullptr; // Não há nó anterior ao novo primeiro nó
        p->next = first; // O próximo nó será o antigo primeiro nó

        if (first != nullptr) { 
            first->previous = p; // Atualiza o ponteiro `previous` do antigo primeiro nó
        }
        first = p; // Atualiza o ponteiro `first` para o novo nó

        if (last == nullptr) { 
            last = p; // Se a lista estava vazia, o último nó também será o novo nó
        }
    }

    // Adiciona um elemento no final da lista
    void push_back(const std::string& s) {
        num_nodes++; // Incrementa o contador de nós
        node* p = new node; // Cria um novo nó
        p->value = s; // Atribui o valor ao nó
        p->next = nullptr; // Não há nó seguinte ao novo último nó
        p->previous = last; // O nó anterior será o antigo último nó

        if (last != nullptr) { 
            last->next = p; // Atualiza o ponteiro `next` do antigo último nó
        }
        last = p; // Atualiza o ponteiro `last` para o novo nó

        if (first == nullptr) { 
            first = p; // Se a lista estava vazia, o primeiro nó também será o novo nó
        }
    }

    // Conta quantos nós na lista têm o valor igual à string `s`
    int count(const std::string& s) {
        int n = 0; // Inicializa o contador
        node* p = first; // Começa pelo primeiro nó
        while (p != nullptr) { // Percorre a lista até o final
            if (p->value == s) { 
                n++; // Incrementa o contador se o valor for igual a `s`
            }
            p = p->next; // Move para o próximo nó
        }
        return n; // Retorna o número de ocorrências
    }

    // Imprime todos os elementos da lista
    void print() {
        node* p = first; // Começa pelo primeiro nó
        while (p != nullptr) { // Percorre a lista até o final
            std::cout << p->value << " "; // Imprime o valor do nó
            p = p->next; // Move para o próximo nó
        }
        std::cout << std::endl;
    }

    // Libera a memória alocada para a lista
    ~list() {
        node* p = first;
        while (p != nullptr) {
            node* next = p->next; // Armazena o próximo nó
            delete p; // Libera o nó atual
            p = next; // Move para o próximo nó
        }
    }
};

}; // namespace UPF

int main() {
    UPF::list l;

    l.push_back("A");
    l.push_front("B");
    l.push_back("C");
    l.push_back("B");

    l.print(); // Deve imprimir: B A C B

    std::cout << "Count of 'B': " << l.count("B") << std::endl; // Deve imprimir: Count of 'B': 2
    std::cout << "Size: " << l.size() << std::endl; // Deve imprimir: Size: 4

    return 0;
}
/*               


*/

#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
//cria um ponteiro duplo para alocação dinamica    
    int** matriz = new int*[b]; //aloca um vetor de ponteiros com b elementos


    for(int i=0;i<a;i++){
        matriz[i] = new int[b]; //aloca um inteiro para cada linha da matriz
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> matriz[i][j]; //leitura
        }
    }

    cout << "Matriz normal\n";
    for(int i=0;i<a;i++){
        cout << "[ "; 
        for(int j=0;j<b;j++){
            cout << matriz[i][j] << " "; 
        }
        cout << "]";
        cout << endl;
    }
    cout << "Matriz inversa: \n";

    for(int i=0;i<a;i++){
        cout << "[ ";
        for(int j=0; j<b;j++){
            cout << matriz[j][i] << " "; //troca posiçoes
        }
        cout << "]";
        cout << endl;
    }

    cout << "Matriz de tras pra frente: \n";
    for(int i=b-1;i>=0;i--){
        cout << "[ ";
        for(int j=a-1;j>=0;j--){
            cout << matriz[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    
    
    



    return 0;
}


/*      */


// Biblioteca para lista duplamente encadeada
#include <iostream>
#include <string>

namespace UPF {
struct node {
  std::string value;  // Valor
  node *previous;     // Nodo anterior
  node *next;         // Próximo nodo
};

struct list {
  node *first = nullptr;  // Primeiro nodo
  node *last = nullptr;   // Último nodo
  int num_nodes = 0;      // Quantidade de nodos

  int size() { return num_nodes; }

  void push_front(const std::string &s) {
    num_nodes++;
    node *p = new node;
    p->value = s;
    p->previous = nullptr;
    p->next = first;
    if (first != nullptr) first->previous = p;
    first = p;
    if (last == nullptr) last = p;
  }

  void push_back(const std::string &s) {
    num_nodes++;
    node *p = new node;
    p->value = s;
    p->next = nullptr;
    p->previous = last;
    if (last != nullptr) last->next = p;
    last = p;
    if (first == nullptr) first = p;
  }

  int count(const std::string &s) {
    int n = 0;
    node *p = first;
    while (p != nullptr) {
      if (p->value == s) n++;
      p = p->next;
    }
    return n;
  }

  node *find(const std::string &s) {
    node *p = first;
    while (p) {
      if (p->value == s) return p;
      p = p->next;
    }
    return nullptr;
  }

  void print() {
    node *p = first;
    while (p != nullptr) {
      std::cout << '"' << p->value << '"' << ' ';
      p = p->next;
    }
    std::cout << '\n';
  }

  void erase(UPF::node *p) {
    if (p == first)         // Deletando o primeiro nodo da lista
      first = first->next;  // O primeiro passa a ser o segundo da lista

    if (p == last)            // Deletando o último
      last = last->previous;  // o último passa a ser o penúltimo

    if (p->next != nullptr)             // Existe um posterior?
      p->next->previous = p->previous;  // Posterior aponta para anterior

    if (p->previous != nullptr)     // Existe um anterior?
      p->previous->next = p->next;  // Anterior aponta para o posterior

    num_nodes--;
    delete p;
  }

  void pop_front() { erase(first); }

  void pop_back() { erase(last); }

  void remove(const std::string &s) {
    node *p = find(s);      // Procura a primeira ocorrência
    while (p != nullptr) {  // enquanto achou
      erase(p);             // delete aquele nodo
      p = find(s);          // procura a próxima ocorrência
    }
  }

  void insere_apos(const std::string &s1,const std::string &s2){
        
        node *f = find(s2);
        if (first == nullptr || f == nullptr){   
            push_back(s1);              
        } else {
             node *p = new node();
             p->previous = f;
             p->next = f->next;
             p->value = s1;
             f->next = p;
             f->next->previous = p; 
            if(f == last){
              last= p;
            } 
            num_nodes ++;        
        }             
  }

  void reverse(const std::string &s1, const std::string &s2) {
    node *start = find(s1);
    node *end = find(s2);

    // Verificar se os dois nodos foram encontrados
    if (!start || !end) {
        std::cout << "Erro: Um ou ambos os nodos não foram encontrados.\n";
        return;
    }

    // Garantir que os nodos estejam na ordem correta
    if (start == end) return;  // Se s1 == s2, não há o que inverter

    // Definir os limites do intervalo
    node *before_start = start->previous;
    node *after_end = end->next;

    // Inverter os ponteiros dentro do intervalo
    node *p = start;
    node *temp = nullptr;
    while (p != after_end) {
        temp = p->next;
        p->next = p->previous;
        p->previous = temp;
        p = temp;
    }

    // Ajustar os ponteiros externos ao intervalo
    if (before_start) {
        before_start->next = end;
    } else {
        first = end;  // Caso seja o novo início da lista
    }

    if (after_end) {
        after_end->previous = start;
    } else {
        last = start;  // Caso seja o novo final da lista
    }
}



};
}  // namespace UPF




#include <iostream>

using namespace std;

int function(int a,int b,int c){
    int delta= (b*b)-4*a*c;
    return delta;
}

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    function(a,b,c);
    cout << function(a,b,c) << endl;

    return 0;
}


#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main() {
    list<double> valores;   
    double valor;
    do {
        cin >> valor;
        if (valor != 0.0 && find(valores.begin(), valores.end(), valor) == valores.end()) {
            valores.push_back(valor);
        }

    } while (valor != 0.0);

 
    cout << "Tamanho:" << valores.size() << endl;
    
    list<double> aux =  valores;
    aux.sort([](double a, double b){return a<b;});
     cout << "Maior valor: " << aux.back()<< endl;
    cout <<"Valores: ";
     for(auto n: valores){
        cout << n << " ";
    }
    cout << endl;
    cout <<"Reverso: ";
       for(auto it=valores.rbegin(); it!=valores.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

/*    */
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


/* */

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;    
    stack<int> pilha;
    for (int i = 0; i < N; ++i) {
        string comando;
        cin >> comando;
        char c = comando[0];
        // Verifica se a linha contém um número inteiro
        if(isdigit(c)){
            int valor = stoi(comando);
            pilha.push(valor);
        }else{
            // Caso não seja número, é um comando
            if (comando == "A") { // Soma
                if (pilha.size() >= 2) {
                    int b = pilha.top(); pilha.pop();
                    int a = pilha.top(); pilha.pop();
                    pilha.push(a + b);
                }
            } 
            else if (comando == "S") { // Subtração
                if (pilha.size() >= 2) {
                    int a = pilha.top(); pilha.pop();
                    int b = pilha.top(); pilha.pop();                    
                    pilha.push(a - b);
                }
            } 
            else if (comando == "M") { // Multiplicação
                if (pilha.size() >= 2) {
                    int b = pilha.top(); pilha.pop();
                    int a = pilha.top(); pilha.pop();
                    pilha.push(a * b);
                }
            }
            else if (comando == "P") { // Impressão
                if (!pilha.empty()) {
                    cout << pilha.top() << endl;
                    pilha.pop();
                }
            }
        }
    }

    return 0;
}

/*   */

#include <iostream>

using namespace std;

struct med{
    int idade;
    float altura;
    string qualsaude;
    string nome;
};

int main(){
    int Numclientes;

    cout << "Digite o Numero de Clientes: \n";
    cin >> Numclientes;
    
    med Clientes[Numclientes];
    for(int i=0;i<Numclientes;i++){
        cout << "Nome do cliente em atendimento:\n ";
        cin >> Clientes[i].nome;
        cout << "Idade do cliente em atendimento: \n";
        cin >> Clientes[i].idade;
        cout << "Qual a qualidade de saude do cliente?(otima/boa/ruim/pessima)\n";
        cin >> Clientes[i].qualsaude;
        cout << "Qual a altura do cliente\n";
        cin >> Clientes[i].altura;

        if(Clientes[i].qualsaude == "otima" || Clientes[i].qualsaude == "boa"){
            cout << "Otimo! continue melhorando\n";

        }
        if(Clientes[i].qualsaude == "ruim" || Clientes[i].qualsaude == "pessima"){
            cout << "va a um hospital" << endl;
        }
    }


    return 0;
}

/* */



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

/* */  


