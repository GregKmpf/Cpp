#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int dinheiro;
    cin >> dinheiro;

    float notas100, notas50, notas20, notas10, notas5, notas2 = 0;

    // Contando as notas
    notas100 = dinheiro / 100;
    dinheiro %= 100;

    notas50 = dinheiro / 50;
    dinheiro %= 50;

    notas20 = dinheiro / 20;
    dinheiro %= 20;

    notas10 = dinheiro / 10;
    dinheiro %= 10;

    notas5 = dinheiro / 5;
    dinheiro %= 5;

    notas2 = dinheiro / 2;
    dinheiro %= 2;

    // Imprimindo o resultado
    cout << "NOTAS: \n";
    cout << notas100 << " nota(s) de R$ 100.00\n";
    cout << notas50 << " nota(s) de R$ 50.00\n";
    cout << notas20 << " nota(s) de R$ 20.00\n";
    cout << notas10 << " nota(s) de R$ 10.00\n";
    cout << notas5 << " nota(s) de R$ 5.00\n";
    cout << notas2 << " nota(s) de R$ 2.00\n";

    


    return 0;
}