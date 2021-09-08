#include <iostream>

using namespace std;

int main(){

    int n1,n2,nota;
    string res;

    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite a nota 2: ";
    cin >> n2;

    nota = n1+n2;

    //(nota>=60) ? res="Aprovado" : res="Reprovado";

    res = (nota >= 60) ? "Aprovado" : "Reprovado";

    cout << "A situacao do aluno: " << res << "!\n";

    return 0;

}
