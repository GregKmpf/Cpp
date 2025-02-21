#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main(){
    queue<string> fila;
    set<string> elementos;
    string entradas;
    string maior = "";

    while(true){
        cin >> entradas;

        if(entradas=="fim"){
            break;
        }
        

         if (elementos.find(entradas) == elementos.end()) {
            
            elementos.insert(entradas); // Adiciona ao conjunto
        }
        

        
        if(entradas>maior){
            maior = entradas;
        }

   
    

    }

     while(!fila.empty()){
        cout << fila.front()<< " ";
        fila.pop();
    }

    cout << "Tamanho: " << elementos.size() << endl;
    cout << "Maior: " << maior << endl;

    return 0;
}