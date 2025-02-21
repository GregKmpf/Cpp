#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> lista;
    while(true){
    
   
    lista.push_front("maca");//insere no inicio
    lista.push_front("Cebola");//insere no inicio
    lista.push_front("racao");//insere no inicio
    lista.push_front("halls");//insere no inicio

   
    }(!lista.empty());

    cout << "Size: " << lista.size() << endl;
    cout << "Lista = ";
    for(auto l:lista){
        cout << l << " ";
    }

    return 0;
}