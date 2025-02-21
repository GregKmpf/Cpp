#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> candidatos;
    string votou;
    
    int candp1 =0;
    int candp2 =0;
    
        

        while(true){
            cin >> votou;
             if(votou=="um"){
            candp1++;
            }
            if(votou=="dois"){
                candp2++;
            }

            if(votou=="s"){
                break;
            }
        }
    
    cout << "Votos p1: " <<candp1 << endl;
    cout << "Votos p2: " << candp2;

    return 0;

}