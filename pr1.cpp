#include <iostream>
#include <vector>
#include <cfloat> // Para FLT_MAX e FLT_MIN
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<float> vetor;
    int consumobaixo = 0;
    int consumomoderado = 0;
    int consumoalto = 0;

    float menorconsumo = FLT_MAX; // Inicialização com o maior valor possível
    float maiorconsumo = FLT_MIN; // Inicialização com o menor valor possível
    float consumos = 0.0;

    for (int i = 0; i < N; i++) {
        float volts;
        cin >> volts;

        consumos += volts;

        // Contagem de consumo
        if (volts <= 1.0) {
            consumobaixo++;
        } else if (volts <= 2.5) {
            consumomoderado++;
        } else if (volts > 2.5) {
            consumoalto++;
        }

        // Atualização do menor e maior consumo
        if (volts < menorconsumo) {
            menorconsumo = volts;
        }
        if (volts > maiorconsumo) {
            maiorconsumo = volts;
        }

        
    }
    float mediaconsumo = consumos / N;

    // Exibição dos resultados
    cout << "Horas de consumo baixo: " << consumobaixo << endl;
    cout << "Horas de consumo moderado: " << consumomoderado << endl;
    cout << "Horas de consumo alto: " << consumoalto << endl;
    cout << "Menor consumo: " << menorconsumo << endl;
    cout << "Maior consumo: " << maiorconsumo << endl;
    cout << "Media dos consumos: " << fixed <<setprecision(2) << mediaconsumo << endl;

    return 0;
}
