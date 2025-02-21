#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    cout << "Quanto dinheiro que voce tem para gastar com as garotas?\n";
    int valor;
    cin >> valor;

    cout << "Nossas Garotas sao\n";
    cout << "Jessica = 80$, Paula = 100$, patricia = 70, Jorgina(paulo)=30\n";
    cout << "1- Jessica, 2-Paula, 3-patricia, 4-Jorgina\n";
    int opcao;
    
    
    do{
        cout << "Escolha uma garota:\n";
        cout << "1 - Jessica\n";
        cout << "2 - Paula\n";
        cout << "3 - Patricia\n";
        cout << "4 - Jorgina\n";
        cout << "Digite 5 para sair\n"; // Opção para sair
        cout << endl;
        cin >> opcao;
        switch (opcao)
        {
        case 1:
        if(valor>=80){
            cout << "Escolheu Jessica!\n";
            valor -= 80;
            cout << valor <<endl;
        }
        else{
            cout<< "saldo insuficiente\n";
            cout << endl;
        }
        break;
        case 2:
        if(valor>=100){
            cout << "Escolheu Paula\n";
            valor -= 100;
            cout << valor <<endl;
        }else{
            cout << "Saldo insuficiente\n";
        }
            break;
        case 3:
        if(valor>=70){
            cout << "Escolheu Patricia\n";
            valor -= 70;
            cout << valor <<endl;
        }else{
            break;
        }
        case 4:
        if(valor>=30){
            cout << "Escolheu Jorgina\n";
            valor -= 30;
            cout << valor <<endl;
            break;
        }else{
            cout << "Me poupe! sem dinheiro ate para travesti!\n";
        }
        case 5:
        
            return 0;
        default:
            break;
        }

    
    }while(valor != 0);
   
    



    return 0;
}