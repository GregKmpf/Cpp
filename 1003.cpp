#include <iostream>
#include <iomanip> // Para std::setprecision

using namespace std;

int main() {
    // Definindo o valor de pi
    const double pi = 3.14159;
    double raio;

    // Lendo o valor do raio
    cin >> raio;

    // Calculando a área
    double area = pi * (raio * raio);

    // Imprimindo o resultado com 4 casas decimais
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
