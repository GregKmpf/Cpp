#include <iostream>

using namespace std;

void grade(double score){
    if(score >= 90)
        cout << "grade 90";
    else if(score >=80)
        cout << "grade 80";
    else if(score >= 70)
        cout << "grade 70";
    else if(score >=60)
        cout << "grade 60";
    else if(score >=50)
        cout << "grade 50";
    else if(score >= 40)
        cout << "grade 40";
    else {
        cout << "baixa";
    }
};


int main(){
    
    double score;
    cin >> score;

    grade(score);
    return 0;
}