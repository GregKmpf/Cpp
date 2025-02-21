#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;
    double delta = (B*B)-4*A*C;
      
    if(A==0.0){
        cout << "Impossivel calcular" << endl;
        return 0;
     }


    if(delta == 0){
        cout << "Impossivel calcular" << endl;
    }
    else if(delta<0){
        cout << "Impossivel calcular" << endl;
    }
    else{
        double raiz1 = (-B + sqrt(delta)) / (2 * A);
        double raiz2 = (-B - sqrt(delta)) / (2 * A);

        cout << "R1 = " << setprecision(5) << fixed << raiz1 << endl;
        cout << "R2 = " << setprecision(5) << fixed << raiz2 << endl;
        
    }

    return 0;
}