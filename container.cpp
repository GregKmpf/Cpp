#include <iostream>

using namespace std;

int main(){
    int vet[4]={10,20,30,40};

    int tamanho = sizeof(vet);
    cin >> tamanho;
    cout << tamanho;

    for(int i=0;i<tamanho;i++){
        cout << vet[i] << endl;

    }


    return 0;
}