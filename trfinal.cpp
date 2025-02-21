#include <iostream>
#include <iomanip> //formatar saida
#include <queue> //fila
#include <climits> // Para usar INT_MAX e INT_MIN, que representam maior e menor de um int

using namespace std;

int main() { //declarações das variaveis
    queue<int> FilaParque; //criando uma fila
    string entrada; //uma string de controle
    int totalClientes =0; //somadores
    int tamanmax =0;
    int tempoMinEspera = INT_MAX;
    int tempoMaxEspera = INT_MIN;
    int saida=0;
    
    //execução do code

    while (true) {
        //cout << "Digite 'E' para informar os horarios de entrada." << endl;
        //cout << "Digite 'Q' para sair do programa." << endl;
        //cout << "Digite D para ver quantidade de clientes" << endl;
        //cout << "Digite S para saida de um elemento" << endl;
        
        cin >> entrada;

        if (entrada == "Q" || entrada == "q") { //saida
            
            
            
            cout << "Clientes aguardando na fila: " << FilaParque.size() << endl;
            cout << "Clientes ja atendidos: " << saida << endl;
            cout << "Tamanho maximo da fila: " << tamanmax << " clientes"<< endl;
            cout << "Tempo maximo de espera: " << tempoMaxEspera << " min"<< endl;
            cout << "Tempo minimo de espera: " << tempoMinEspera << " min"<<  endl;
            
            

            break; 
        } 

        if (entrada == "E" || entrada == "e") { //entrada
            
            int minutos; 
            int horas;
            cin >> horas >> minutos;
            FilaParque.push(horas * 60 + minutos); //horario convertido em minutos e adicionado a fila 
            totalClientes ++;
            
         
            
            if (FilaParque.size() > tamanmax) {
             tamanmax = FilaParque.size(); // Atualiza o tamanho máximo da fila
            }
            
        }

        if (entrada == "D" || entrada == "d") { //dados
            cout << "Quantidade de Clientes: " << FilaParque.size() << endl;
            int clientesAtendidos = totalClientes - FilaParque.size();
            cout << "Quantidade de Clientes atendidos: " << clientesAtendidos << endl;
            cout << "Tamanho maximo da fila: " << tamanmax << endl;
        }

        if (entrada=="S" || entrada == "s"){ //saida de elemento
                

                if(FilaParque.empty()){ //vereficando se a fila esta vazia antes do pop
                    cout << "Saida impossivel de fila vazia(ignorado)\n";
                    continue; 
                    
                 }
                saida++;
                int horarioEntrada = FilaParque.front();
                FilaParque.pop();
                

                int horasAtuais, minutosAtuais;
                
                cin >> horasAtuais >> minutosAtuais;
                int horarioSaida = horasAtuais * 60 + minutosAtuais;

                int tempoEspera = horarioSaida - horarioEntrada; //atualiza o tempo de espera e tempminemax
                tempoMinEspera = min(tempoMinEspera, tempoEspera);
                tempoMaxEspera = max(tempoMaxEspera, tempoEspera);

          
        cout << "Saida de cliente as: " << setw(2) << setfill('0') <<  horasAtuais << ':' << setw(2) << setfill('0') << minutosAtuais << endl;
        cout << "Tempo de espera: " <<tempoEspera << " Minutos" << endl;


        


    }}

    cout << "\nHorarios na fila de entrada:\n";
    while (!FilaParque.empty()) { //se a fila nao estiver vazia, exibe os horarios restantes
        cout << "Horario: " <<  (FilaParque.front() / 60) << ":" << setw(2) << setfill('0') << (FilaParque.front() % 60) << endl;
        FilaParque.pop();
        
    }
    
   
    return 0;
}
