#include <iostream>

using namespace std;

int n1, n2; // Vari�vies Globais

int main(){
	
	int n3, n4; // Vari�veis locais
	int res;
	
	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res = n1+n2*n4;
	
	cout << "Soma de todas os valores: " << res << "\n\n";
	
	return 0;
}
