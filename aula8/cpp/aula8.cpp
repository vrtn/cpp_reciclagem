#include <iostream>

using namespace std;

int main(){
	
	int num = 10;
	
	cout << num << "\n\n";
	
	// 1� forma de inverter o valor de uma vari�vel. Multiplicar por (-1)
	// num = num * -1;
	
	// 2� forma de inverter o valor de uma vari�vel. Colocar operador (-). Por�m n�o altera o valor da vari�vel
	//cout << -num << "\n\n";
	
	// 3� forma de inverter o valor de uma vari�vel. Associar a vari�vel � ela mesma invertida;
	num = -num;
	
	cout << num << "\n\n";
	
	return 0;
	
}
