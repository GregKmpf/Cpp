#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 0 || N >= 1000000) {
        cout << "Valor fora do intervalo permitido." << endl;
        return 1;
    }

    cout << N << endl;

    int notas100 = N / 100;
    N %= 100;
    int notas50 = N / 50;
    N %= 50;
    int notas20 = N / 20;
    N %= 20;
    int notas10 = N / 10;
    N %= 10;
    int notas5 = N / 5;
    N %= 5;
    int notas2 = N / 2;
    N %= 2;
    int notas1 = N / 1;

    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
