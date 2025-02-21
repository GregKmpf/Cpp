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