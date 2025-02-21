#include <iostream>


using namespace std;

int main(){
    int var1;
    int* pnt1;//criando um ponteiro pnt1, ponteiro apontar para uma variavel do tipo int
    var1 = 5; //atribuindo um valor a variavel
    pnt1 = &var1; //dizendo que pnt1 recebe o valor da variavel
    cout << pnt1 << endl;
    cout << "Valor da variavel: " << var1 << endl; 
    cout << "Endereco da Variavel: " << pnt1 << "Apenas o primeiro bite" << endl;
    cout << *pnt1; //valor que esta armazenado no ponteiro

    return 0;
}