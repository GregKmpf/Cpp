#include <iostream>

using namespace std;

int main(){
    int var1[5] = {22,33,44,21,11};
    int var2[5] = {11,22,11,21,22};

    for(int i=0;i<5;i++){
        if(var1[i]!=var2[i]){
            cout<< var1[i] << endl;
        }
    }


    return 0;
}