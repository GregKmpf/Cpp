#include <iostream>
#include <utility>

using namespace std;

void contarParesImpares(int numb){
    if(numb%2 == 0){
        cout << "Numero par: " << numb << endl;
    }
    else{
        cout << "Numero Impar: " << numb << endl;
    }
      

}



int main(){

    for(int i = 0; i<=0;i--){
        int numb;
        cin >> numb; 
        contarParesImpares(numb);
    
    }
    return 0;
}