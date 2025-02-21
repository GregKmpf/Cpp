#include <iostream>
#include <stack>

using namespace std;

int main(){


    cout << "---CALCULADORA----\n";
    
    cout << "Digite: 1(+) 2(-) 3(*) 4(/) 5(sair)" << endl;

    
    stack<int> calc;
    int operatod;
    cin >> operatod;
    cout << "Digite dois numeros: ";
    float num1, num2;
    cin >> num1 >> num2;
    int result;


    while(operatod!=5){
      switch(operatod){
        case 1:
        
           result = num1 + num2; 
           cout << "Adicao: " << result;
            break;
        
        case 2:
            
            result = num1 - num2;
            cout << "Menos: " << result << endl;
            break;


        case 5:
            break;
    

    }

    }


    
    return 0;
}