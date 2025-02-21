#include <iostream>
#include <iomanip>

using namespace std;

double media(int x, int y){
    return (x + y) / 2;
}

int main(){

    double a,b;
    cin >> a >> b;

    cout << media(a, b) << endl;



    return 0;
}