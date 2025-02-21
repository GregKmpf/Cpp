#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;
    double media = (A * 2) + B * 3 + ( C*5 ); 
    double final = media / 10;
    cout << "MEDIA = " << setprecision(1) << fixed << final << endl;

    return 0;
}