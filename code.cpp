#include <iostream> // string esta incluido no iostream
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

struct aluno{
    string name;
    int idade;
    int matricula;
    float n1,nt2,nt3, media;
    
};

bool cmp(const aluno &a,const aluno &b){// passar valor por referencia, const para nn mudar vlr
    if(a.media != b.media) return a.media > b.media;
    if(a.idade != b.idade) return a.idade < b.idade;
    if(a.name != b.name)  return a.name < b.name;
    return a.matricula < b.matricula;
}

int main(){
    aluno aux;
    vector <aluno> turma; // armazenar a media
    int n;
    cin >> n;
    while(n--){//fica mais rapido
        cin >> aux.name >> aux.idade >> aux.matricula >> aux.n1 >> aux.nt2 >> aux.nt3;
        aux.media = (aux.n1+aux.nt2+aux.nt3) / 3;
        turma.push_back(aux);
    }

    sort(turma.begin(), turma.end(), cmp); // adiciona uma função que a gente escreve
    for(auto &a : turma){ //para cada aluno a contido na turma
        cout << a.name <<  " idade: "
             << a.idade << " Matric: " << a.matricula <<
              " Media: " << a.media << endl;

    }
}
