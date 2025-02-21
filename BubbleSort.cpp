#include <iostream>
using namespace std;

void BubbleSort(int lista[], int x){
    for(int i = 0; i < x;i++){
        for(int j = 0; j < x -i - 1;j++){
            if(lista[j]>lista[j+1]){
                int aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;

            }
        }
    }
}

void imprimir(int lista[], int x){
    for(int i=0; i<x; i++){
        cout << lista[i] << " ";
    }
    cout << endl;
}


int main(){
    int lista[] = {10,20,30,22,11,23};
    int x = sizeof(lista) / sizeof(lista[0]);

    BubbleSort(lista, x);

    cout << "Lista Ordenada: ";
    imprimir(lista, x);

    return 0;
}