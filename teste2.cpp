#include <stack>
#include <iostream>
#include <string> //to use string data type

using namespace std;

int main(){
    stack<double> pilha; 
    string s;
    double v1, v2;
    while(true){
        cin >> s;
        if(s == "exit"){
            break;
        }
        if(s!="-" && s!= "+"){
            pilha.push(stod(s));
        }else{
            if(pilha.size() < 2){
                v1 = pilha.top();
                pilha.pop();
                v2 = pilha.top();
                pilha.pop();
                if(s=="+"){
                    pilha.push(v1+v2);
                
                }
                else if(s=="-"){
                    pilha.push(v1-v2);
                    cout << pilha.top() << endl;
                }
                else{
                    cout << "Underflow" << endl;
                }
            }
        }
    }



    return 0; 
}