#include <iostream>

using namespace std;

int main(){
	
	int num = 10;
	
	cout << num << "\n\n";
	
	// 1ª forma de inverter o valor de uma variável. Multiplicar por (-1)
	// num = num * -1;
	
	// 2ª forma de inverter o valor de uma variável. Colocar operador (-). Porém não altera o valor da variável
	//cout << -num << "\n\n";
	
	// 3ª forma de inverter o valor de uma variável. Associar a variável à ela mesma invertida;
	num = -num;
	
	cout << num << "\n\n";
	
	return 0;
	
}
