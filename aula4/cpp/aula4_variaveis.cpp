#include <iostream>

using namespace std;

int main(){

    // TIPO NOME;
    // TIPO NOME = VALOR;

    int vidas = 0; // 10, 25
    char letra = 'b'; // 'b'
    char letras[20];
    double decimal = 5.2; // 2.5
    float decimal2 = 5.2; // double com precisão menor
    bool vivo = true; // true
    string nome =  "Zanini"; // "Bruno"

	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite um valor real: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;

	cout << "\n" << vidas << "\n" << letra << "\n" << decimal << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	

	return 0;
}
