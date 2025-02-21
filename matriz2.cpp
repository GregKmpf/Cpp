#include <iostream>

using namespace std;

int main(){



    int a,b;
    cin >> a >> b;

    int** matriz = new int*[b];

    for(int i=0;i<a;i++){
        matriz[i] = new int[b]; //aloca um inteiro para cada linha da matriz
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> matriz[i][j];
        }
    }

    cout << "--MATRIZ NORMAL--\n";
    for(int i=0;i<a;i++){
    cout << "[ ";    
        for(int j=0;j<b;j++){
            cout << matriz[i][j] << " ";
        }
     cout << "]";   
     cout << endl;
    }

    cout << "Matriz Inversa\n";
    for(int i=0;i<a;i++){
    cout << "[ ";    
        for(int j=0;j<b;j++){
            cout << matriz[j][i] << " ";
        }
     cout << "]";   
     cout << endl;
    }

    cout << "Matriz de tras pra frente\n";
    for(int i=0;i<a;i--){
    cout << "[ ";    
        for(int j=0;j<b;j--){
            cout << matriz[i][j] << " ";
        }
     cout << "]";   
     cout << endl;
    }

    return 0;
}