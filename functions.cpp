#include <iostream>

using namespace std;

int function(int a,int b,int c){
    int delta= (b*b)-4*a*c;
    return delta;
}

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    function(a,b,c);
    cout << function(a,b,c) << endl;

    return 0;
}